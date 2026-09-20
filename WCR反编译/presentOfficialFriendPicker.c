// presentOfficialFriendPicker @ 01aae394

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::presentOfficialFriendPicker(ID param_1,SEL param_2)

{
  ID IVar1;
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
  _objc_initWeak(auStack_28,param_1);
  IVar1 = local_18;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedUsernames_026a6628);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01aaf218;
  local_48 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_40,auStack_28);
  FUN_01aae4f8(IVar1,&cf_mRgS,IVar3,&local_60);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_28);
  return;
}

