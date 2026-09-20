// FUN_0157f1f0 @ 0157f1f0

void FUN_0157f1f0(undefined8 param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long local_60;
  ulong local_58;
  undefined4 local_4c;
  long local_48;
  byte local_39;
  long local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  local_39 = (byte)param_2;
  local_48 = param_3;
  if (local_38 == 0) {
    local_4c = 1;
  }
  else {
    uVar1 = (ulong)(param_2 & 1);
    FUN_01545e98();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar1;
    FUN_01548104(uVar1,local_39 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    lVar2 = local_38;
    _objc_getAssociatedObject(local_38,DAT_028c5e08);
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar2;
    if (lVar2 == 0) {
      local_4c = 1;
    }
    else if (local_48 == 2) {
      uVar1 = (ulong)(local_39 & 1);
      FUN_015492b4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setColors__026ca8d0);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_30 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c98,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_28 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_20 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setLocations__026accb0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_removeAnimationForKey__026ca7f0,&cf_wcr_card_warm_colors);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_removeAnimationForKey__026ca7f0,&cf_wcr_card_warm_locations);
      local_4c = 1;
    }
    else {
      FUN_0157fa9c(lVar2,local_58,local_39 & 1);
      local_4c = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

