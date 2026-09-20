// FUN_01136298 @ 01136298

ulong FUN_01136298(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong local_b8;
  ulong local_80;
  long local_78;
  ulong local_70;
  ulong local_38;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (*(long *)(param_1 + 0x20) == 1) {
    uVar1 = local_20;
    FUN_0113657c(local_20,*(byte *)(param_1 + 0x28) & 1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    FUN_0113657c(local_28,*(byte *)(param_1 + 0x28) & 1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_localizedStandardCompare__0269e098);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    local_70 = local_20;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      FUN_01136acc();
    }
    else {
      FUN_011368c0();
    }
    local_78 = local_28;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      FUN_01136acc();
    }
    else {
      FUN_011368c0();
    }
    if ((long)local_70 < local_78) {
      local_80 = 0xffffffffffffffff;
    }
    else {
      local_80 = (ulong)(local_78 < (long)local_70);
    }
    local_38 = local_80;
  }
  if (local_38 == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_localizedStandardCompare__0269e098);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
    local_b8 = -local_38;
  }
  else {
    local_b8 = local_38;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_b8;
}

