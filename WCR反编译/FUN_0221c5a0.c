// FUN_0221c5a0 @ 0221c5a0

void FUN_0221c5a0(size_t param_1,undefined8 param_2)

{
  if (PTR__swift_coroFrameAlloc_02578b20 != (undefined *)0x0) {
    _swift_coroFrameAlloc(param_1,param_2);
    return;
  }
  _malloc(param_1);
  return;
}

