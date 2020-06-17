#include <napi.h>

namespace app {

Napi::Value Rwar(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::TypeError::New(env, "Wrong number of arguments")
      .ThrowAsJavaScriptException();
  return env.Null();
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "rwar"), Napi::Function::New(env, Rwar));
  return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)

}  // namespace app
