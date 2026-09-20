// FUN_00566210 @ 00566210

void FUN_00566210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_storeWeak(&DAT_028cb448,local_30);
  _objc_storeStrong(&DAT_028cb450,local_18);
  _objc_storeStrong(&DAT_028cb458,local_20);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
  uVar1 = DAT_028cb460;
  DAT_028cb460 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

