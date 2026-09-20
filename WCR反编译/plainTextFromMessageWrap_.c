// plainTextFromMessageWrap: @ 00fbaf24

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::plainTextFromMessageWrap_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_178;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_140;
  cfstringStruct *local_120;
  cfstringStruct *local_e8;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  int local_90;
  int local_8c;
  cfstringStruct *local_88;
  cfstringStruct *local_80 [4];
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_44 = 1;
  }
  else {
    local_50 = (cfstringStruct *)0x0;
    local_58 = (cfstringStruct *)0x0;
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_e8 = (cfstringStruct *)0x0;
    }
    else {
      local_e8 = local_60;
    }
    _objc_storeStrong(&local_50,local_e8);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_storeStrong(&local_60,0);
    if (local_58 == (cfstringStruct *)0x1) {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_44 = 1;
      }
      else {
        pcVar3 = local_50;
        FUN_00fba334();
        pcVar1 = local_50;
        if (((ulong)pcVar3 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
          local_44 = 1;
        }
        else {
          pcVar3 = local_50;
          FUN_00fba4e0();
          _objc_retainAutoreleasedReturnValue();
          local_80[0] = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
          pcVar1 = local_80[0];
          if (pcVar3 == (cfstringStruct *)0x0) {
            pcVar1 = local_50;
            FUN_00fba828(0);
            _objc_retainAutoreleasedReturnValue();
            local_88 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
            if (pcVar1 == (cfstringStruct *)0x0) {
              local_120 = (cfstringStruct *)0x0;
            }
            else {
              local_120 = local_88;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = local_120;
            local_44 = 1;
            _objc_storeStrong(&local_88,0);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar1;
            local_44 = 1;
          }
          _objc_storeStrong(local_80,0);
        }
      }
    }
    else if (local_58 == (cfstringStruct *)0x31) {
      if (local_50 == (cfstringStruct *)0x0) {
        local_140 = &::cf___;
      }
      else {
        local_140 = local_50;
      }
      pcVar1 = local_40;
      FUN_00fbb554(local_40,local_140);
      if (((ulong)pcVar1 & 1) == 0) {
        local_28 = (cfstringStruct *)0x0;
        local_44 = 1;
      }
      else {
        if (local_50 == (cfstringStruct *)0x0) {
          local_158 = &::cf___;
        }
        else {
          local_158 = local_50;
        }
        pcVar1 = local_40;
        FUN_00fbb780(local_40,local_158);
        local_8c = (int)pcVar1;
        pcVar1 = local_40;
        FUN_00fbb918(local_40,PTR_s_m_uiShowType_026acfd8);
        local_90 = (int)pcVar1;
        local_a1 = 0;
        local_b1 = 0;
        local_160 = local_40;
        if ((local_8c == 9) && (local_90 == 5)) {
          FUN_00fbb9b0(local_40,PTR_s_m_nsDesc_026acfe0);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 1;
          local_a0 = local_160;
        }
        else {
          FUN_00fbb9b0(local_40,PTR_s_m_nsTitle_026a9d60);
          _objc_retainAutoreleasedReturnValue();
          local_b1 = 1;
          local_b0 = local_160;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_160;
        if ((local_b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        pcVar3 = local_98;
        FUN_00fbbaf8();
        pcVar1 = local_98;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar1 = local_50;
          FUN_00fba4e0();
          _objc_retainAutoreleasedReturnValue();
          local_c0 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_178 = (cfstringStruct *)0x0;
          }
          else {
            local_178 = local_c0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = local_178;
          local_44 = 1;
          _objc_storeStrong(&local_c0,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
          local_44 = 1;
        }
        _objc_storeStrong(&local_98,0);
      }
    }
    else {
      local_28 = (cfstringStruct *)0x0;
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

