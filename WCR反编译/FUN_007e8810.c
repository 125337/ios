// FUN_007e8810 @ 007e8810

void FUN_007e8810(double param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 *local_58;
  double local_50;
  undefined1 *local_48;
  undefined1 local_39;
  undefined8 local_38 [3];
  double local_20;
  undefined *local_18;
  
  FUN_007e42b4();
  if ((param_2 & 1) == 0) {
    _dispatch_sync(DAT_028cce90,&PTR___NSConcreteGlobalBlock_02580180);
  }
  else {
    FUN_007e5388();
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_themeBoxRedeemInterval_026a8498);
    local_20 = param_1;
    if (param_1 < 5.0) {
      local_20 = 5.0;
    }
    local_58 = local_38;
    local_38[0] = 0;
    local_48 = &local_39;
    local_39 = 0;
    local_78 = PTR___NSConcreteGlobalBlock_02578658;
    local_70 = 0xd0800000;
    local_6c = 0;
    local_68 = FUN_007e89c8;
    local_60 = &DAT_025801f0;
    local_50 = local_20;
    _dispatch_sync(DAT_028cce90,&local_78);
    _objc_storeStrong(&local_18,0);
  }
  return;
}

