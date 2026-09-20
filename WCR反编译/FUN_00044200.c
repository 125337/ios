// FUN_00044200 @ 00044200

byte FUN_00044200(undefined8 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  byte local_94;
  undefined8 local_60;
  char *local_58 [2];
  undefined4 local_44;
  undefined *local_40;
  char *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  local_40 = PTR_s_isSenderFromMsgWrap__0269d558;
  local_28 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_40,local_20);
      local_11 = (byte)pcVar1 & 1;
      local_44 = 1;
      goto LAB_0004448c;
    }
  }
  FUN_0003c2b0();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  local_94 = 0;
  if (pcVar1 != (char *)0x0) {
    local_60 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_94 = (byte)uVar2;
  }
  local_11 = local_94 & 1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  local_44 = 1;
  _objc_storeStrong(local_58,0);
LAB_0004448c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

