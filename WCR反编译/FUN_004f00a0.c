// FUN_004f00a0 @ 004f00a0

void FUN_004f00a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *local_200;
  cfstringStruct *local_160;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  uint local_50;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  (*DAT_028cae98)(local_28,local_30,local_38,local_40);
  pcVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  pcVar3 = local_38;
  if (((ulong)pcVar2 & 1) == 0) {
    local_50 = 1;
    goto LAB_004f09a4;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = &cf_WCRefineRevokeFrom___;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = &cf_WCRefineRevokeUser___;
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,local_60);
    pcVar2 = local_58;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,local_68);
      pcVar2 = local_58;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = pcVar2;
        FUN_004fafcc();
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_user);
        _objc_retainAutoreleasedReturnValue();
        local_200 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_200 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = local_200;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          FUN_004fb95c(local_28,local_c8);
        }
        local_50 = (uint)(pcVar2 == (cfstringStruct *)0x0);
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_c0,0);
        _objc_storeStrong(&local_b8,0);
        if (local_50 != 0) goto LAB_004f0974;
      }
      local_50 = 0;
    }
    else {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar2;
      FUN_004fafcc();
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
      _objc_retainAutoreleasedReturnValue();
      local_160 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_160 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_160;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_80;
      local_88 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      if ((pcVar2 == (cfstringStruct *)0x0) || ((long)local_88 < 1)) {
        local_50 = 1;
      }
      else {
        pcVar4 = "MMServiceCenter";
        _objc_getClass(local_88);
        local_90 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          local_50 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          local_98 = pcVar4;
          if (pcVar4 == (char *)0x0) {
            local_50 = 1;
          }
          else {
            pcVar4 = "CMessageMgr";
            _objc_getClass();
            local_a0 = pcVar4;
            if (pcVar4 == (char *)0x0) {
              local_50 = 1;
            }
            else {
              pcVar5 = local_98;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_98,PTR_s_performSelector_withObject__026ca7c0,
                         PTR_s_getService__0269d170,pcVar4);
              _objc_retainAutoreleasedReturnValue();
              local_a8 = pcVar5;
              if (pcVar5 == (char *)0x0) {
                local_50 = 1;
              }
              else {
                FUN_004fb568(pcVar5,local_80,local_88);
                _objc_retainAutoreleasedReturnValue();
                local_b0 = pcVar5;
                if (pcVar5 != (char *)0x0) {
                  FUN_004fb7a4(local_28,pcVar5);
                }
                local_50 = 1;
                _objc_storeStrong(&local_b0,0);
              }
              _objc_storeStrong(&local_a8,0);
            }
          }
          _objc_storeStrong(&local_98,0);
        }
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
    }
LAB_004f0974:
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_58,0);
LAB_004f09a4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

