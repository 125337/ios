// FUN_01b2f1f4 @ 01b2f1f4

byte FUN_01b2f1f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar3 = &local_38;
  local_38 = 0;
  local_30 = param_3;
  _objc_storeStrong(puVar3,param_4);
  if (local_20 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    local_48 = (undefined8 *)0x0;
    if (0 < local_30) {
      FUN_01b22c2c(local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_01b250c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_48;
      local_48 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_48 == (undefined8 *)0x0) {
      _objc_storeStrong(&local_48,local_38);
    }
    puVar1 = PTR_s_returnToOriginalMsg__0269d600;
    if (local_48 == (undefined8 *)0x0) {
      local_11 = 0;
    }
    else {
      uVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_returnToOriginalMsg__0269d600);
      if ((uVar5 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,local_48);
        local_11 = 1;
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

