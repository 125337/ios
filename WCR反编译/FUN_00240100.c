// FUN_00240100 @ 00240100

ulong FUN_00240100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long local_68;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = local_18;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_shouldSuppressCallBannerForUsern_026a0cb8,local_68,local_20,local_28);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return (ulong)puVar2 & 0xffffffff;
}

