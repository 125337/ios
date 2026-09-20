// FUN_0089fa0c @ 0089fa0c

void FUN_0089fa0c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_40;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  uVar2 = local_18;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_bytes_026a9630);
  for (local_40 = 0; local_40 < uVar1 / 0x18; local_40 = local_40 + 1) {
    uVar4 = *(ulong *)(uVar2 + local_40 * 0x18);
    lVar5 = *(long *)(uVar2 + local_40 * 0x18 + 8);
    lVar6 = *(long *)(uVar2 + local_40 * 0x18 + 0x10);
    if ((((uVar4 != 0) && (lVar5 != 0)) && (lVar6 != 0)) &&
       ((uVar3 = uVar4, FUN_008a0bb0(), (uVar3 & 1) == 0 &&
        (_class_getInstanceMethod(uVar4,lVar5), uVar4 != 0)))) {
      uVar3 = uVar4;
      _method_getImplementation();
      if (uVar3 - lVar6 != 0) {
        _method_setImplementation(uVar3 - lVar6,uVar4,lVar6);
      }
    }
  }
  _objc_storeStrong(local_40 - uVar1 / 0x18,&local_18,0);
  return;
}

