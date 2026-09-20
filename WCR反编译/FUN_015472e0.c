// FUN_015472e0 @ 015472e0

void FUN_015472e0(long param_1,byte param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  uVar3 = 0;
  local_21 = param_2;
  local_20 = param_1;
  if (((DAT_028e3880 == 0) || (uVar3 = param_1 - DAT_028c5f60, uVar3 != 0)) ||
     (uVar1 = (param_2 & 1) - (DAT_028e39f8 & 1), uVar3 = (ulong)uVar1, uVar1 != 0)) {
    FUN_01563940(uVar3);
    local_18 = 0;
  }
  else {
    if (DAT_028e3888 != 0) {
      FUN_01563b28(DAT_028e3888);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3888,PTR_s_removeFromSuperview_026ca800);
    }
    lVar2 = DAT_028e3880;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar2;
    _objc_storeStrong(&DAT_028e3880);
    _objc_storeStrong(&DAT_028e3888,0);
    _objc_storeStrong(&DAT_028e3890,0);
    lVar2 = local_30;
    DAT_028c5f58 = 0xffffffffffffffff;
    DAT_028c5f60 = -1;
    DAT_028c5f68 = 0xffffffffffffffff;
    DAT_028e39f0 = 0;
    DAT_028e39f8 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

