// FUN_002a822c @ 002a822c

void FUN_002a822c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c9710)(local_18,local_20,local_28);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    FUN_002bb194();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

