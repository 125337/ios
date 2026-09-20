// FUN_001db0cc @ 001db0cc

byte FUN_001db0cc(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  double dVar6;
  ulong local_60;
  ulong local_50;
  ulong local_40;
  ulong local_20;
  byte local_11;
  ulong uVar5;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_11 = false;
  if (local_20 != 0) {
    local_40 = local_20;
    dVar6 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    uVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar4 = (uint)uVar5;
    FUN_001dbb90(dVar6,param_1);
    local_11 = false;
    if ((uVar4 & 1) != 0) {
      local_50 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      uVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = false;
      if ((uVar5 & 1) != 0) {
        uVar5 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_clipsToBounds_026ca570);
        local_11 = false;
        if ((uVar5 & 1) != 0) {
          local_60 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_11 = dVar6 <= DAT_02323cd0;
        }
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

