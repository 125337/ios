// FUN_0188f978 @ 0188f978

void FUN_0188f978(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_48 = param_3;
  local_40 = param_2;
  _objc_alloc();
  local_30 = &cf_E__;
  local_28 = &cf_E__N;
  local_20 = &cf_E_S;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_50 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_58 = local_48;
  if ((local_48 < 0) || (2 < local_48)) {
    local_58 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSelectedSegmentIndex__0269e9e0,local_58);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setApportionsSegmentWidthsByCont_0269e9e8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setWidth_forSegmentAtIndex__026b7160,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x404d000000000000,local_50,PTR_s_setWidth_forSegmentAtIndex__026b7160,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x404d000000000000,local_50,PTR_s_setWidth_forSegmentAtIndex__026b7160,2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_38,local_40,0x1000);
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

