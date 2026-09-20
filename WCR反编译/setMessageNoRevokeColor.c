// setMessageNoRevokeColor @ 01a72a68

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::setMessageNoRevokeColor(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_e8;
  cfstringStruct *local_c8;
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
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_c8 = &cf_66CD00;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_c8;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_e8 = &cf_66CD00;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_e8;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar5 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar3 = local_38;
  local_48 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
  local_59 = 0;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_f8 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_f8;
  }
  else {
    local_f8 = local_38;
  }
  local_59 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_f8;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__);
  local_71 = 0;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_108 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_108;
  }
  else {
    local_108 = local_40;
  }
  local_71 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_108;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  puVar5 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  IVar2 = local_28;
  pcVar4 = local_50;
  pcVar3 = local_68;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_01a72f40;
  local_90 = &DAT_02589dc8;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar4,pcVar3,&local_a8);
  local_80 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,&cf_bere_);
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

