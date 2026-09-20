// FUN_0019e67c @ 0019e67c

undefined8 FUN_0019e67c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double in_d3;
  undefined8 uVar4;
  double local_f0;
  double local_58;
  long local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  local_58 = 0.0;
  lVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f0 = (in_d3 - 34.0) * 0.5;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_f0 < 0.0) {
      local_f0 = 0.0;
    }
    local_58 = local_f0;
  }
  uVar3 = 0x4041000000000000;
  uVar4 = 0x4041000000000000;
  uVar2 = 0x402e000000000000;
  FUN_001a0194();
  local_40 = uVar2;
  local_38 = local_58;
  local_30 = uVar3;
  local_28 = uVar4;
  _objc_storeStrong(&local_48,0);
  return local_40;
}

