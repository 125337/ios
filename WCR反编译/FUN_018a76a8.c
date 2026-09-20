// FUN_018a76a8 @ 018a76a8

void FUN_018a76a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  dispatch_time_t dVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resignFirstResponder_0269ea18);
  dVar2 = _dispatch_time(0,280000000);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  _dispatch_after(dVar2,puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

