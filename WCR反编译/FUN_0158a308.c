// FUN_0158a308 @ 0158a308

void FUN_0158a308(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_a4;
  undefined *local_98;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01565438();
  _objc_retainAutoreleasedReturnValue();
  local_20 = &cf_ContactInfoViewController;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_015671ac();
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)();
  puVar2 = local_38;
  if (local_38 == (undefined *)0x0) {
    FUN_015611fc();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_58 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_a4 = 0;
    if (local_50 != (undefined *)0x0) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a4 = (uint)puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_50;
    if ((local_a4 & 1) == 0) {
      local_28 = (undefined *)0x0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
    }
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_28);
  return;
}

