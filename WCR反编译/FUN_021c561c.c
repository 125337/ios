// FUN_021c561c @ 021c561c

void FUN_021c561c(code *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_021c7530();
  if (param_1 != (code *)0x0) {
    (*param_1)(param_3);
    _swift_release(param_2);
  }
  return;
}

