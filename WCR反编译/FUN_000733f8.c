// FUN_000733f8 @ 000733f8

void FUN_000733f8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_1b8;
  undefined *local_120;
  undefined *local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  ulong local_98;
  undefined *local_90 [3];
  undefined4 local_74;
  ulong local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  _objc_storeStrong(&local_70,param_2);
  if (local_70 == 0) {
    local_74 = 1;
  }
  else {
    uVar2 = local_70;
    _objc_getAssociatedObject(local_70,DAT_026df730);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      local_99 = 0;
      local_a9 = 0;
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_120 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if (uVar3 == 0) {
        local_120 = (undefined *)0x0;
      }
      else {
        uVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_colorWithCGColor__0269e058,uVar3);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_120;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_90[0] = local_120;
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_68 = &cf_cornerRadius;
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_60 = &cf_borderWidth;
      uVar3 = local_70;
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = &cf_clipsToBounds;
      uVar6 = local_70;
      local_40 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_clipsToBounds_026ca570);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_numberWithBool__0269ce60,uVar6 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      local_50 = &cf_borderColor;
      bVar1 = local_90[0] == (undefined *)0x0;
      local_38 = puVar7;
      if (bVar1) {
        local_1b8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_1b8;
      }
      else {
        local_1b8 = local_90[0];
      }
      local_30 = local_1b8;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = puVar8;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_setAssociatedObject(local_70,DAT_026df730,local_b8,1);
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(local_90,0);
      local_74 = 0;
    }
    else {
      local_74 = 1;
    }
  }
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

