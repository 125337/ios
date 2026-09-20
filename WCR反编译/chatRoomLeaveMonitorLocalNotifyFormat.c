// chatRoomLeaveMonitorLocalNotifyFormat @ 02088f68

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::chatRoomLeaveMonitorLocalNotifyFormat(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL SVar2;
  ID IVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  local_28 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &::cf_0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &::cf__;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &::cf__;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = &::cf___;
  if ((((local_30 == 0) ||
       (IVar3 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_38),
       (IVar3 & 1) != 0)) ||
      (IVar3 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_40),
      (IVar3 & 1) != 0)) ||
     ((IVar3 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_48),
      (IVar3 & 1) != 0 ||
      (IVar3 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_50),
      (IVar3 & 1) != 0)))) {
    _objc_storeStrong(&local_30,local_58);
    IVar1 = local_28;
    IVar3 = local_30;
    SVar2 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,IVar3);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  IVar3 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

