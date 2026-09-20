// FUN_01560ee4 @ 01560ee4

void FUN_01560ee4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  char *local_90;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined *local_40;
  char *local_38;
  ulong local_30;
  undefined4 local_24;
  char *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_24 = 1;
    }
    else {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_isValid_026a5838);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isValid_026a5838),
         (uVar3 & 1) != 0)) {
        pcVar4 = "MMServiceCenter";
        _objc_getClass();
        FUN_01533df4();
        _objc_retainAutoreleasedReturnValue();
        local_40 = PTR_s_getService__0269d170;
        local_90 = "MMMsgLogicManager";
        local_38 = pcVar4;
        _objc_getClass();
        local_50 = (char *)0x0;
        local_48 = local_90;
        if (((local_38 != (char *)0x0) && (local_90 != (char *)0x0)) &&
           (local_90 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_38,PTR_s_respondsToSelector__026ca818,local_40),
           ((ulong)local_90 & 1) != 0)) {
          pcVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_50;
          local_50 = pcVar4;
          (*(code *)PTR__objc_release_02578630)();
        }
        bVar1 = local_20 == (char *)0x0;
        if (bVar1) {
          FUN_015611fc();
          _objc_retainAutoreleasedReturnValue();
          local_60 = local_90;
        }
        else {
          local_90 = local_20;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = local_90;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        puVar2 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
        if (((local_50 == (char *)0x0) || (local_58 == (char *)0x0)) ||
           (pcVar4 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_respondsToSelector__026ca818,
                      PTR_s_PushOtherBaseMsgControllerByCont_0269d640), ((ulong)pcVar4 & 1) == 0)) {
          local_24 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,puVar2,local_18,local_58,1);
          local_24 = 0;
        }
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_38,0);
      }
      else {
        local_24 = 1;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

