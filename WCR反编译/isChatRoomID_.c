// isChatRoomID: @ 0109c864

/* Function Stack Size: 0x18 bytes */

bool WCRefineMessageBlockSupport::isChatRoomID_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom_);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf___chatroom),
       (uVar1 & 1) == 0)) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      local_11 = true;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__im_chatroom);
        local_11 = true;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_rangeOfString__0269d838,&cf__chatroom);
          local_11 = uVar1 != 0x7fffffffffffffff;
        }
      }
    }
    else {
      local_11 = false;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

