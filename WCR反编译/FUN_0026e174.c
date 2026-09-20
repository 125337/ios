// FUN_0026e174 @ 0026e174

void FUN_0026e174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  uint local_12c;
  cfstringStruct *local_118;
  cfstringStruct *local_f0;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [2];
  cfstringStruct *local_58;
  byte local_49;
  uint local_48;
  ulong local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_30;
  FUN_0026ec00();
  if ((uVar2 & 1) == 0) {
    uVar2 = local_30;
    FUN_0026ee10(local_30,PTR_s_isFileExist_026a14b0);
    local_49 = (byte)uVar2;
    if (((uVar2 & 1) == 0) && (uVar2 = local_38, FUN_0026ef1c(), (uVar2 & 1) != 0)) {
      uVar2 = local_38;
      FUN_0026f0f4();
      local_49 = (byte)uVar2;
    }
    local_58 = (cfstringStruct *)0x0;
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stateLabel_026a14b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_58;
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    local_f0 = local_58;
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)local_f0 & 1) == 0) {
      local_48 = 1;
    }
    else {
      local_71 = 0;
      bVar1 = (local_49 & 1) == 0;
      if (bVar1) {
        FUN_0026f4bc();
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_f0;
      }
      else {
        local_f0 = &cf__N_;
      }
      local_71 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_68[0] = local_f0;
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_118 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_118;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      bVar1 = false;
      pcVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      local_12c = 0;
      if (pcVar5 != (cfstringStruct *)0x0) {
        pcVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_68[0]);
        local_12c = 0;
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf__N_);
          local_12c = 0;
          if (((ulong)pcVar5 & 1) == 0) {
            pcVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf__gN_)
            ;
            pcVar5 = local_80;
            local_12c = 0;
            if (((ulong)pcVar3 & 1) == 0) {
              FUN_0026f4bc();
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isEqualToString__0269ccc8);
              local_12c = (uint)pcVar5 ^ 1;
              local_88 = pcVar3;
            }
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      bVar1 = (local_12c & 1) == 0;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setText__026caa88,local_68[0]);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHidden__026ca970,0);
        FUN_0026f874(local_58,local_28);
      }
      local_48 = (uint)!bVar1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(local_68,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

