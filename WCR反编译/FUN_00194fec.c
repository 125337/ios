// FUN_00194fec @ 00194fec

void FUN_00194fec(double param_1,undefined8 param_2)

{
  double dVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  ulong local_48;
  double local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  if ((local_28 == 0) || (FUN_0018b0b8(), (uVar2 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar4 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c8970);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((uVar5 & 1) == 0) {
      _CFAbsoluteTimeGetCurrent();
      uVar4 = local_28;
      local_40 = param_1;
      _objc_getAssociatedObject(local_28,&DAT_028c8971);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
      dVar1 = local_40;
      if (((uVar4 & 1) == 0) ||
         (dVar7 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doubleValue_026ca608),
         0.35 <= dVar1 - dVar7)) {
        uVar4 = local_28;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,&DAT_028c8970,puVar6,1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_initWeak(auStack_50,local_28);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_78 = PTR___NSConcreteStackBlock_02578660;
        local_70 = 0xc2000000;
        local_6c = 0;
        local_68 = FUN_00195370;
        local_60 = &DAT_02578da0;
        _objc_copyWeak(auStack_58,auStack_50);
        _dispatch_async(puVar6,&local_78);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_destroyWeak(auStack_58);
        _objc_destroyWeak(auStack_50);
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

