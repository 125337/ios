// FUN_0023c768 @ 0023c768

byte FUN_0023c768(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  byte local_74;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    pcVar1 = "BrandTLFlutterViewController";
    _objc_getClass();
    pcVar2 = "BrandTimelineViewController";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
    }
    local_74 = 0;
    if (pcVar2 != (char *)0x0) {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar2);
      local_74 = (byte)lVar3;
    }
    local_11 = local_74 & 1;
    if ((param_2 & 1) != 0) {
      local_11 = local_11 ^ 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

