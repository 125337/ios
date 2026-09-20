// showVoiceInputBreathingLightPaletteColorPickerForIndex: @ 01a3b91c

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::showVoiceInputBreathingLightPaletteColorPickerForIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [8];
  long_long local_88;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined *local_60;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  undefined *local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  FUN_01a3ac58();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_38;
  local_40 = puVar2;
  if (((long)local_38 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0),
     (long)puVar2 <= (long)lVar1)) {
    local_44 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_voiceInputBreathingLightEffectiv_026bc508,local_38,&cf_lightHex);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_voiceInputBreathingLightEffectiv_026bc508,local_38,&cf_darkHex);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar5 = local_40;
    local_58 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_initWeak(auStack_68,local_28);
    puVar2 = PTR_WCRefineColorPickerController_026ceed8;
    _objc_alloc();
    IVar4 = local_50;
    IVar3 = local_58;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01a3bcfc;
    local_98 = &DAT_0258aef0;
    _objc_copyWeak(auStack_90,auStack_68);
    local_88 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,IVar4,IVar3,&local_b0);
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle__0269cef0,local_60);
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_70);
    local_b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar2,1,0);
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_70,0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

