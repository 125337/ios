// cornerCountEstimateForPoints: @ 0165294c

/* Function Stack Size: 0x18 bytes */

long_long WCRSuperFloatCropViewController::cornerCountEstimateForPoints_
                    (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double in_d1;
  double dVar5;
  long local_110;
  double local_c0;
  long local_90;
  double local_88;
  double local_80;
  long_long local_78;
  ulong local_68;
  SEL local_60;
  ID local_58;
  long_long local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  dVar1 = DAT_02324200;
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
  if (uVar2 < 0xc) {
    local_50 = 0;
  }
  else {
    local_78 = 0;
    local_80 = 0.0;
    dVar3 = NAN;
    local_88 = NAN;
    for (local_90 = 2; uVar2 = local_68,
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0), local_90 < (long)uVar2
        ; local_90 = local_90 + local_110) {
      uVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_90 + -2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar4 = dVar3;
      dVar5 = in_d1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      dVar5 = dVar5 - in_d1;
      local_40 = dVar4 - dVar3;
      local_38 = dVar5;
      _atan2(dVar5,local_40);
      local_30 = local_88;
      local_28 = local_88;
      for (local_c0 = dVar5 - local_88; DAT_02323cb0 < local_c0; local_c0 = local_c0 - dVar1) {
      }
      for (; local_c0 < DAT_0232c400; local_c0 = local_c0 + dVar1) {
      }
      local_48 = local_80 + local_c0;
      local_80 = local_48;
      if (0.75 < ABS(local_48)) {
        local_78 = local_78 + 1;
        local_80 = 0.0;
      }
      in_d1 = 0.75;
      uVar2 = local_68;
      dVar3 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      local_110 = (long)uVar2 / 0x30;
      if (local_110 < 2) {
        local_110 = 1;
      }
      local_88 = dVar5;
    }
    local_50 = local_78;
  }
  _objc_storeStrong(&local_68,0);
  return local_50;
}

