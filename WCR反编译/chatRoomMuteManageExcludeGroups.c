// chatRoomMuteManageExcludeGroups @ 0208dd50

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::chatRoomMuteManageExcludeGroups(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_02085d18();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

