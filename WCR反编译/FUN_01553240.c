// FUN_01553240 @ 01553240

void FUN_01553240(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_80;
  uint local_78;
  undefined1 local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  uVar3 = local_60;
  _objc_getAssociatedObject(local_60,DAT_028c5df0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
  local_68 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_71 = 0;
  bVar2 = true;
  uVar1 = (uVar3 & 1) != 0;
  if ((bool)uVar1) {
    uVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_animationForKey__026ca508,&cf_wcr_overlay_dream);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 != 0;
    local_71 = uVar1;
    local_70 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_71;
  }
  local_71 = uVar1;
  if (!bVar2) {
    puVar4 = PTR__OBJC_CLASS___CABasicAnimation_026ce1e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CABasicAnimation_026ce1e0,PTR_s_animationWithKeyPath__026ca510,
               &cf_locations);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_80 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c78,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFromValue__026ca968);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc3333333333333,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe8000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_48 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setToValue__026caac8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(0x4013333333333333,local_80,PTR_s_setDuration__026ca920);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAutoreverses__026ca880,1);
    (*(code *)PTR__objc_msgSend_02578628)(0x7f800000,local_80,PTR_s_setRepeatCount__026caa18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addAnimation_forKey__026ca498,local_80,&cf_wcr_overlay_dream);
    _objc_storeStrong(&local_80,0);
  }
  local_78 = (uint)bVar2;
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

