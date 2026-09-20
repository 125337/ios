// FUN_0079f750 @ 0079f750

void FUN_0079f750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_b0;
  cfstringStruct *local_a8 [3];
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = (undefined *)0x0;
  _objc_storeStrong(&local_80,param_2);
  puVar1 = local_80;
  local_88 = param_3;
  FUN_0079f278();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_WCRefine_MainFrameSectionFill_;
  local_90 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_WCRefine_MainFrameSectionFill_,PTR_s_stringByAppendingFormat__026a2088,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_90;
  local_a8[0] = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_0079d944();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_b0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_b0;
    local_b0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setName__0269e0c8,local_a8[0]);
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_b0,PTR_s_setContentsScale__026ca8f0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_78 = &cf_bounds;
    puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_70 = &cf_position;
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_68 = &cf_path;
    puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_60 = &cf_fillColor;
    puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_58 = &cf_hidden;
    puVar6 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setActions__0269f1c0);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(local_a8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}

