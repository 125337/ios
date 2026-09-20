// floatBarMove @ 01f97d10

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::floatBarMove(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedPaths_026ba4d0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedPaths_026ba4d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_initWeak(auStack_30,local_18);
    IVar3 = local_18;
    puVar1 = PTR_WCRefineVoicePackManagerViewController_026cea28;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01f97f3c;
    local_48 = &DAT_0257c948;
    _objc_copyWeak(auStack_38,auStack_30);
    IVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentFolderPickerFrom_completi_026c9868,IVar3,&local_60);
    _objc_storeStrong(&local_40);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

