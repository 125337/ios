// setLeaveTipColor @ 018aebec

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::setLeaveTipColor(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_d0;
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  undefined *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
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
  local_d0 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_d0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_d0;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_f0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_f0;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_100 = &cf_888888;
  }
  else {
    local_100 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_100;
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_110 = &cf_888888;
  }
  else {
    local_110 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_110;
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__);
  local_61 = 0;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_120 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_120;
  }
  else {
    local_120 = local_48;
  }
  local_61 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_120;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__);
  local_79 = 0;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_130 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_130;
  }
  else {
    local_130 = local_50;
  }
  local_79 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_130;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  puVar5 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  IVar2 = local_28;
  pcVar4 = local_58;
  pcVar3 = local_70;
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_018af150;
  local_98 = &DAT_02589dc8;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar4,pcVar3,&local_b0);
  local_88 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,&cf_bc_yre_);
  puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar5,1);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

