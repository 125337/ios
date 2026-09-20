// FUN_001d3818 @ 001d3818

void FUN_001d3818(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_80;
  undefined4 local_74;
  ulong local_70;
  ulong local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  if (local_70 == 0) {
    local_68 = 0;
    local_74 = 1;
  }
  else {
    uVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_description_026ca5f8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_68 = 0;
    }
    else {
      uVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfString__0269d838,&cf__);
      if (uVar2 == 0x7fffffffffffffff) {
        local_68 = 0;
      }
      else {
        uVar1 = uVar2 + 1;
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        uVar4 = local_80;
        if (uVar1 < uVar3) {
          uVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
          local_40 = uVar3 - uVar1;
          local_38 = uVar1;
          local_30 = uVar1;
          local_28 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_rangeOfString_options_range__0269d130,&cf__,0,uVar1,local_40);
          if ((uVar4 == 0x7fffffffffffffff) || (uVar4 <= uVar2)) {
            local_68 = 0;
          }
          else {
            local_58 = uVar2 + 1;
            local_60 = (uVar4 - uVar2) + -1;
            uVar2 = local_80;
            local_50 = local_58;
            local_48 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_substringWithRange__0269d138,local_58,local_60);
            _objc_retainAutoreleasedReturnValue();
            local_68 = uVar2;
          }
        }
        else {
          local_68 = 0;
        }
      }
    }
    local_74 = 1;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

