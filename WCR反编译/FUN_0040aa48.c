// FUN_0040aa48 @ 0040aa48

byte FUN_0040aa48(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_bc;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  int local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_isSelfSent);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  if ((uVar1 & 1) != 0) {
    local_11 = 1;
    local_30 = 1;
    goto LAB_0040ae64;
  }
  FUN_0040c4c4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_0040ad2c:
    uVar2 = local_20;
    FUN_0040bb14(local_20,&cf_messageType);
    uVar2 = uVar2 & 0xffffffff;
    FUN_0040bd18();
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      uVar2 = local_20;
      FUN_004055cc(local_20,&cf_patFromUserName);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_50 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      local_bc = 0;
      if (uVar1 != 0) {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_38);
        local_bc = (byte)uVar2;
      }
      local_11 = local_bc & 1;
      local_30 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  else {
    uVar1 = local_20;
    FUN_004055cc(uVar2,local_20,&cf_senderUserName);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    uVar2 = 0;
    if (uVar1 == 0) {
LAB_0040ac2c:
      uVar1 = local_20;
      FUN_004055cc(uVar2,local_20,&cf_realChatUserName);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      uVar2 = 0;
      if (uVar1 == 0) {
LAB_0040ace8:
        local_30 = 0;
      }
      else {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_38);
        uVar2 = uVar1 & 0xffffffff;
        if ((uVar1 & 1) == 0) goto LAB_0040ace8;
        uVar2 = 1;
        local_11 = 1;
        local_30 = 1;
      }
      _objc_storeStrong(uVar2,&local_48,0);
    }
    else {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_38);
      uVar2 = uVar1 & 0xffffffff;
      if ((uVar1 & 1) == 0) goto LAB_0040ac2c;
      local_11 = 1;
      local_30 = 1;
    }
    _objc_storeStrong(&local_40,0);
    if (local_30 == 0) goto LAB_0040ad2c;
  }
  _objc_storeStrong(&local_38,0);
LAB_0040ae64:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

