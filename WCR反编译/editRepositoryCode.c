// editRepositoryCode @ 01807384

/* Function Stack Size: 0x10 bytes */

void WCRefineAutoAcceptTransferTierEditorViewController::editRepositoryCode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
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
  IVar2 = local_18;
  puVar1 = PTR_WCRefineMessageRepositoryPicker_026cf050;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_repositoryCode_026b0ba8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_018074e8;
  local_48 = &DAT_0257c558;
  _objc_copyWeak(auStack_40,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ae548,IVar2,&cf_bOSVY,IVar3,&local_60)
  ;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_28);
  return;
}

