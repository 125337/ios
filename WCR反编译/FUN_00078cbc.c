// FUN_00078cbc @ 00078cbc

void FUN_00078cbc(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  dispatch_time_t dVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined **local_60;
  undefined1 auStack_58 [8];
  ulong local_50;
  undefined1 local_45;
  undefined4 local_34;
  double local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_1;
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026df768);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar4 = local_28;
    uVar1 = DAT_026df768;
    if (uVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,uVar1,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar4 = local_28;
      FUN_00078a1c();
      local_45 = (undefined1)uVar4;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_28;
        _objc_getAssociatedObject(local_28,DAT_026df760);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_50 = uVar2;
      }
      _objc_initWeak(auStack_58,local_28);
      ppuVar5 = &local_88;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_0007b184;
      local_70 = &DAT_02578da0;
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retainBlock();
      puVar3 = PTR___dispatch_main_q_02578680;
      local_60 = ppuVar5;
      if (local_30 <= DAT_02323ca8) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        dVar6 = _dispatch_time(0,(long)(local_30 * 1000000000.0));
        puVar3 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_after(dVar6,puVar3,local_60);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(&local_60,0);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

