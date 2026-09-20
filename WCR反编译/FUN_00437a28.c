// FUN_00437a28 @ 00437a28

byte FUN_00437a28(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  byte local_5c;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_delegate_0269d0e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = "BaseMsgContentLogicController";
    local_30 = lVar1;
    _objc_getClass();
    local_5c = 0;
    if ((pcVar2 != (char *)0x0) && (local_5c = 0, local_30 != 0)) {
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar2);
      local_5c = (byte)lVar1;
    }
    local_11 = local_5c & 1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

