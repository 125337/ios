// FUN_019d5e54 @ 019d5e54

/* WARNING: Type propagation algorithm not settling */

void FUN_019d5e54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  long local_38;
  long local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = param_1;
  _objc_storeStrong(local_30 + 2);
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  uVar1 = param_1 + 0x28;
  local_38 = param_1;
  _objc_loadWeakRetained();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  (**(code **)(local_30[0] + 0x10))(local_30[0],1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}

