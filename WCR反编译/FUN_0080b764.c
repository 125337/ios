// FUN_0080b764 @ 0080b764

void FUN_0080b764(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  byte local_19;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = DAT_028ccf48;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028ccf48,PTR_s_objectForKeyedSubscript__0269d098,local_18);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if ((local_19 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
  }
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf48,PTR_s_removeObjectForKey__0269d700,local_18);
  FUN_0080c250(local_18,local_19 & 1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

