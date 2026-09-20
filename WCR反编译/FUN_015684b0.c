// FUN_015684b0 @ 015684b0

void FUN_015684b0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  if (*(long *)(param_1 + 0x30) == DAT_028e3958) {
    uVar1 = param_1;
    local_20 = param_1;
    local_18 = param_1;
    FUN_01563370(0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    FUN_01532090();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    local_38 = uVar1;
    if ((local_28 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0), uVar1 != 0)) {
      lVar2 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
      if ((lVar2 != 0) &&
         (uVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20)),
         (uVar1 & 1) != 0)) {
        uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
        FUN_01568640(uVar3,1);
        local_39 = (byte)uVar3;
      }
    }
    FUN_015681f8(*(undefined8 *)(param_1 + 0x30));
    if ((local_39 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_1ZPN_S_UwS_S1Y_);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

