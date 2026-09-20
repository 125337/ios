// FUN_0064960c @ 0064960c

void FUN_0064960c(cfstringStruct *param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_e8;
  byte local_c4;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_53;
  byte local_52;
  byte local_51;
  undefined4 local_50;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  FUN_006620a0();
  if (((ulong)param_1 & 1) == 0) {
    pcVar1 = local_30;
    (*DAT_028cbb50)(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
  }
  else {
    pcVar1 = local_30;
    (*DAT_028cbb50)(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      _objc_storeStrong(&local_40,&cf___);
    }
    pcVar3 = local_40;
    FUN_006620c0();
    pcVar1 = local_40;
    if (((ulong)pcVar3 & 1) == 0) {
      FUN_006627f0();
      if ((((ulong)pcVar1 & 1) != 0) ||
         (pcVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf___),
         ((ulong)pcVar1 & 1) != 0)) {
        _objc_storeStrong(&local_40,&cf___);
      }
      pcVar1 = local_30;
      FUN_00662c28();
      local_51 = (byte)pcVar1;
      pcVar1 = local_30;
      FUN_00662c98();
      local_52 = (byte)pcVar1;
      local_c4 = 1;
      if ((local_51 & 1) == 0) {
        local_c4 = local_52;
      }
      local_53 = local_c4 & 1;
      pcVar1 = local_30;
      FUN_00662d08();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar1;
      if ((local_53 & 1) != 0) {
        FUN_00662ff8(pcVar1);
      }
      pcVar1 = local_60;
      FUN_00663124(local_60,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_e8 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_e8;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_68;
      FUN_00663614();
      local_69 = (byte)pcVar1;
      pcVar3 = local_68;
      FUN_00663740();
      pcVar1 = local_40;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_50 = 1;
      }
      else {
        if (((local_69 & 1) != 0) && (FUN_006638c8(), ((ulong)pcVar1 & 1) != 0)) {
          FUN_00663c28(local_30,PTR_s_setM_textForGreenLabel__026a62f8,&cf___);
          FUN_00663d9c(local_30,"_m_textForGreenLabel",&cf___);
          FUN_00663f60(local_30);
          _objc_storeStrong(&local_40,&cf___);
        }
        pcVar1 = local_30;
        FUN_00664010();
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = &cf___;
        if ((local_53 & 1) == 0) {
          pcVar1 = local_40;
          FUN_00664200();
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
            if ((pcVar1 == (cfstringStruct *)0x0) &&
               (pcVar1 = local_78, FUN_006620c0(), ((ulong)pcVar1 & 1) != 0)) {
              _objc_storeStrong(&local_80,local_78);
            }
            else {
              pcVar1 = local_68;
              FUN_00664f50();
              if ((((ulong)pcVar1 & 1) == 0) ||
                 (pcVar1 = local_40, FUN_006638c8(), ((ulong)pcVar1 & 1) == 0)) {
                pcVar1 = local_78;
                (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
                if ((pcVar1 != (cfstringStruct *)0x0) &&
                   (pcVar3 = local_78, FUN_006620c0(pcVar1), ((ulong)pcVar3 & 1) == 0)) {
                  FUN_00663f60(local_30);
                }
                _objc_storeStrong(&local_80,&cf___);
              }
              else {
                _objc_storeStrong(&local_80,local_40);
              }
            }
          }
          else {
            _objc_storeStrong(&local_80,local_40);
            pcVar1 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
            if ((pcVar1 != (cfstringStruct *)0x0) &&
               (pcVar1 = local_78,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_78,PTR_s_isEqualToString__0269ccc8,local_40),
               ((ulong)pcVar1 & 1) == 0)) {
              FUN_0066426c(local_30,local_40,&cf_getter_sync);
            }
          }
        }
        else {
          pcVar1 = local_78;
          FUN_00664200();
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_40;
            FUN_00664200();
            if (((ulong)pcVar1 & 1) != 0) {
              _objc_storeStrong(&local_80,local_40);
            }
          }
          else {
            _objc_storeStrong(&local_80,local_78);
          }
        }
        pcVar1 = local_30;
        FUN_006651b4(local_30,local_80,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          if ((local_53 & 1) == 0) {
            local_188 = local_80;
          }
          else {
            local_188 = &cf___;
          }
          local_180 = local_188;
        }
        else {
          local_180 = local_88;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = local_180;
        if (((local_53 & 1) != 0) || (FUN_00665300(), ((ulong)local_180 & 1) != 0)) {
          FUN_006653a8(&cf_g);
        }
        pcVar1 = local_90;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_50 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_50 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

