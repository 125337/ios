// touchTrailAbsoluteImagePathForFolder: @ 01f1f408

/* Function Stack Size: 0x18 bytes */

ID WCRefineTouchTrailViewController::touchTrailAbsoluteImagePathForFolder_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_touchTrailRelativeImagePathForFo_026c83c0,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = 9;
  local_38 = IVar1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_18 = 0;
  }
  else {
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByAppendingPathComponent__026cab30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

