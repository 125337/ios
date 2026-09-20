// FUN_010eb79c @ 010eb79c

uint FUN_010eb79c(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  long local_30;
  undefined4 local_24;
  long local_20;
  uint local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_14 = 0xffffffff;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_010e8de4(local_20,PTR_s_messageWrap_0269d070,"m_messageWrap");
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = "CMessageWrap";
    local_30 = lVar1;
    _objc_getClass();
    pcVar3 = &cf_isSenderFromMsgWrap_;
    _NSSelectorFromString();
    if (((local_30 == 0) || (pcVar2 == (char *)0x0)) ||
       (pcVar4 = pcVar2,
       (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3),
       ((ulong)pcVar4 & 1) == 0)) {
      local_14 = 0xffffffff;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3,local_30);
      local_14 = (uint)(((ulong)pcVar2 & 1) != 0);
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

