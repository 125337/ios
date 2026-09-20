// FUN_00fbf314 @ 00fbf314

void FUN_00fbf314(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    _objc_storeStrong(&local_28,local_18);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_ThemeBoxAirDropThemePickViewController_026cec00,
             PTR_s_presentPickerWithTargetWxid_targ_026acfd0,local_18,local_28);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

