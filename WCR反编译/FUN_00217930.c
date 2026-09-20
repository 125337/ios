// FUN_00217930 @ 00217930

void FUN_00217930(double param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  double dVar4;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_001cf94c();
  if (((uVar1 & 1) != 0) && (local_18 != 0)) {
    _CACurrentMediaTime();
    dVar4 = param_1;
    FUN_00216878(local_18);
    if ((param_1 <= dVar4) && (uVar3 = local_18, FUN_00217cf8(), (uVar3 & 1) == 0)) {
      FUN_00218068(local_18);
      uVar3 = local_18;
      FUN_00218900();
      FUN_001d3fac();
      if ((uVar3 & 1) == 0) {
        FUN_001d4140();
      }
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      FUN_002189b0(param_1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,1);
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      FUN_00219074(param_1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

