// presentQuitDoubleConfirmDeleteAllMsg: @ 018a5418

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void WCRefineChatRoomFunctionViewController::presentQuitDoubleConfirmDeleteAllMsg_
               (ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  undefined *local_188;
  cfstringStruct *local_130;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  ID local_d0;
  undefined1 auStack_c8 [8];
  byte local_c0;
  undefined1 auStack_b8 [15];
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  ID local_48;
  ID local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_getAssociatedObject(param_1,DAT_028c65f8);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = local_28;
  local_40 = param_1;
  _objc_getAssociatedObject(local_28,DAT_028c6600);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar8);
  IVar8 = local_40;
  local_48 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (IVar8 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lg);
    local_4c = 1;
  }
  else {
    local_61 = false;
    bVar1 = local_48 == 0;
    if (bVar1) {
      local_130 = &::cf___;
    }
    else {
      local_130 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &::cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_130;
    }
    local_61 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_130;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar7 = &cf__;
    if ((local_31 & 1) == 0) {
      pcVar7 = &cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_78 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_qSid_O);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_88 = &cf_Q_knxNSd;
    local_99 = 0;
    local_a9 = 0;
    if ((local_31 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_stringWithFormat__0269cca8,&cf_nxT_zsS);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = local_188;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_stringWithFormat__0269cca8,&cf_nxT_zsS);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_188;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_188;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    _objc_initWeak(auStack_b8,local_28);
    puVar3 = local_78;
    puVar2 = local_80;
    puVar5 = PTR_WCRefineHelper_026ce000;
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_018a5ac8;
    local_e8 = &DAT_02589d38;
    pcVar7 = local_88;
    (*(code *)PTR__objc_retain_02578638)();
    puVar6 = local_90;
    local_e0 = pcVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = puVar6;
    _objc_copyWeak(auStack_c8,auStack_b8);
    IVar8 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_31 & 1;
    local_d0 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_presentNativePageSheetConfirmWit_0269ed28,puVar3,puVar2,0,&cf___,&cf_Sm,
               &local_100);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar5);
    _objc_storeStrong(&local_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_destroyWeak(auStack_b8);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

