// FUN_00673b90 @ 00673b90

void FUN_00673b90(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028cbc94,0,1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  FUN_00673698();
  if ((uVar2 & 1) == 0) {
    _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028cbc93,0,1);
    FUN_00657450(&cf_M);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_38 = lVar3;
    _objc_getAssociatedObject(uVar4,&DAT_028cbc93);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    if (local_38 == 0) {
      _objc_storeStrong(&local_38,uVar4);
    }
    _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028cbc93,0,1);
    lVar3 = local_38;
    FUN_0066db9c();
    _objc_retainAutoreleasedReturnValue();
    FUN_00657450(&cf_M);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    FUN_0066d09c(*(undefined8 *)(param_1 + 0x20),local_38);
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
    FUN_00673698();
    if ((uVar1 & 1) == 0) {
      local_50 = 1;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x20);
      _objc_getAssociatedObject(uVar5,&DAT_028cbc95);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      if ((uVar2 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,&DAT_028cbc95,puVar6,1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        dVar7 = _dispatch_time(0,160000000);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_78 = PTR___NSConcreteStackBlock_02578660;
        local_70 = 0xc2000000;
        local_6c = 0;
        local_68 = FUN_0067400c;
        local_60 = &DAT_02578c20;
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = uVar4;
        _dispatch_after(dVar7,puVar6,&local_78);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_58,0);
      }
      local_50 = 0;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

