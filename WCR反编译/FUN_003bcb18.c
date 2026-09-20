// FUN_003bcb18 @ 003bcb18

byte FUN_003bcb18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong local_60 [4];
  cfstringStruct *local_40;
  char *local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_003bcd10;
  }
  pcVar2 = "ChatBoxMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_isContactInChatBox_;
  local_38 = pcVar2;
  _NSSelectorFromString();
  local_40 = pcVar3;
  if (local_38 == (char *)0x0) {
LAB_003bcc78:
    uVar4 = local_28;
    FUN_0037a830(local_28,&cf_m_isFolding);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_28;
      FUN_003612b8(local_28,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = uVar4;
      FUN_0037a830(uVar4,&cf_isChatBoxContact);
      local_11 = (byte)uVar4 & 1;
      local_2c = 1;
      _objc_storeStrong(local_60,0);
    }
    else {
      local_11 = 1;
      local_2c = 1;
    }
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar2 & 1) == 0) goto LAB_003bcc78;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_20);
    local_11 = (byte)pcVar2 & 1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_003bcd10:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

