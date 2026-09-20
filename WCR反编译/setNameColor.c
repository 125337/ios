// setNameColor @ 01ba8160

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBlockSettingsViewController::setNameColor(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_f8;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  undefined *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_messageBlockNameColor_026a4208);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_c0 = &cf_1E90FF;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_c0;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageBlockNameDarkColor_026a4200);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_d8 = &cf_1E90FF;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_d8;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__);
  local_59 = 0;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_e8 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_e8;
  }
  else {
    local_e8 = local_40;
  }
  local_59 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_e8;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  pcVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__);
  local_71 = 0;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_f8 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_f8;
  }
  else {
    local_f8 = local_48;
  }
  local_71 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_f8;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  puVar5 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  IVar3 = local_28;
  pcVar2 = local_50;
  pcVar4 = local_68;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_01ba85dc;
  local_90 = &DAT_02589dc8;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar2,pcVar4,&local_a8);
  local_80 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,&cf_bO__re_);
  puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar5,1);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

