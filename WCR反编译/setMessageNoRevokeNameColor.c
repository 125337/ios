// setMessageNoRevokeNameColor @ 01a73228

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::setMessageNoRevokeNameColor(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_e0;
  cfstringStruct *local_c0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
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
  local_c0 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_c0 = &cf_1E90FF;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_c0;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_e0 = &cf_1E90FF;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_e0;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
  local_51 = 0;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_f0 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_f0;
  }
  else {
    local_f0 = local_38;
  }
  local_51 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_f0;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__);
  local_69 = 0;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_100 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_100;
  }
  else {
    local_100 = local_40;
  }
  local_69 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_100;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar5 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  IVar2 = local_28;
  pcVar4 = local_48;
  pcVar3 = local_60;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01a736bc;
  local_88 = &DAT_02589dc8;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar4,pcVar3,&local_a0);
  local_78 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,&cf_bTyre_);
  puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar5,1);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

