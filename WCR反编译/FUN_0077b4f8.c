// FUN_0077b4f8 @ 0077b4f8

uint FUN_0077b4f8(undefined8 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  uint local_3c;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = "VoiceMessageCellView";
  _objc_getClass();
  local_3c = 0;
  if (pcVar1 != (char *)0x0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar1);
    local_3c = (uint)uVar2;
  }
  _objc_storeStrong(&local_18,0);
  return local_3c & 1;
}

