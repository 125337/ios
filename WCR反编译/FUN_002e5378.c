// FUN_002e5378 @ 002e5378

void FUN_002e5378(double param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_b8;
  undefined *local_b0 [3];
  long local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long *local_70;
  long local_68;
  undefined4 local_5c;
  double local_58;
  undefined8 local_50;
  long local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_2);
  local_58 = param_1;
  if (1.0 <= param_1) {
    local_70 = &local_68;
    local_68 = 0;
    local_90 = PTR___NSConcreteGlobalBlock_02578658;
    local_88 = 0xd0800000;
    local_84 = 0;
    local_80 = FUN_002e5934;
    local_78 = &DAT_0257bb68;
    _dispatch_sync(DAT_028c9870,&local_90);
    lVar3 = local_68;
    FUN_002e596c(local_68,local_50);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = DAT_028c9880;
    local_98 = lVar3;
    if (lVar3 == 0) {
      local_48 = 0;
    }
    else {
      if (DAT_028c9880 != (code *)0x0) {
        puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_class_0269cd60);
        (*pcVar1)(local_58,puVar4,PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        local_b0[0] = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_fontDescriptor_026a1d50);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_98;
        local_b8 = puVar4;
        if (puVar4 != (undefined *)0x0) {
          local_38 = *(undefined8 *)PTR__UIFontDescriptorCascadeListAttribute_02578120;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_40 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar3,PTR_s_fontDescriptorByAddingAttributes_026a1d58);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = local_98;
          local_98 = lVar3;
          (*(code *)PTR__objc_release_02578630)(lVar2);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        _objc_storeStrong(&local_b8);
        _objc_storeStrong(local_b0,0);
      }
      lVar3 = local_98;
      FUN_002e5d44(local_58);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar3;
    }
    local_5c = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_68,0);
  }
  else {
    local_48 = 0;
    local_5c = 1;
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_48);
  return;
}

