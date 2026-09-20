// FUN_0012ae98 @ 0012ae98

void FUN_0012ae98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  byte local_49 [17];
  int local_38;
  byte local_31;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_31 = 0;
  uVar1 = local_30;
  FUN_0012b7d4(local_30,&local_31);
  local_38 = (int)uVar1;
  if (DAT_028c8628 != (code *)0x0) {
    (*DAT_028c8628)(local_18,local_20,local_28,local_30);
  }
  if (((local_31 & 1) == 0) || (local_38 == 0)) {
    local_49[1] = 1;
    local_49[2] = 0;
    local_49[3] = 0;
    local_49[4] = 0;
  }
  else {
    uVar1 = local_30;
    FUN_0012b984();
    if (((uVar1 & 1) == 0) || (uVar1 = local_28, FUN_0012b984(), (uVar1 & 1) == 0)) {
      local_49[1] = 1;
      local_49[2] = 0;
      local_49[3] = 0;
      local_49[4] = 0;
    }
    else {
      local_49[0] = 0;
      uVar1 = local_28;
      FUN_0012b7d4(local_28,local_49);
      if (((local_49[0] & 1) == 0) || ((int)uVar1 == 0)) {
        pcVar2 = &cf_setM_uiChatRoomStatus_;
        _NSSelectorFromString();
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar1 & 1) == 0) {
          local_49[1] = 1;
          local_49[2] = 0;
          local_49[3] = 0;
          local_49[4] = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar2,local_38);
          local_49[1] = 0;
          local_49[2] = 0;
          local_49[3] = 0;
          local_49[4] = 0;
        }
      }
      else {
        local_49[1] = 1;
        local_49[2] = 0;
        local_49[3] = 0;
        local_49[4] = 0;
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

