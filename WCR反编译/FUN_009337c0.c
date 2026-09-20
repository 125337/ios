// FUN_009337c0 @ 009337c0

void FUN_009337c0(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_68;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSException_026cea98;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSException_026cea98,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_68;
  uVar1 = 0;
  _OSAtomicCompareAndSwap32(0,1,&DAT_028cf3c0);
  if ((uVar1 & 1) != 0) {
    FUN_00933a10(local_28);
    _OSAtomicCompareAndSwap32(1,0,&DAT_028cf3c0);
  }
  uVar3 = local_20;
  if ((DAT_028cf3b8 == (code *)0x0) || (DAT_028cf3b8 == FUN_009337c0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
  }
  else {
    (*DAT_028cf3b8)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

