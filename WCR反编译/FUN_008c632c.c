// FUN_008c632c @ 008c632c

void FUN_008c632c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028ce068)(local_18,local_20,local_28,local_30);
  uVar1 = local_28;
  FUN_008c9688(local_28,local_18);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(1,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

