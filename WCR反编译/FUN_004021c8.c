// FUN_004021c8 @ 004021c8

void FUN_004021c8(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double local_c8;
  undefined *local_78;
  double local_70;
  byte local_61;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30 [3];
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_004044c8;
    local_38 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_30[0] = uVar1;
    _dispatch_async(puVar3,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_54 = 1;
    _objc_storeStrong(local_30,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_applicationState_0269d6d8);
    local_61 = puVar3 == (undefined *)0x0;
    if ((bool)local_61) {
      _CFAbsoluteTimeGetCurrent();
      local_c8 = param_1 + 4.0;
    }
    else {
      local_c8 = 0.0;
    }
    local_70 = local_c8;
    FUN_004044f8(local_c8,local_61 & 1);
    FUN_00404584();
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (puVar3 != (undefined *)0x0) {
      FUN_00404b34(puVar3,local_78);
    }
    if ((local_61 & 1) != 0) {
      FUN_00404cb0(0x4010000000000000);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

