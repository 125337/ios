// FUN_00033648 @ 00033648

byte FUN_00033648(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 **local_88;
  char *local_58;
  byte local_49;
  undefined8 **local_48;
  undefined4 local_2c;
  undefined8 **local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_88 = &local_28;
  local_28 = (undefined8 ***)0x0;
  _objc_storeStrong(local_88,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    local_49 = 0;
    bVar1 = (undefined8 ***)local_28 == (undefined8 ***)0x0;
    if (bVar1) {
      FUN_00032e7c();
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_88;
    }
    else {
      local_88 = local_28;
    }
    local_49 = bVar1;
    _objc_storeStrong(&local_28,local_88);
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((undefined8 ***)local_28 == (undefined8 ***)0x0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      pcVar3 = "MMMsgLogicManager";
      _objc_getClass();
      FUN_000323ec();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
      local_58 = pcVar3;
      if ((pcVar3 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_respondsToSelector__026ca818,
                     PTR_s_PushOtherBaseMsgControllerByCont_0269d640), ((ulong)pcVar3 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar2,local_20,local_28,1);
        local_11 = 1;
      }
      local_2c = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

