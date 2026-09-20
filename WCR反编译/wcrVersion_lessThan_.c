// wcrVersion:lessThan: @ 01f40a50

/* Function Stack Size: 0x20 bytes */

bool WCRefineUICleanViewController::wcrVersion_lessThan_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_100;
  ulong local_e8;
  ulong local_d8;
  bool local_a9;
  ulong local_a8;
  bool local_91;
  ulong local_90;
  ulong local_80;
  ulong local_58;
  ulong local_50;
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
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_componentsSeparatedByString__0269d3c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_50 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = local_50;
  local_58 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  uVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  if (local_d8 < uVar1) {
    local_d8 = uVar1;
  }
  local_80 = 0;
  do {
    if ((long)local_d8 <= (long)local_80) {
      local_21 = 0;
LAB_01f40db4:
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      return local_21 & 1;
    }
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if (uVar1 <= local_80) {
      local_e8 = 0;
    }
    else {
      local_90 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_91 = uVar1 > local_80;
    if (local_91) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    uVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    if (uVar1 <= local_80) {
      local_100 = 0;
    }
    else {
      local_a8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_a9 = uVar1 > local_80;
    if (local_a9) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((long)local_e8 < (long)local_100) {
      local_21 = 1;
      goto LAB_01f40db4;
    }
    if ((long)local_100 < (long)local_e8) {
      local_21 = 0;
      goto LAB_01f40db4;
    }
    local_80 = local_80 + 1;
  } while( true );
}

