// FUN_01796c38 @ 01796c38

byte FUN_01796c38(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    if (DAT_028e4068 == (char *)0x0) {
      pcVar2 = "SettingUtil";
      _objc_getClass();
      DAT_028e4068 = pcVar2;
    }
    pcVar2 = DAT_028e4068;
    _objc_retainAutoreleaseReturnValue();
    if ((pcVar2 == (char *)0x0) ||
       (pcVar3 = pcVar2,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isCurUsrName__026b4830),
       ((ulong)pcVar3 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isCurUsrName__026b4830,local_20);
      local_11 = (byte)pcVar2 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

