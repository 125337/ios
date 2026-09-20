// bindRepositoryForItem: @ 01f8d7ec

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::bindRepositoryForItem_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_initWeak(auStack_30,local_18);
  IVar3 = local_18;
  puVar1 = PTR_WCRefineMessageRepositoryPicker_026cf050;
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_repositoryCode_026b0ba8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01f8d98c;
  local_58 = &DAT_0257c948;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar2;
  _objc_copyWeak(auStack_48,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ae548,IVar3,&cf_bOSN_,uVar4,&local_70)
  ;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

