// FUN_00737738 @ 00737738

void FUN_00737738(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40 [3];
  undefined *local_28;
  undefined4 local_1c;
  long local_18;
  
  plVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar3,param_1);
  if ((local_18 == 0) || (FUN_00730914(), ((ulong)plVar3 & 1) == 0)) {
    local_1c = 1;
  }
  else {
    DAT_028cc518 = DAT_028cc518 + 1;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               DAT_028cc518);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar4;
    _objc_setAssociatedObject(local_18,&DAT_028cc520,puVar4,1);
    dVar5 = _dispatch_time(0,250000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_007388e4;
    local_50 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_28;
    local_48 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = puVar1;
    _dispatch_after(dVar5,puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

