// FUN_01e44ca0 @ 01e44ca0

void FUN_01e44ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  char *local_108;
  char *local_78;
  char *local_70;
  cfstringStruct *local_68;
  ulong local_60;
  undefined *local_58;
  undefined4 local_50;
  byte local_49;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  local_49 = param_4;
  if ((local_38 == 0) || (local_40 == 0)) {
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    if ((local_49 & 1) == 0) {
      uVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = &cf_PushViewController_animated_;
      local_60 = uVar6;
      _NSSelectorFromString();
      uVar6 = local_60;
      local_68 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar7);
      if ((uVar6 & 1) == 0) {
        if (local_60 == 0) {
          local_108 = "MMUINavigationController";
          _objc_getClass();
          if (local_108 == (char *)0x0) {
            local_108 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          }
          local_70 = local_108;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_78 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_108,1);
          _objc_storeStrong(&local_78,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_pushViewController_animated__0269d590,local_40,1);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,local_68,local_40,1);
      }
      _objc_storeStrong(&local_60,0);
      local_50 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTitle__0269cef0,local_48);
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_navigationBar_0269ea30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setModalPresentationStyle__0269d2a8,1);
      iVar1 = 2;
      ___isPlatformVersionAtLeast(2,0xf,0);
      if (iVar1 != 0) {
        puVar2 = PTR__OBJC_CLASS___UISheetPresentationControllerDetent_026cf618;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UISheetPresentationControllerDetent_026cf618,
                   PTR_s_largeDetent_026af2e8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_sheetPresentationController_026af2b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_sheetPresentationController_026af2b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1);
      local_50 = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

