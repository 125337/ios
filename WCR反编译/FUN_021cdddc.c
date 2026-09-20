// FUN_021cdddc @ 021cdddc

undefined1  [16] FUN_021cdddc(undefined *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_20;
  
  if (-1 < (long)param_1) {
    _swift_retain(PTR___swiftEmptyArrayStorage_02578b18);
    if ((long)param_1 < 1) {
      local_20 = PTR___swiftEmptyArrayStorage_02578b18;
    }
    else {
      _swift_release(-(long)param_1,PTR___swiftEmptyArrayStorage_02578b18);
      uVar3 = 0;
      __s8Dispatch0A13WorkItemFlagsVMa(0);
      local_20 = param_1;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(param_1,uVar3);
      _swift_bridgeObjectRetain();
      *(undefined **)(local_20 + 0x10) = param_1;
      _swift_release();
    }
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(local_20);
    _swift_bridgeObjectRelease(local_20);
    lVar4 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
    _swift_release();
    auVar1._8_8_ = local_20 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
    auVar1._0_8_ = local_20;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x21cdecc);
  (*pcVar2)();
}

