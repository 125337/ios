// openAtMeAutoReplySelectedGroupsPicker: @ 01a5f8f4

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::openAtMeAutoReplySelectedGroupsPicker_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_30,local_18);
  IVar2 = local_18;
  puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01a5fab8;
  local_50 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_48,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ab898,IVar2,&cf_bVY_J,puVar4,&local_68
            );
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

