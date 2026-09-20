// FUN_000f8ca4 @ 000f8ca4

uint FUN_000f8ca4(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_44;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = "CMessageWrap";
  _objc_getClass();
  puVar1 = PTR_s_isSenderFromMsgWrap__0269d558;
  local_44 = 0;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558);
    local_44 = 0;
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1,local_18);
      local_44 = (uint)pcVar2;
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_44 & 1;
}

