// FUN_01a37cc8 @ 01a37cc8

/* WARNING: Type propagation algorithm not settling */

void FUN_01a37cc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_30;
  ulong local_28 [3];
  
  local_28[1] = 0;
  local_28[2] = param_1;
  _objc_storeStrong(local_28 + 1);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resignFirstResponder_0269ea18);
  uVar2 = local_28[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28[0],PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_dismissWithAnimated__0269e420,1);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(local_28,0);
  _objc_storeStrong(local_28 + 1,0);
  return;
}

