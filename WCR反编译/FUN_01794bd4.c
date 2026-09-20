// FUN_01794bd4 @ 01794bd4

void FUN_01794bd4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double local_100;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  uVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  FUN_017959f8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_58 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*DAT_028e4048)(local_28,local_30,local_38,local_40,local_48);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((((ulong)puVar3 & 1) != 0) && (uVar1 = local_50, FUN_01795e5c(local_50,0), (uVar1 & 1) != 0)
       ) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_100 = param_1;
      if (param_1 <= 0.0) {
        local_100 = 0.0;
      }
      dVar4 = local_100;
      FUN_01796080();
      FUN_01796138(local_100 + dVar4,local_58,0);
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

