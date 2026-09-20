// FUN_004007b0 @ 004007b0

void FUN_004007b0(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  local_38 = &cf__;
  local_30 = &cf_i;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_48 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTag__026caa80,DAT_02324150);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setUserInteractionEnabled__026caad8,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
             PTR_s_wcr_ipadLoginModeAction__026a3518,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_sizeToFit_0269ec08);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
  if (param_3 < 168.0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,0x4065000000000000,param_4,local_48,PTR_s_setFrame__026ca960);
  }
  puVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}

