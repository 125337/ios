// FUN_0021a794 @ 0021a794

void FUN_0021a794(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar3;
  
  puVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  FUN_001d3fac();
  if (((uVar2 & 1) == 0) || (local_18 == 0)) {
    local_28 = 1;
  }
  else {
    uVar4 = local_18;
    FUN_0021aaa0();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar4;
    if (uVar4 == 0) {
      local_28 = 1;
    }
    else {
      _objc_getAssociatedObject(uVar4,DAT_026dfb18);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar4;
      if ((uVar4 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_boolValue_026ca540), (uVar4 & 1) == 0))
      {
        uVar4 = local_30;
        uVar1 = DAT_026dfb18;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,uVar1,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar4 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        puVar5 = PTR___dispatch_main_q_02578680;
        local_40 = uVar4;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_40;
        local_68 = PTR___NSConcreteStackBlock_02578660;
        local_60 = 0xc2000000;
        local_5c = 0;
        local_58 = FUN_0021ad34;
        local_50 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = uVar4;
        _dispatch_async(puVar5,&local_68);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_40,0);
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

