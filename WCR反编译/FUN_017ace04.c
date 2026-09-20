// FUN_017ace04 @ 017ace04

void FUN_017ace04(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  FUN_017ad1b8();
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,DAT_028c62a0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    uVar1 = DAT_028c62a0;
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar4 = PTR___dispatch_main_q_02578680;
      if ((DAT_028e41b0 & 1) == 0) {
        DAT_028e41b0 = 1;
        _objc_initWeak(auStack_68,local_28);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_90 = PTR___NSConcreteStackBlock_02578660;
        local_88 = 0xc2000000;
        local_84 = 0;
        local_80 = FUN_017adc94;
        local_78 = &DAT_02578da0;
        _objc_copyWeak(auStack_70,auStack_68);
        _dispatch_async(puVar4,&local_90);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        local_38 = 0;
      }
      else {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_28;
        local_60 = PTR___NSConcreteStackBlock_02578660;
        local_58 = 0xc2000000;
        local_54 = 0;
        local_50 = FUN_017ad5dc;
        local_48 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = uVar2;
        _dispatch_async(puVar4,&local_60);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_38 = 1;
        _objc_storeStrong(&local_40,0);
      }
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

