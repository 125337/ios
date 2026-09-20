// FUN_00eab654 @ 00eab654

void FUN_00eab654(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  cfstringStruct *local_80;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_00eab80c;
      local_48 = &DAT_0257ca68;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      pcVar1 = local_20;
      local_38 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = pcVar1;
      _dispatch_async(puVar3,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    else {
      if (local_20 == (cfstringStruct *)0x0) {
        local_80 = &cf___;
      }
      else {
        local_80 = local_20;
      }
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_80);
    }
    local_2c = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

