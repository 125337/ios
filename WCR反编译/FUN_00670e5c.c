// FUN_00670e5c @ 00670e5c

byte FUN_00670e5c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte local_160;
  ulong local_150;
  ulong local_138;
  ulong local_120;
  bool local_a9;
  ulong local_a8;
  ulong local_a0;
  bool local_91;
  ulong local_90;
  ulong local_88;
  bool local_79;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_21 = 0;
    local_40 = 1;
    goto LAB_00671778;
  }
  local_120 = local_30;
  FUN_00672de4();
  if (local_120 != 0) {
    local_21 = 1;
    local_40 = 1;
    goto LAB_00671778;
  }
  FUN_00672b5c(0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_120;
  FUN_00672f4c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_120;
  FUN_006693d4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar3;
  (*(code *)PTR__objc_release_02578630)();
  FUN_00668b18();
  _objc_retainAutoreleasedReturnValue();
  local_60 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_isEqualToString__0269ccc8,&cf_eN);
  local_61 = ((byte)local_120 ^ 1) & 1;
  local_79 = false;
  bVar1 = local_61 == 0;
  if (bVar1) {
    local_120 = 0;
  }
  else {
    FUN_00673008();
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_120;
  }
  local_79 = !bVar1;
  local_138 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_120;
  if ((local_79 & 1U) != 0) {
    local_138 = local_78;
    (*(code *)PTR__objc_release_02578630)();
  }
  local_91 = false;
  bVar1 = (local_61 & 1) == 0;
  if (bVar1) {
    local_138 = 0;
  }
  else {
    FUN_006730c4();
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_138;
  }
  local_91 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_138;
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  local_a9 = (local_61 & 1) == 0;
  if (local_a9) {
    local_150 = 0;
  }
  else {
    local_150 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_stringByAppendingString__0269d398,&cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_150;
  }
  local_a9 = !local_a9;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_150;
  if (local_a9) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
  local_160 = 1;
  if ((uVar3 & 1) == 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    local_160 = 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (uVar3 != 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_70);
        local_160 = 1;
        if ((uVar3 & 1) != 0) goto LAB_00671604;
      }
      uVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (uVar3 != 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_88);
        local_160 = 1;
        if ((uVar3 & 1) != 0) goto LAB_00671604;
      }
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_48);
      local_160 = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_50);
        local_160 = 1;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
          local_160 = 1;
          if ((uVar3 & 1) == 0) {
            uVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
            local_160 = 1;
            if ((uVar3 & 1) == 0) {
              uVar3 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_eeN);
              local_160 = 1;
              if ((uVar3 & 1) == 0) {
                uVar3 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_eeN);
                local_160 = 1;
                if ((uVar3 & 1) == 0) {
                  uVar3 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_eeN_)
                  ;
                  local_160 = 1;
                  if ((uVar3 & 1) == 0) {
                    uVar3 = local_30;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,PTR_s_hasPrefix__0269d320,local_58);
                    local_160 = 1;
                    if ((uVar3 & 1) == 0) {
                      uVar3 = local_a0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
                      if (uVar3 != 0) {
                        uVar3 = local_30;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_30,PTR_s_hasPrefix__0269d320,local_a0);
                        local_160 = 1;
                        if ((uVar3 & 1) != 0) goto LAB_00671604;
                      }
                      uVar3 = local_30;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_30,PTR_s_hasPrefix__0269d320,&cf___uNb);
                      local_160 = (byte)uVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00671604:
  local_21 = local_160 & 1;
  local_40 = 1;
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_00671778:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

