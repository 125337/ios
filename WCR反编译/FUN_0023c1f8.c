// FUN_0023c1f8 @ 0023c1f8

byte FUN_0023c1f8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_150;
  ulong local_120;
  ulong local_f8;
  bool local_a9;
  ulong local_a8;
  bool local_91;
  ulong local_90;
  ulong local_80;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_50;
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    uVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    if (local_f8 < uVar1) {
      local_f8 = uVar1;
    }
    for (local_80 = 0; local_80 < local_f8; local_80 = local_80 + 1) {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      if (uVar1 <= local_80) {
        local_120 = 0;
      }
      else {
        local_90 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
        _objc_retainAutoreleasedReturnValue();
        local_120 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_91 = uVar1 > local_80;
      if (local_91) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      uVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      if (uVar1 <= local_80) {
        local_150 = 0;
      }
      else {
        local_a8 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
        _objc_retainAutoreleasedReturnValue();
        local_150 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_a9 = uVar1 > local_80;
      if (local_a9) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      if ((long)local_120 < (long)local_150) {
        local_21 = 1;
        goto LAB_0023c6cc;
      }
      if ((long)local_150 < (long)local_120) {
        local_21 = 0;
        goto LAB_0023c6cc;
      }
    }
    local_21 = 0;
LAB_0023c6cc:
    local_48 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

