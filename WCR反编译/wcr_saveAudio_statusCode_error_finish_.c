// wcr_saveAudio:statusCode:error:finish: @ 015a1c48

/* Function Stack Size: 0x30 bytes */

void WCRefineVoiceCloneHelper::wcr_saveAudio_statusCode_error_finish_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  ID IVar10;
  undefined *local_168;
  cfstringStruct *local_150;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_108;
  ID local_d8;
  undefined *local_d0;
  ulong local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  uint local_54;
  long local_50;
  cfstringStruct *local_48;
  long_long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = (cfstringStruct *)0x0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  if ((local_48 == (cfstringStruct *)0x0) &&
     (uVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar3 != 0)) {
    if ((long)local_40 < 400) {
      uVar3 = local_38;
      FUN_015a2434(local_40 - 400);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        (**(code **)(local_50 + 0x10))(local_50,0,&cf_TbT_N_fgHev);
        local_54 = 1;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_d0 = puVar8;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        IVar9 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_voiceAssetsDirectory__026b0a08,&cf_Cache);
        _objc_retainAutoreleasedReturnValue();
        IVar10 = IVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = IVar10;
        (*(code *)PTR__objc_release_02578630)(IVar9);
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_writeToFile_atomically__0269f928,local_d8,1);
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          (**(code **)(local_50 + 0x10))(local_50,local_d8,0);
        }
        else {
          (**(code **)(local_50 + 0x10))(local_50,0,&cf_QeQ4NeeN1Y_);
        }
        local_54 = (uint)!bVar1;
        _objc_storeStrong(&local_d8);
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_c8,0);
    }
    else {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_38,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_60 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
      local_71 = 0;
      local_81 = 0;
      local_91 = 0;
      if (((ulong)pcVar4 & 1) == 0) {
        local_138 = (cfstringStruct *)0x0;
      }
      else {
        local_120 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_error);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = local_120;
        if (local_120 == (cfstringStruct *)0x0) {
          local_130 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = local_130;
          if (local_130 == (cfstringStruct *)0x0) {
            local_130 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_detail);
            _objc_retainAutoreleasedReturnValue();
            local_91 = 1;
            local_90 = local_130;
          }
          local_120 = local_130;
        }
        local_138 = local_120;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_138;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      pcVar4 = local_68;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
      if (((ulong)pcVar4 & 1) == 0) {
        local_150 = &::cf___;
      }
      else {
        local_150 = local_68;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
      if (&section_00000068.reserved3 < local_150) {
        pcVar5 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_substringToIndex__0269d6c0,0xb4);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_a0;
        local_a0 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      lVar2 = local_50;
      pcVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      local_a9 = 0;
      local_b9 = 0;
      local_168 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Tb1Y_);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 1;
        local_b8 = local_168;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Tb1Y_);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_168;
      }
      (**(code **)(lVar2 + 0x10))(lVar2,0,local_168);
      if ((local_b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      local_54 = 1;
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
  }
  else {
    lVar2 = local_50;
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_108 = &cf_Q__;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,0,local_108);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_54 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

