// FUN_006620c0 @ 006620c0

byte FUN_006620c0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint local_f8;
  ulong local_b0;
  undefined *local_a8;
  ulong local_a0;
  byte local_91;
  undefined8 local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  undefined *local_70;
  undefined4 local_68;
  ulong local_58;
  ulong local_50;
  byte local_41;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar1 = local_50;
  FUN_006653e8();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 < 4) ||
     (uVar1 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf__),
     (uVar1 & 1) == 0)) {
    local_41 = 0;
    local_68 = 1;
  }
  else {
    uVar1 = local_58;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,&cf__);
    local_78 = uVar1;
    local_70 = puVar3;
    if ((uVar1 == 0x7fffffffffffffff) || (uVar1 < 2)) {
      local_41 = 0;
      local_68 = 1;
    }
    else {
      local_88 = uVar1 - 1;
      local_38 = 1;
      local_30 = 1;
      local_90 = 1;
      uVar1 = local_58;
      local_40 = local_88;
      local_28 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringWithRange__0269d138,1,local_88);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf__);
      local_f8 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_caseInsensitiveCompare__0269db48,&cf_Voice);
        local_f8 = 1;
        if (uVar1 != 0) {
          uVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf__);
          local_f8 = (uint)uVar1;
        }
      }
      local_91 = (byte)local_f8 & 1;
      if ((local_f8 & 1) == 0) {
        local_41 = 0;
        local_68 = 1;
      }
      else {
        uVar1 = local_78 + 1;
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (uVar1 < uVar2) {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_substringFromIndex__0269d120,local_78 + 1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = uVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
            local_41 = 1;
            local_68 = 1;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = puVar3;
            for (local_b0 = 0; uVar1 = local_a0,
                (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
                local_b0 < uVar1; local_b0 = local_b0 + 1) {
              uVar1 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_characterAtIndex__0269fa18,local_b0);
              if (((ushort)uVar1 < 0x30) || (0x39 < (ushort)uVar1)) break;
            }
            if (local_b0 == 0) {
              local_41 = 0;
            }
            else {
              for (; uVar1 = local_a0,
                  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
                  puVar3 = local_a8, local_b0 < uVar1; local_b0 = local_b0 + 1) {
                uVar1 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a0,PTR_s_characterAtIndex__0269fa18,local_b0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_characterIsMember__026a20a0,uVar1 & 0xffffffff);
                if (((ulong)puVar3 & 1) == 0) {
                  local_41 = 0;
                  goto LAB_00662744;
                }
              }
              local_41 = 1;
            }
LAB_00662744:
            local_68 = 1;
            _objc_storeStrong(&local_a8,0);
          }
          _objc_storeStrong(&local_a0,0);
        }
        else {
          local_41 = 1;
          local_68 = 1;
        }
      }
      _objc_storeStrong(&local_80,0);
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

