// wcr_isTargetFriend @ 01729e10

/* Function Stack Size: 0x10 bytes */

bool ThemeBoxAirDropThemePickViewController::wcr_isTargetFriend(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  int local_34;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_targetWxid_026b3bd0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_34 = 0;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_isWeChatFriendUserName__026af090,local_28);
    local_34 = (int)puVar2;
  }
  _objc_storeStrong(&local_28,0);
  return (uint)(local_34 != 0);
}

