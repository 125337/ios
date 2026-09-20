// FUN_010e92bc @ 010e92bc

byte FUN_010e92bc(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_010e942c;
  }
  uVar1 = local_20;
  FUN_010e8de4(local_20,PTR_s_messageWrap_0269d070,"m_messageWrap");
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "CMessageWrap";
  local_30 = uVar1;
  _objc_getClass();
  pcVar3 = &cf_isSenderFromMsgWrap_;
  _NSSelectorFromString();
  if ((local_30 == 0) || (pcVar2 == (char *)0x0)) {
LAB_010e93ac:
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isSender_0269d1b0);
      local_11 = (byte)uVar1 & 1;
    }
  }
  else {
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar4 & 1) == 0) goto LAB_010e93ac;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3,local_30);
    local_11 = (byte)pcVar2 & 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_010e942c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

