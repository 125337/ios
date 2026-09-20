// FUN_0051f72c @ 0051f72c

void FUN_0051f72c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  double local_b0;
  double dStack_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  long local_30;
  undefined *local_28;
  long lVar2;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 != 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    uVar1 = (uint)lVar2;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    local_38 = param_4;
    _CGRectIsEmpty();
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      local_90 = param_1;
      local_88 = param_2;
      local_80 = param_3;
      dStack_78 = param_4;
      local_70 = param_3;
      dStack_68 = param_4;
      if ((param_3 < 1.0) || (param_4 < 1.0)) {
        local_28 = (undefined *)0x0;
        local_60 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648,
                   PTR_s_preferredFormat_026a48d8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        local_98 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(param_4,local_98,PTR_s_setScale__026caa28);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setOpaque__026ca9f8,0);
        puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_026ce650;
        _objc_alloc();
        dStack_a8 = dStack_68;
        local_b0 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,dStack_68,puVar3,PTR_s_initWithSize_format__026ca700,local_98);
        lVar2 = local_30;
        local_d8 = PTR___NSConcreteGlobalBlock_02578658;
        local_d0 = 0xd0800000;
        local_cc = 0;
        local_c8 = FUN_0051fb1c;
        local_c0 = &DAT_0257da88;
        local_a0 = puVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_imageWithActions__026ca688,&local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar3;
        _objc_storeStrong(&local_b8);
        local_60 = 1;
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_98,0);
      }
      goto LAB_0051fae4;
    }
  }
  local_28 = (undefined *)0x0;
  local_60 = 1;
LAB_0051fae4:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

