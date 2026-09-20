// FUN_00052874 @ 00052874

void FUN_00052874(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct **local_1d8;
  cfstringStruct *local_1c0;
  cfstringStruct **local_160;
  cfstringStruct *local_a8;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  if (local_38 == (cfstringStruct *)0x0) {
    pcVar2 = local_30;
    FUN_0004fa34();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    FUN_00055128();
    if (((ulong)pcVar2 & 1) == 0) {
      local_a8 = &cf___;
    }
    else {
      local_a8 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_a8;
    local_50 = 1;
    _objc_storeStrong(&local_40,0);
    goto LAB_00053080;
  }
  pcVar1 = local_30;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  FUN_00055128();
  pcVar2 = local_58;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsToUsr_0269d090);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = pcVar2;
    FUN_0004fa34();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_60;
    FUN_00055128();
    pcVar2 = local_60;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = pcVar2;
      FUN_0004fa34();
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar1 = local_68;
      FUN_00055128();
      pcVar2 = local_68;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_38;
        FUN_00055194();
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar1;
        FUN_00055128();
        pcVar2 = local_70;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar2 = local_38;
          FUN_000552f0();
          local_71 = (byte)pcVar2;
          FUN_00055568();
          _objc_retainAutoreleasedReturnValue();
          local_80 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
LAB_00052e24:
            if (((local_71 & 1) == 0) &&
               (pcVar2 = local_58,
               (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
               pcVar2 != (cfstringStruct *)0x0)) {
              pcVar2 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_isEqualToString__0269ccc8,local_60);
              if ((((ulong)pcVar2 & 1) == 0) ||
                 (pcVar2 = local_68,
                 (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
                 local_28 = local_68, pcVar2 == (cfstringStruct *)0x0)) {
                pcVar2 = local_58;
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar2;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
              }
            }
            else if ((local_71 & 1) == 0) {
              pcVar2 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
              if (pcVar2 == (cfstringStruct *)0x0) {
                local_1d8 = &local_60;
              }
              else {
                local_1d8 = &local_68;
              }
              pcVar2 = *local_1d8;
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = pcVar2;
            }
            else {
              pcVar2 = local_70;
              FUN_00055128();
              if (((ulong)pcVar2 & 1) == 0) {
                local_1c0 = &cf___;
              }
              else {
                local_1c0 = local_70;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = local_1c0;
            }
          }
          else {
            pcVar2 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_80)
            ;
            if (((ulong)pcVar2 & 1) == 0) {
              pcVar2 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_isEqualToString__0269ccc8,local_80);
              if (((ulong)pcVar2 & 1) == 0) goto LAB_00052e24;
              pcVar3 = local_68;
              FUN_00055128();
              pcVar1 = local_68;
              pcVar2 = local_70;
              if (((ulong)pcVar3 & 1) == 0) {
                if ((local_71 & 1) == 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = pcVar1;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = pcVar2;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar1;
              }
            }
            else {
              pcVar1 = local_60;
              FUN_00055128();
              pcVar2 = local_60;
              if (((ulong)pcVar1 & 1) == 0) {
                if ((local_71 & 1) == 0) {
                  local_160 = &local_60;
                }
                else {
                  local_160 = &local_70;
                }
                pcVar2 = *local_160;
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar2;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar2;
              }
            }
          }
          local_50 = 1;
          _objc_storeStrong(&local_80,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar2;
          local_50 = 1;
        }
        _objc_storeStrong(&local_70,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
        local_50 = 1;
      }
      _objc_storeStrong(&local_68,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_50 = 1;
    }
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_50 = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_00053080:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

