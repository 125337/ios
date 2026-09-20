// shouldExcludeUserName: @ 00f7c2e4

/* Function Stack Size: 0x18 bytes */

bool WCRefineFriendRelationChecker::shouldExcludeUserName_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  FUN_00f7c4c8();
  if ((uVar1 & 1) == 0) {
    FUN_00f75634();
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    local_48 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getContactByName__0269d178,local_38);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_50;
        local_50 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    uVar1 = local_50;
    FUN_00f7c6f0();
    local_11 = (byte)uVar1 & 1;
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_11 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

