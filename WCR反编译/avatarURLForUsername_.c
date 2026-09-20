// avatarURLForUserName: @ 01a0193c

/* Function Stack Size: 0x18 bytes */

ID WCRefineFriendRelationResultListViewController::avatarURLForUserName_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contactForUserName__026bb5f0,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = 0;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_38;
  local_38 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_38;
    local_38 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

