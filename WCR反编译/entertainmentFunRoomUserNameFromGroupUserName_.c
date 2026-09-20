// entertainmentFunRoomUserNameFromGroupUserName: @ 01534a74

/* Function Stack Size: 0x18 bytes */

ID WCRefineTopBarProfileCardPresenter::entertainmentFunRoomUserNameFromGroupUserName_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom_);
    uVar1 = local_38;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = &cf__chatroom;
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      uVar1 = local_38;
      if ((uVar2 & 1) == 0) {
        local_18 = 0;
        local_3c = 1;
      }
      else {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_substringToIndex__0269d6c0,uVar2 - (long)pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          local_18 = 0;
        }
        else {
          uVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_stringByAppendingString__0269d398,&cf__chatroom_);
          _objc_retainAutoreleasedReturnValue();
          local_18 = uVar1;
        }
        local_3c = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

