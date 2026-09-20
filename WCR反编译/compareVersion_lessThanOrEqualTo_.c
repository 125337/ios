// compareVersion:lessThanOrEqualTo: @ 01f54960

/* Function Stack Size: 0x20 bytes */

bool WCRefineVoiceAutoSpeed::compareVersion_lessThanOrEqualTo_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_108;
  ulong local_f0;
  ulong local_e0;
  bool local_b1;
  ulong local_b0;
  bool local_99;
  ulong local_98;
  ulong local_88;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  if ((local_40 == 0) || (local_48 == 0)) {
    local_21 = 1;
    local_4c = 1;
  }
  else {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_componentsSeparatedByString__0269d3c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_58;
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (local_e0 < uVar1) {
      local_e0 = uVar1;
    }
    for (local_88 = 0; (long)local_88 < (long)local_e0; local_88 = local_88 + 1) {
      uVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      if (uVar1 <= local_88) {
        local_f0 = 0;
      }
      else {
        local_98 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_99 = uVar1 > local_88;
      if (local_99) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      if (uVar1 <= local_88) {
        local_108 = 0;
      }
      else {
        local_b0 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
        _objc_retainAutoreleasedReturnValue();
        local_108 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_b1 = uVar1 > local_88;
      if (local_b1) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if ((long)local_f0 < (long)local_108) {
        local_21 = 1;
        goto LAB_01f54cf4;
      }
      if ((long)local_108 < (long)local_f0) {
        local_21 = 0;
        goto LAB_01f54cf4;
      }
    }
    local_21 = 1;
LAB_01f54cf4:
    local_4c = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

