// FUN_00318438 @ 00318438

void FUN_00318438(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  double local_70;
  undefined *local_68;
  double local_60;
  undefined *local_58;
  undefined *local_50 [3];
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    lVar3 = local_28;
    FUN_00322304(local_28,0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0);
    if (lVar3 == 0) {
      FUN_00322468(local_28,0);
      local_2c = 1;
    }
    else {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = puVar4;
      FUN_0031245c();
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_globalCornerStroke_026a2018);
      local_60 = param_1;
      if (5.0 < param_1) {
        local_60 = 5.0;
      }
      puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_28;
      lVar3 = local_38;
      local_b0 = PTR___NSConcreteGlobalBlock_02578658;
      local_a8 = 0xd0800000;
      local_a4 = 0;
      local_a0 = FUN_003229a8;
      local_98 = &DAT_0257c138;
      local_68 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_50[0];
      local_90 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_58;
      local_88 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_68;
      local_80 = puVar1;
      local_70 = local_60;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar3,PTR_s_enumerateIndexesUsingBlock__026a2090,&local_b0);
      FUN_00322468(local_28,local_68);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(local_50,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

