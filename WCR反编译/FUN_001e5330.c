// FUN_001e5330 @ 001e5330

byte FUN_001e5330(undefined8 param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  uint local_ac;
  ulong local_78;
  ulong local_68;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_21 = 0;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    uVar4 = local_30;
    uVar6 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_001dbb90(uVar6,param_1);
    local_ac = 1;
    if ((uVar5 & 1) != 0) {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      uVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_ac = 1;
      if (uVar5 == 0xf) {
        local_78 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        uVar5 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_ac = 1;
        if ((uVar5 & 1) != 0) {
          uVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_clipsToBounds_026ca570);
          local_ac = (uint)uVar5 ^ 1;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((local_ac & 1) == 0) {
      if (param_2 <= 0.0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_21 = param_2 <= DAT_02323cd0;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      else {
        uVar4 = local_30;
        dVar7 = param_2;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar3 = (byte)uVar5;
        FUN_001dbb90(dVar7,param_2);
        local_21 = bVar3 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
    }
    else {
      local_21 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

