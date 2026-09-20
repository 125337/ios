// FUN_015f0930 @ 015f0930

byte FUN_015f0930(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_70;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  uint local_3c;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (uVar4 == uVar5) {
    for (local_48 = 0; uVar4 = local_48, uVar5 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0), uVar4 < uVar5;
        local_48 = local_48 + 1) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_38;
      local_50 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_50;
      local_58 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8);
      bVar2 = false;
      bVar3 = true;
      bVar1 = false;
      if ((uVar6 & 1) != 0) {
        local_60 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_70 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        uVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8);
        bVar3 = true;
        if ((uVar6 & 1) != 0) {
          uVar6 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_unread_026b10c0);
          uVar7 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_unread_026b10c0);
          bVar3 = true;
          if ((int)uVar6 == (int)uVar7) {
            uVar6 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_asRedDot_026b10c8);
            uVar7 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_asRedDot_026b10c8);
            bVar3 = true;
            if ((int)uVar6 == (int)uVar7) {
              uVar6 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pinned_026ae320);
              uVar7 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_pinned_026ae320);
              bVar3 = true;
              bVar1 = true;
              if ((int)uVar6 == (int)uVar7) {
                uVar6 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_group_026b14d0);
                uVar7 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_group_026b14d0);
                bVar3 = (int)uVar6 != (int)uVar7;
              }
            }
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (bVar3) {
        local_21 = 0;
      }
      local_3c = (uint)bVar3;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      if (local_3c != 0) goto LAB_015f0dd4;
    }
    local_21 = 1;
    local_3c = 1;
  }
  else {
    local_21 = 0;
    local_3c = 1;
  }
LAB_015f0dd4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

