// FUN_01df24d4 @ 01df24d4

void FUN_01df24d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_58;
  char *local_28;
  char *local_20;
  undefined8 local_18;
  
  local_58 = "MMTableView";
  local_18 = param_5;
  _objc_getClass();
  if (local_58 == (char *)0x0) {
    local_58 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
  }
  local_20 = local_58;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_viewFrame_026a5398);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,param_2,param_3,param_4,local_58,PTR_s_initWithFrame_style__026a2618,local_18);
  local_28 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAutoresizingMask__026ca878,0x12);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

