// FUN_00027af0 @ 00027af0

byte FUN_00027af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  ulong local_40;
  byte local_31;
  long local_30;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_28;
  local_31 = param_4;
  FUN_00027d50();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    if (((local_31 & 1) != 0) && (local_30 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_SendTextMessage_replyingMessage__0269d030);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_SendTextMessage_replyingMessage__0269d030,local_20,local_30,0);
        local_11 = 1;
        goto LAB_00027cd4;
      }
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_SendTextMessage__0269d028);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_SendTextMessage__0269d028,local_20);
      local_11 = 1;
    }
  }
LAB_00027cd4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

