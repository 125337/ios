// FUN_0017972c @ 0017972c

byte FUN_0017972c(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_60;
  ulong local_58;
  long local_50;
  byte local_41;
  ulong local_40 [2];
  int local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  pcVar1 = "ContactsItemView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_bShowChatRoomFriendCount_0269f9b8),
     (uVar2 & 1) == 0)) {
    uVar2 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = uVar2;
    local_41 = 0;
    for (local_50 = 0; local_40[0] != 0 && local_50 < 0x20; local_50 = local_50 + 1) {
      uVar2 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_40[0];
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_valueForKey__0269d128,&cf_m_onlyImportChatRoom);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      if (((uVar3 & 1) != 0) &&
         (uVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_boolValue_026ca540)
         , (uVar2 & 1) != 0)) {
        local_41 = 1;
      }
      _objc_storeStrong(&local_60,0);
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_isEqualToString__0269ccc8,
                 &cf_MultiSelectChatRoomHalfScreenViewController);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_isEqualToString__0269ccc8,&cf_MultiSelectContactsViewController);
        if ((uVar2 & 1) == 0) {
          uVar3 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_nextResponder_0269d0d8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_40[0];
          local_40[0] = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_30 = 0;
        }
        else {
          local_11 = local_41 & 1;
          local_30 = 1;
        }
      }
      else {
        local_11 = 1;
        local_30 = 1;
      }
      _objc_storeStrong(&local_58,0);
      if (local_30 != 0) goto LAB_00179b64;
    }
    local_11 = 0;
    local_30 = 1;
LAB_00179b64:
    _objc_storeStrong(local_40,0);
  }
  else {
    local_11 = 1;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

