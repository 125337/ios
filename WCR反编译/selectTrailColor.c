// selectTrailColor @ 01f22d70

/* Function Stack Size: 0x10 bytes */

void WCRefineTouchTrailViewController::selectTrailColor(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = local_28;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCurrentTrailColor_026c8468);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_hexStringFromColor__026b30d0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar5 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  IVar3 = local_28;
  puVar4 = local_40;
  puVar2 = local_48;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_01f23070;
  local_68 = &DAT_02586c58;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_38;
  local_60 = IVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,puVar4,puVar2);
  local_50 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,&cf_bhr);
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_88 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar2,1,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

