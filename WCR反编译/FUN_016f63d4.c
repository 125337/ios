// FUN_016f63d4 @ 016f63d4

void FUN_016f63d4(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  ulong uVar11;
  long lVar12;
  cfstringStruct *local_268;
  cfstringStruct *local_250;
  cfstringStruct *local_240;
  cfstringStruct *local_228;
  cfstringStruct *local_1a8;
  cfstringStruct *local_190;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_130;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  undefined4 local_e0;
  bool local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  long local_80;
  long local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = param_1;
  local_70 = param_1;
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar12 = *(long *)(param_1 + 0x38);
      pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_130 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_130 = &cf_Q__;
      }
      (**(code **)(lVar12 + 0x10))(lVar12,0,local_130,0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    goto LAB_016f7084;
  }
  local_80 = 0;
  uVar11 = *(ulong *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar11 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_statusCode_026a1578);
    local_80 = lVar12;
  }
  uVar11 = *(ulong *)(param_1 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_91 = 0;
  if ((uVar11 & 1) == 0) {
LAB_016f6628:
    local_158 = &cf___;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_length_0269cca0);
    if (lVar12 == 0) goto LAB_016f6628;
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_91 = 1;
    local_150 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_150 = &cf___;
    }
    local_158 = local_150;
    local_90 = pcVar2;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_158;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  local_a0 = (cfstringStruct *)0x0;
  uVar11 = *(ulong *)(param_1 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar11 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_length_0269cca0);
    if (lVar12 != 0) {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,*(undefined8 *)(param_1 + 0x30),0,0
                );
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_a0;
      local_a0 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  pcVar2 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  pcVar4 = local_a0;
  if (((ulong)pcVar2 & 1) == 0) {
    if (local_80 == 200) {
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar12 = *(long *)(param_1 + 0x38);
        pcVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_268 = &cf_gRhVeT_;
        }
        else {
          local_268 = local_88;
        }
        (**(code **)(lVar12 + 0x10))(lVar12,0,local_268,0);
      }
      local_e0 = 0;
    }
    else {
      pcVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_250 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Bl1Y_H);
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_250;
      }
      else {
        local_250 = local_88;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_250;
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,local_f8,0);
      }
      local_e0 = 1;
      _objc_storeStrong(&local_f8,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_a8;
    local_b0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_errorMessage);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_c1 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_190 = (cfstringStruct *)0x0;
    }
    else {
      local_190 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_errorMessage);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_190;
    }
    local_c1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_190;
    if ((local_c1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_d9 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_1a8 = (cfstringStruct *)0x0;
    }
    else {
      local_1a8 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_1a8;
    }
    local_d9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_1a8;
    if ((local_d9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    pcVar2 = local_b0;
    if (pcVar4 == (cfstringStruct *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      pcVar4 = local_b0;
      if (((ulong)pcVar2 & 1) == 0) {
        if ((local_80 == 200) &&
           (pcVar2 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0)
           , pcVar2 != (cfstringStruct *)0x0)) {
          if (*(long *)(param_1 + 0x38) != 0) {
            (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1,local_d0,0);
          }
          local_e0 = 1;
        }
        else {
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar12 = *(long *)(param_1 + 0x38);
            pcVar2 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_240 = &cf_QQbc1Y_zTQ;
            }
            else {
              local_240 = local_d0;
            }
            (**(code **)(lVar12 + 0x10))(lVar12,0,local_240,0);
          }
          local_e0 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = pcVar4;
        local_68 = &cf_themeName;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar4;
        FUN_016f70b4();
        _objc_retainAutoreleasedReturnValue();
        local_60 = &cf_remark;
        pcVar5 = local_e8;
        local_48 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        FUN_016f70b4();
        _objc_retainAutoreleasedReturnValue();
        local_58 = &cf_downloadLink;
        pcVar7 = local_e8;
        local_40 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar7;
        FUN_016f70b4();
        _objc_retainAutoreleasedReturnValue();
        local_50 = &cf_downloadPassword;
        pcVar9 = local_e8;
        local_38 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = pcVar9;
        FUN_016f70b4();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar12 = *(long *)(param_1 + 0x38);
          pcVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_228 = &cf_mRbR;
          }
          else {
            local_228 = local_d0;
          }
          (**(code **)(lVar12 + 0x10))(lVar12,1,local_228,local_f0);
        }
        local_e0 = 1;
        _objc_storeStrong(&local_f0);
        _objc_storeStrong(&local_e8,0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,local_b8,0);
      }
      local_e0 = 1;
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_88,0);
LAB_016f7084:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

