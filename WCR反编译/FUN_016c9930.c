// FUN_016c9930 @ 016c9930

void FUN_016c9930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine_fonts);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

