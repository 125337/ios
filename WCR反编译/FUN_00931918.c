// FUN_00931918 @ 00931918

void FUN_00931918(code *param_1)

{
  _NSGetUncaughtExceptionHandler();
  if ((param_1 != FUN_0092fa40) && (param_1 == (code *)0x0)) {
    param_1 = FUN_0092fa40;
    _NSSetUncaughtExceptionHandler();
  }
  FUN_0092fe18();
  FUN_0093136c();
  FUN_0092ff80();
  if ((((ulong)param_1 & 1) != 0) && (std::get_terminate(), param_1 != FUN_0092ff8c)) {
    if (param_1 != (code *)0x0) {
      DAT_028ce3a0 = param_1;
    }
    std::set_terminate(FUN_0092ff8c);
  }
  return;
}

