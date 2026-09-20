// openPaymentLinkPresetInput @ 01a37b0c

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::openPaymentLinkPresetInput(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_28,local_18);
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01a37cc8;
  local_48 = &DAT_0258ae80;
  _objc_copyWeak(auStack_40,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4058000000000000,puVar3,PTR_s_presentPageSheetSingleLineInputW_026a46e0,&cf_6e>ke_g,
             &cf_vcS_INe_gOR_v0_kSb,puVar2,&local_60);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_28);
  return;
}

