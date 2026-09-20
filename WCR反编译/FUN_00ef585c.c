// FUN_00ef585c @ 00ef585c

byte FUN_00ef585c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_00ef5980();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_isInContactList__0269efe0;
    local_30 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_isInContactList__0269efe0),
       ((ulong)pcVar3 & 1) == 0)) {
      local_11 = 1;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,local_20);
      local_11 = (byte)pcVar3 & 1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

