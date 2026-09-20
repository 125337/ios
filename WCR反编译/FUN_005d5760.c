// FUN_005d5760 @ 005d5760

byte FUN_005d5760(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_120;
  undefined4 local_e4;
  cfstringStruct *local_d0;
  cfstringStruct *local_90;
  undefined *local_78;
  undefined4 local_70;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_51 = 0;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_tid_026a15d8);
  if (((ulong)pcVar2 & 1) == 0) {
    local_90 = (cfstringStruct *)0x0;
  }
  else {
    local_90 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tid_026a15d8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_90;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar2 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_1Y_elSR_);
    local_21 = 0;
    local_58 = 1;
  }
  else {
    local_69 = 0;
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_contentDesc_026a4a10);
    if (((ulong)pcVar2 & 1) == 0) {
      local_d0 = (cfstringStruct *)0x0;
    }
    else {
      local_d0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentDesc_026a4a10);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d0;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_createtime_026a46f0);
    if (((ulong)pcVar2 & 1) == 0) {
      local_e4 = 0;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_createtime_026a46f0);
      local_e4 = SUB84(pcVar2,0);
    }
    local_70 = local_e4;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    pcVar2 = local_60;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) == 0) {
      local_120 = &cf___;
    }
    else {
      local_120 = local_60;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_addHiddenOwnMomentTid_desc_time__026a47a0,pcVar1,local_120,local_70);
    (*(code *)PTR__objc_release_02578630)();
    FUN_005a8d0c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTimelineDataItems_026a49a8);
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_reloadTimelineDataItems_026a49a8);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__S_WgSWn_Sm);
    local_21 = 1;
    local_58 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

