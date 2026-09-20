// FUN_000a2020 @ 000a2020

byte FUN_000a2020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_70;
  int local_6c;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    if (DAT_028c8040 == (code *)0x0) {
      local_6c = 0;
    }
    else {
      uVar4 = local_20;
      (*DAT_028c8040)(local_20,local_28,local_30,local_38);
      local_6c = (int)uVar4;
    }
    local_11 = local_6c != 0;
  }
  else {
    uVar3 = local_30;
    FUN_000a2b9c();
    if ((uVar3 & 1) == 0) {
      if (DAT_028c8040 == (code *)0x0) {
        local_70 = 0;
      }
      else {
        uVar4 = local_20;
        (*DAT_028c8040)(local_20,local_28,local_30,local_38);
        local_70 = (int)uVar4;
      }
      local_11 = local_70 != 0;
    }
    else {
      uVar4 = local_20;
      FUN_000a535c(local_20,local_28,local_38);
      local_11 = (bool)((byte)uVar4 & 1);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

