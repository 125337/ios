// FUN_01debf94 @ 01debf94

void FUN_01debf94(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_70;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineGradientPalette_026ce910;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_normalizedHexStops__026acc78,local_18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_20 < 3) {
    local_a0 = local_20;
  }
  else {
    local_a0 = 2;
  }
  if (local_a0 < 1) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_a0;
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_b0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_a8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_b0;
  }
  else {
    local_b0 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_atIndexedSubscript__0269e970,local_b0,local_a8);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

