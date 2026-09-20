// FUN_01532e3c @ 01532e3c

byte FUN_01532e3c(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  cfstringStruct *pcVar3;
  undefined8 **local_40;
  undefined8 **local_38;
  undefined8 **local_30;
  byte local_25;
  undefined4 local_24;
  undefined8 **local_20;
  byte local_11;
  
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((undefined8 ***)local_20 == (undefined8 ***)0x0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_01533098;
  }
  pppuVar1 = (undefined8 ***)local_20;
  FUN_01564574();
  local_25 = (byte)pppuVar1;
  if (((ulong)pppuVar1 & 1) == 0) {
    pppuVar1 = (undefined8 ***)local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pppuVar1;
    FUN_0155771c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pppuVar1;
    if (pppuVar1 != (undefined8 ***)0x0) {
      FUN_0156471c();
      pppuVar2 = (undefined8 ***)local_20;
      FUN_0156471c();
      if ((long)pppuVar2 <= (long)pppuVar1) {
        _objc_storeStrong((long)pppuVar1 - (long)pppuVar2,&local_20,local_38);
        pppuVar1 = (undefined8 ***)local_20;
        FUN_01564574();
        local_25 = (byte)pppuVar1;
      }
    }
    _objc_storeStrong(&local_38);
    pppuVar1 = &local_30;
    _objc_storeStrong(pppuVar1,0);
  }
  FUN_01563370();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = (undefined8 ***)local_20;
  local_40 = pppuVar1;
  FUN_0156492c();
  if (((ulong)pppuVar2 & 1) == 0) {
    if ((local_25 & 1) == 0) {
      pppuVar1 = (undefined8 ***)local_20;
      FUN_01564be4();
      if (((ulong)pppuVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_01533088;
      }
    }
    if ((local_25 & 1) == 0) {
      pppuVar1 = (undefined8 ***)local_20;
      FUN_01564e94(local_20,local_40);
      if (((ulong)pppuVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_01533088;
      }
    }
    pcVar3 = &cf_openChatInfo_;
    _NSSelectorFromString();
    if ((local_25 & 1) == 0) {
      local_11 = 0;
    }
    else {
      if ((undefined8 ***)local_40 != (undefined8 ***)0x0) {
        pppuVar1 = (undefined8 ***)local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pppuVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar3,0);
          local_11 = 1;
          goto LAB_01533088;
        }
      }
      local_11 = 0;
    }
  }
  else {
    local_11 = 1;
  }
LAB_01533088:
  local_24 = 1;
  _objc_storeStrong(&local_40,0);
LAB_01533098:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

