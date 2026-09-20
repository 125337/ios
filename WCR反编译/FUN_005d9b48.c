// FUN_005d9b48 @ 005d9b48

void FUN_005d9b48(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38 [3];
  char *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = "WCTableViewCellManager";
  _objc_getClass();
  local_20 = pcVar2;
  FUN_005d9efc();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = pcVar2;
  FUN_005da378();
  _objc_retainAutoreleasedReturnValue();
  local_48 = (char *)0x0;
  pcVar3 = "WCColor";
  local_40 = pcVar2;
  _objc_getClass();
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_FG_0_026a1348);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_FG_0_026a1348);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  puVar1 = PTR_s_normalCellForSel_target_leftImag_026a5548;
  local_58 = (char *)0x0;
  if ((local_20 != (char *)0x0) && (local_38[0] != (char *)0x0)) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,
               PTR_s_normalCellForSel_target_leftImag_026a5548);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,puVar1,PTR_s_WCRefineOnMomentsTailCell_026a5c58,local_18,local_38[0],
                 &cf_SW>__,local_48,0,local_40,0,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  if (local_58 == (char *)0x0) {
    pcVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_WCRefineOnMomentsTailCell_026a5c58,local_18,&cf_SW>__,local_40,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setFSeperateLineLeftInset__026a5550);
  if (((ulong)pcVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4040000000000000,local_58,PTR_s_setFSeperateLineLeftInset__026a5550);
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

