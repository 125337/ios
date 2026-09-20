// FUN_021cded8 @ 021cded8

undefined1  [16] FUN_021cded8(undefined *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 uVar3;
  undefined *local_20;
  
  if (-1 < (long)param_1) {
    _swift_retain(PTR___swiftEmptyArrayStorage_02578b18);
    if ((long)param_1 < 1) {
      local_20 = PTR___swiftEmptyArrayStorage_02578b18;
    }
    else {
      _swift_release(-(long)param_1,PTR___swiftEmptyArrayStorage_02578b18);
      uVar3 = 0;
      FUN_021cdfac(0);
      local_20 = param_1;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(param_1,uVar3);
      _swift_bridgeObjectRetain();
      *(undefined **)(local_20 + 0x10) = param_1;
      _swift_release();
    }
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(local_20);
    _swift_bridgeObjectRelease(local_20);
    _swift_release();
    auVar1._8_8_ = local_20 + 0x20;
    auVar1._0_8_ = local_20;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x21cdfac);
  (*pcVar2)();
}

