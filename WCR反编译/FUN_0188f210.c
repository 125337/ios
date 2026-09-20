// FUN_0188f210 @ 0188f210

void FUN_0188f210(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_60;
  undefined *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_50 = param_3;
  local_48 = param_2;
  _objc_alloc();
  local_38 = &cf___;
  local_30 = &cf__N_;
  local_28 = &cf__;
  local_20 = &cf_e;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_58 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_60 = local_50;
  if ((local_50 < 0) || (3 < local_50)) {
    local_60 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSelectedSegmentIndex__0269e9e0,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setApportionsSegmentWidthsByCont_0269e9e8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setWidth_forSegmentAtIndex__026b7160,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4048000000000000,local_58,PTR_s_setWidth_forSegmentAtIndex__026b7160,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4048000000000000,local_58,PTR_s_setWidth_forSegmentAtIndex__026b7160,2);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4048000000000000,local_58,PTR_s_setWidth_forSegmentAtIndex__026b7160,3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,local_48,0x1000);
  puVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

