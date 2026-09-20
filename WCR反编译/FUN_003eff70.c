// FUN_003eff70 @ 003eff70

byte FUN_003eff70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  uint local_184;
  cfstringStruct *local_140;
  undefined *local_d8;
  long local_d0;
  long lStack_c8;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_89;
  long local_88;
  long lStack_80;
  ulong local_78;
  ulong local_70;
  undefined4 local_68;
  cfstringStruct *local_58;
  ulong local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_2);
  uVar2 = local_50;
  _objc_getAssociatedObject(local_50,DAT_026e02e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar2 == 0) {
    local_70 = 0;
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_78 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_70,local_78);
      }
      _objc_storeStrong(&local_78,0);
    }
    if (local_70 == 0) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_140 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_140 = &cf___;
      }
      _objc_storeStrong(&local_70,local_140);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    uVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_41 = 0;
      local_68 = 1;
    }
    else {
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hasSuffix__0269d018,&cf__);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hasSuffix__0269d018,&cf_format_s_),
         (uVar2 & 1) == 0)) {
        local_41 = 0;
        local_68 = 1;
      }
      else {
        uVar2 = local_70;
        FUN_003eca9c();
        if ((uVar2 & 1) == 0) {
          uVar2 = local_50;
          FUN_003efe34(local_50,local_70);
          if ((uVar2 & 1) == 0) {
            uVar2 = local_50;
            FUN_003f0a84(local_50,local_70);
            if ((uVar2 & 1) == 0) {
              local_38 = 0x7fffffffffffffff;
              local_40 = 0;
              local_30 = 0x7fffffffffffffff;
              local_28 = 0;
              local_88 = 0x7fffffffffffffff;
              lStack_80 = 0;
              local_89 = 0;
              local_98 = 0;
              local_a0 = 0;
              uVar5 = local_70;
              FUN_003ecb30(local_70,&local_88,&local_89,&local_a0);
              _objc_storeStrong(&local_98,local_a0);
              uVar2 = local_70;
              if ((uVar5 & 1) == 0) {
                local_41 = 0;
                local_68 = 1;
              }
              else if (((local_89 & 1) == 0) || (local_88 == 0x7fffffffffffffff)) {
                local_41 = 0;
                local_68 = 1;
              }
              else {
                uVar5 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar2,PTR_s_substringToIndex__0269d6c0,uVar5 - 1);
                _objc_retainAutoreleasedReturnValue();
                local_a8 = uVar2;
                while( true ) {
                  uVar5 = local_a8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
                  uVar2 = local_a8;
                  local_184 = 0;
                  if (uVar5 != 0) {
                    uVar5 = local_a8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar2,PTR_s_characterAtIndex__0269fa18,uVar5 - 1);
                    local_184 = (uint)uVar2;
                    FUN_003ed084();
                  }
                  uVar2 = local_a8;
                  if ((local_184 & 1) == 0) break;
                  uVar5 = local_a8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_substringToIndex__0269d6c0,uVar5 - 1);
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = local_a8;
                  local_a8 = uVar2;
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                }
                uVar2 = local_88 + lStack_80;
                uVar5 = local_a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
                if (uVar5 < uVar2) {
                  local_41 = 0;
                  local_68 = 1;
                }
                else {
                  uVar2 = local_a8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_a8,PTR_s_substringToIndex__0269d6c0,local_88);
                  _objc_retainAutoreleasedReturnValue();
                  lStack_c8 = lStack_80;
                  local_d0 = local_88;
                  uVar5 = local_a8;
                  local_b0 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_a8,PTR_s_substringWithRange__0269d138,local_88,lStack_80);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_b8 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                             &cf________);
                  _objc_retainAutoreleasedReturnValue();
                  local_d8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
                  uVar2 = local_50;
                  uVar1 = DAT_026e02e8;
                  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_setAssociatedObject(uVar2,uVar1,puVar6,1);
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  FUN_003ec73c(local_50,local_58,local_d8,puVar3);
                  _objc_setAssociatedObject(local_50,DAT_026e02e8,0,1);
                  FUN_003ed0e0(local_50,local_d8);
                  local_41 = 1;
                  local_68 = 1;
                  _objc_storeStrong(&local_d8);
                  _objc_storeStrong(&local_b8,0);
                  _objc_storeStrong(&local_b0,0);
                }
                _objc_storeStrong(&local_a8,0);
              }
              _objc_storeStrong(&local_98,0);
            }
            else {
              FUN_003ec670(local_50,local_70);
              local_41 = 0;
              local_68 = 1;
            }
          }
          else {
            local_41 = 0;
            local_68 = 1;
          }
        }
        else {
          local_41 = 0;
          local_68 = 1;
        }
      }
    }
    _objc_storeStrong(&local_70,0);
  }
  else {
    local_41 = 0;
    local_68 = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

