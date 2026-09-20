// FUN_021f524c @ 021f524c

void FUN_021f524c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  FUN_0219fb8c();
  if (param_2 != (code *)0x0) {
    (*param_2)();
    _swift_release(param_3);
  }
  return;
}

