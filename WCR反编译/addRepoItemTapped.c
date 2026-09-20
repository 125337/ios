// addRepoItemTapped @ 01a0b300

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordMultiReplyEditorViewController::addRepoItemTapped(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_28,local_18);
  IVar2 = local_18;
  puVar1 = PTR_WCRefineMessageRepositoryPicker_026cf050;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01a0b414;
  local_38 = &DAT_0257c558;
  _objc_copyWeak(auStack_30,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ae548,IVar2,&cf_bmo_N_,0,&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

