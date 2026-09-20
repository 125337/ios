// FUN_0083e9a8 @ 0083e9a8

void FUN_0083e9a8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  dispatch_queue_t pdVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  uint local_38;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_38 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    FUN_0083ebe4();
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      pdVar4 = _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_0083ee58;
      local_50 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar2;
      _dispatch_async(pdVar4,&local_68);
      (*(code *)PTR__objc_release_02578630)(pdVar4);
      _objc_storeStrong(&local_48,0);
    }
    local_38 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_38 == 0) {
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

