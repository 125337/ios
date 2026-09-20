// FUN_000e6838 @ 000e6838

void FUN_000e6838(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  double local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_000dc544();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_000e6b68();
    if ((uVar1 & 1) == 0) {
      local_28 = 1;
    }
    else {
      uVar1 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028c839b);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_18;
        FUN_000e6c00(local_18,"m_bLoading");
        uVar1 = local_18;
        if ((uVar2 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar1,&DAT_028c839b,puVar3,1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          FUN_000e4a4c(local_18,&cf_get_more,0);
          uVar1 = local_18;
          FUN_000e3de4();
          local_30 = DAT_02323cc0;
          if ((uVar1 & 1) == 0) {
            local_30 = 0.0;
          }
          dVar4 = _dispatch_time(0,(long)(local_30 * 1000000000.0));
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_18;
          local_58 = PTR___NSConcreteStackBlock_02578660;
          local_50 = 0xc2000000;
          local_4c = 0;
          local_48 = FUN_000e6d48;
          local_40 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_38 = uVar1;
          _dispatch_after(dVar4,puVar3,&local_58);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_38,0);
          local_28 = 0;
        }
        else {
          local_28 = 1;
        }
      }
      else {
        local_28 = 1;
      }
    }
  }
  else {
    FUN_000dc7ac(local_18,0);
    local_28 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

