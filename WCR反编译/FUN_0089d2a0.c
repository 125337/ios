// FUN_0089d2a0 @ 0089d2a0

byte FUN_0089d2a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_140;
  ulong local_110;
  ulong local_e8;
  bool local_a9;
  ulong local_a8;
  bool local_91;
  ulong local_90;
  ulong local_80;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = local_40;
  local_58[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  uVar1 = local_58[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_count_0269cfe0);
  if (local_e8 < uVar1) {
    local_e8 = uVar1;
  }
  local_80 = 0;
  do {
    if ((long)local_e8 <= (long)local_80) {
      local_21 = 0;
LAB_0089d704:
      _objc_storeStrong(local_58);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
      _objc_storeStrong(&local_30,0);
      return local_21 & 1;
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if (uVar1 <= local_80) {
      local_110 = 0;
    }
    else {
      local_90 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_91 = uVar1 > local_80;
    if (local_91) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    uVar1 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_count_0269cfe0);
    if (uVar1 <= local_80) {
      local_140 = 0;
    }
    else {
      local_a8 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_140 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_a9 = uVar1 > local_80;
    if (local_a9) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((long)local_110 < (long)local_140) {
      local_21 = 1;
      goto LAB_0089d704;
    }
    if ((long)local_140 < (long)local_110) {
      local_21 = 0;
      goto LAB_0089d704;
    }
    local_80 = local_80 + 1;
  } while( true );
}

