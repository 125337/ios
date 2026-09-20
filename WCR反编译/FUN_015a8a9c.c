// FUN_015a8a9c @ 015a8a9c

void FUN_015a8a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  dispatch_queue_t pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *local_98;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_98 = &cf_ofmT1Y_;
    }
    else {
      local_98 = local_28;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,local_98);
    local_34 = 1;
  }
  else {
    pdVar2 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_015a8c9c;
    local_58 = &DAT_0257cb48;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_40 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar4;
    _dispatch_async(pdVar2,&local_70);
    (*(code *)PTR__objc_release_02578630)(pdVar2);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_50,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

