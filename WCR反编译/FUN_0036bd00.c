// FUN_0036bd00 @ 0036bd00

void FUN_0036bd00(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  if (local_38 == 0) {
    local_30 = 0;
    local_3c = 1;
  }
  else {
    uVar1 = local_38;
    FUN_003612b8(local_38,&cf_m_itemView);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      uVar3 = local_38;
      FUN_003b3da8(local_38,"m_itemView");
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48;
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_48;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_30 = local_38;
    uVar3 = local_48;
    if ((uVar1 & 1) == 0) {
      local_28 = &cf_MainFrameItemView;
      local_20 = &cf_FakeMainFrameItemView;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003b3ef4(local_30,puVar2,5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = uVar3;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_30);
  return;
}

