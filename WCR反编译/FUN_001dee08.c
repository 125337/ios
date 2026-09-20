// FUN_001dee08 @ 001dee08

byte FUN_001dee08(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  byte local_8c;
  ulong local_68;
  ulong local_58;
  ulong local_48;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_001dbb90(param_1,0);
    local_8c = 0;
    if ((uVar5 & 1) != 0) {
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_8c = 0;
      if (uVar5 == 0xf) {
        local_58 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_8c = 0;
        if (param_1 <= DAT_02323cd0) {
          local_68 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          uVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_8c = 0;
          if ((uVar5 & 1) != 0) {
            uVar5 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_clipsToBounds_026ca570);
            local_8c = (byte)uVar5;
          }
        }
      }
    }
    local_11 = local_8c & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

