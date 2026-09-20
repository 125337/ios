// FUN_01ced8f0 @ 01ced8f0

void FUN_01ced8f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    pcVar3 = "MMMsgLogicManager";
    local_30 = pcVar2;
    _objc_getClass();
    local_38 = pcVar3;
    if ((local_30 == (char *)0x0) ||
       ((pcVar3 == (char *)0x0 ||
        (pcVar2 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
        ((ulong)pcVar2 & 1) == 0)))) {
      local_24 = 1;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar2 & 1) == 0)) {
        local_24 = 1;
      }
      else {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_38);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
        local_48 = pcVar2;
        if ((pcVar2 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,
                       PTR_s_PushOtherBaseMsgControllerByCont_0269d640), ((ulong)pcVar2 & 1) == 0))
        {
          local_24 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,puVar1,local_18,local_20,1);
          local_24 = 0;
        }
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

