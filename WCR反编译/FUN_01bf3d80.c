// FUN_01bf3d80 @ 01bf3d80

void FUN_01bf3d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_scheduleDraftAtIndex__026c0b30,uVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

