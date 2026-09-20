// FUN_016a5c40 @ 016a5c40

void FUN_016a5c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_emoticonResizeEnabled_026ac0b8);
  if ((((ulong)puVar1 & 1) != 0) &&
     (puVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_emoticonSpeedEnabled_026ac0c0),
     ((ulong)puVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonToolsHelper_026ce448,
               PTR_s_resizeAndSpeedEmoticonFromCell__026b2d80,local_18);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

