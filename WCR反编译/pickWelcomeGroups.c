// pickWelcomeGroups @ 018aa6e4

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::pickWelcomeGroups(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_80 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_80;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_initWeak(auStack_30,local_18);
  IVar1 = local_18;
  puVar3 = local_28;
  puVar2 = PTR_WCRefineChatRoomPicker_026cef60;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_018aa8b8;
  local_40 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_38,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentFromViewController_title__026ab898,IVar1,&cf_beQ__k_J,puVar3,
             &local_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

