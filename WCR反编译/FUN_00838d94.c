// FUN_00838d94 @ 00838d94

byte FUN_00838d94(undefined8 param_1)

{
  ulong uVar1;
  byte local_64;
  byte local_5c;
  uint local_50;
  uint local_44;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_ChatRoom_Bubble_);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_HB_Receiver)
      ;
      local_44 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_HB_Sender)
        ;
        local_44 = (uint)uVar1;
      }
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_AA_Receiver)
      ;
      local_50 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_AA_Sender)
        ;
        local_50 = (uint)uVar1;
      }
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Overtime);
      local_5c = 0;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Receiver);
        local_64 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Sender);
          local_64 = (byte)uVar1;
        }
        local_5c = local_64;
      }
      local_11 = 1;
      if (((local_44 & 1) == 0) && (local_11 = 1, (local_50 & 1) == 0)) {
        local_11 = local_5c & 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

