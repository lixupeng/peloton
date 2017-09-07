#include "codegen/function/functions.h"

namespace peloton {
namespace codegen {
namespace function {

std::unordered_map<std::string, BuiltInFuncType>
    BuiltInFunctions::func_map;

void BuiltInFunctions::AddFunction(const std::string &func_name,
                                   BuiltInFuncType func) {
  func_map.emplace(func_name, func);
}

BuiltInFuncType BuiltInFunctions::GetFuncByName(const std::string &func_name) {
  auto func = func_map.find(func_name);
  if (func == func_map.end())
    return nullptr;
  return func->second;
}

}  // namespace function
}  // namespace codegen
}  // namespace peloton
