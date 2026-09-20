// FUN_005ff1f8 @ 005ff1f8

byte FUN_005ff1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  char *local_70;
  cfstringStruct *local_68;
  char *local_60;
  cfstringStruct *local_48;
  uint local_40;
  byte local_39;
  ulong local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_39 = param_5;
  if (local_30 == 0) {
    local_11 = 0;
    local_40 = 1;
  }
  else if ((param_5 & 1) == 0) {
    pcVar2 = "AddContactToChatRoomViewController";
    _objc_getClass();
    pcVar3 = &cf_openContactInfo_;
    local_60 = pcVar2;
    _NSSelectorFromString();
    local_68 = pcVar3;
    if ((local_60 != (char *)0x0) && (pcVar3 != (cfstringStruct *)0x0)) {
      pcVar2 = local_60;
      _objc_alloc_init();
      pcVar3 = &cf_setM_contact_;
      local_70 = pcVar2;
      _NSSelectorFromString();
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar3,local_30);
      }
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,local_68);
      bVar1 = ((ulong)pcVar2 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,local_68,local_30);
        local_11 = 1;
      }
      local_40 = (uint)bVar1;
      _objc_storeStrong(&local_70,0);
      if (local_40 != 0) goto LAB_005ff54c;
    }
    pcVar3 = &cf_openChatInfo_;
    _NSSelectorFromString();
    if ((local_38 == 0) ||
       (uVar4 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3),
       (uVar4 & 1) == 0)) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar3,0);
      local_11 = 1;
      local_40 = 1;
    }
  }
  else {
    pcVar3 = &cf_openChatInfo_;
    _NSSelectorFromString();
    local_48 = pcVar3;
    if ((local_38 == 0) ||
       (uVar4 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3),
       (uVar4 & 1) == 0)) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_48,0);
      local_11 = 1;
      local_40 = 1;
    }
  }
LAB_005ff54c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

