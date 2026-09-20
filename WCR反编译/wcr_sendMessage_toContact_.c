// wcr_sendMessage:toContact: @ 00fb5bbc

/* Function Stack Size: 0x20 bytes */

bool WCRefineHelper::wcr_sendMessage_toContact_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if ((local_30 == 0) || (local_38 == 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    pcVar1 = &cf_ForwardMessageLogicController;
    _NSClassFromString();
    pcVar2 = &cf_ForwardMsg_ToContact_;
    local_48 = pcVar1;
    _NSSelectorFromString();
    local_50 = pcVar2;
    if (local_48 == (cfstringStruct *)0x0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      pcVar1 = local_48;
      _objc_alloc_init();
      local_58 = pcVar1;
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,local_50),
         ((ulong)pcVar1 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        FUN_00fb0540(0x4014000000000000,local_58);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,local_50,local_30,local_38);
        local_11 = 1;
      }
      local_3c = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

