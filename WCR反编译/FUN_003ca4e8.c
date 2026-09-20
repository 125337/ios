// FUN_003ca4e8 @ 003ca4e8

void FUN_003ca4e8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_70 [4];
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  if (local_40 == 0) {
    local_38 = 0;
    local_44 = 1;
  }
  else {
    local_50 = 0;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_headImageView_0269e2a8);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_headImageView_0269e2a8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_50;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      uVar2 = local_40;
      FUN_003b3da8(local_40,"_headImageView");
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_50;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      uVar2 = local_40;
      FUN_003b3da8(local_40,"m_headImageView");
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_50;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      uVar2 = local_40;
      FUN_003612b8(local_40,&cf_headImageView);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_50;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      uVar2 = local_40;
      FUN_003612b8(local_40,&cf__headImageView);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_50;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = local_40;
    uVar2 = local_50;
    if ((uVar1 & 1) == 0) {
      local_28 = &cf_MMUILongPressImageView;
      local_20 = &cf_MMLongPressImageView;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003b3ef4(uVar4,puVar3,4);
      _objc_retainAutoreleasedReturnValue();
      local_70[0] = uVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_38 = local_40;
      uVar1 = local_70[0];
      if (local_70[0] == 0) {
        local_30 = &cf_UIImageView;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_003b3ef4(local_38,puVar3,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = uVar1;
      }
      local_44 = 1;
      _objc_storeStrong(local_70,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar2;
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_38);
  return;
}

