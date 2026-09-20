// editAtMentionJumpColor @ 018a7bc4

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::editAtMentionJumpColor(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_atMentionNotificationJumpColor_026a4540);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_78 = &cf_800080;
  }
  pcVar3 = &cf__;
  (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_78);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_atMentionNotificationJumpDarkCol_026a4538);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_88 = &cf_800080;
  }
  pcVar3 = &cf__;
  (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_88);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  IVar1 = local_18;
  pcVar3 = local_30;
  pcVar2 = local_38;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_018a7ea0;
  local_50 = &DAT_02589dc8;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar3,pcVar2,&local_68);
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitle__0269cef0,&cf_blre_);
  IVar1 = local_18;
  puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_presentViewController_animated_c_0269d2b0,puVar4,1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

