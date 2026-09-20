// FUN_00097344 @ 00097344

/* WARNING: Type propagation algorithm not settling */

void FUN_00097344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  dispatch_queue_t pdVar5;
  uint local_cc;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  ulong local_40 [3];
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_40[1] = 0;
  local_40[2] = param_2;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  local_59 = 0;
  uVar1 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
  local_cc = 1;
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_cc = (uint)puVar2 ^ 1;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_cc & 1) == 0) {
    uVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar4 & 1) == 0) {
      FUN_0009792c(local_28,0,&cf_S_ecZ);
      local_60 = 1;
    }
    else {
      _objc_initWeak(auStack_68,local_28);
      pdVar5 = _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_00098ce0;
      local_80 = &DAT_02579c60;
      _objc_copyWeak(auStack_70,auStack_68);
      uVar1 = local_40[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar1;
      _dispatch_async(pdVar5,&local_98);
      (*(code *)PTR__objc_release_02578630)(pdVar5);
      _objc_storeStrong(&local_78,0);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      local_60 = 0;
    }
  }
  else {
    FUN_0009792c(local_28,0,&cf_eNNX__W);
    local_60 = 1;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(&local_28,0);
  return;
}

