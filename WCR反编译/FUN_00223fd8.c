// FUN_00223fd8 @ 00223fd8

void FUN_00223fd8(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  uint local_9c;
  ulong local_60;
  ulong local_50;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  if (((local_18 != 0) && (local_20 != 0)) && (DAT_028c9078 < 1)) {
    FUN_00218068(DAT_028c9078,local_20);
    FUN_0022459c(local_20);
    bVar2 = false;
    bVar1 = false;
    uVar3 = local_20;
    dVar5 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar5 = ABS(dVar5 - param_1);
    local_9c = 1;
    if (dVar5 <= 0.5) {
      local_50 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_9c = 1;
      if ((uVar4 & 1) != 0) {
        local_60 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_9c = 1;
        if (ABS(dVar5) <= DAT_02323dc8) {
          uVar4 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_clipsToBounds_026ca570);
          local_9c = (uint)uVar4 ^ 1;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((local_9c & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      FUN_002248c4(param_1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setClipsToBounds__026ca8c8,1);
    }
    FUN_00224f34(local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

