// wcr_presentJoinTimePickerForRoom: @ 01dd65c4

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsViewController::wcr_presentJoinTimePickerForRoom_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  FUN_01dc8ed4();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatUsr_026c5438);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    local_30 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_initWeak(auStack_38,local_18);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  IVar2 = local_18;
  IVar1 = local_30;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01dd6780;
  local_58 = &DAT_0257be28;
  _objc_copyWeak(auStack_50,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_presentGroupJoinTimeEditorFrom_r_026b05b0,IVar2,IVar1,&local_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

