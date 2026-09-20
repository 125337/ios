// FUN_005949f0 @ 005949f0

void FUN_005949f0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  cfstringStruct *local_b0;
  char *local_80;
  char *local_78;
  char *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [3];
  char *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar3 = "WCTableViewCellManager";
  _objc_getClass();
  pcVar4 = &cf_icons_outlined_time;
  local_30 = pcVar3;
  FUN_00594fd8();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = local_28;
  local_48[0] = pcVar4;
  _objc_getAssociatedObject(local_28,&DAT_028cb62b);
  _objc_retainAutoreleasedReturnValue();
  local_61 = false;
  bVar1 = local_b0 == (cfstringStruct *)0x0;
  local_50 = local_b0;
  if (bVar1) {
    local_b0 = &cf_N_e;
  }
  else {
    FUN_0057c648();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_b0;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b0;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  local_70 = (char *)0x0;
  pcVar3 = "WCColor";
  _objc_getClass();
  local_78 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_FG_0_026a1348);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar5 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_FG_0_026a1348);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_70;
    local_70 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  puVar2 = PTR_s_normalCellForSel_target_leftImag_026a5548;
  local_80 = (char *)0x0;
  if ((local_30 != (char *)0x0) && (local_48[0] != (cfstringStruct *)0x0)) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,
               PTR_s_normalCellForSel_target_leftImag_026a5548);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,puVar2,PTR_s_WCRefineOnMomentsScheduledCell_026a5490,local_28,local_48[0],
                 &cf__eS,local_70,0,local_58,0,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_80;
      local_80 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  if (local_80 == (char *)0x0) {
    pcVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_WCRefineOnMomentsScheduledCell_026a5490,local_28,&cf__eS,local_58,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_80;
    local_80 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_setFSeperateLineLeftInset__026a5550);
  if (((ulong)pcVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4040000000000000,local_80,PTR_s_setFSeperateLineLeftInset__026a5550);
  }
  pcVar3 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar3);
  return;
}

