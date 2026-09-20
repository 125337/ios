// FUN_01590fec @ 01590fec

void FUN_01590fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_198;
  undefined *local_158;
  cfstringStruct *local_f0;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  ulong local_c8;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  int local_80;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ulong local_50;
  long local_48;
  long local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_c8 = 0;
  }
  else {
    local_c8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
  }
  local_50 = local_c8;
  lVar7 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_61 = 0;
  if (lVar7 == 0) {
    local_e0 = &cf___;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = 1;
    local_d8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_d8 = &cf___;
    }
    local_e0 = local_d8;
    local_60 = pcVar4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_e0;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  pcVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  local_79 = false;
  bVar1 = pcVar4 < (cfstringStruct *)((long)&section_00000108.addr + 5);
  if (bVar1) {
    local_f0 = local_58;
  }
  else {
    local_f0 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringToIndex__0269d6c0,300);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_f0;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_f0;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (local_40 == 0) {
    if ((long)local_50 < 400) {
      lVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (lVar7 == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                  (*(long *)(param_1 + 0x28),0,&cf___j1Y_gRzVzzT_);
        local_80 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                   PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_90 = 0;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_88 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)puVar2 & 1) != 0) {
          puVar2 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf__id);
          _objc_retainAutoreleasedReturnValue();
          local_158 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_98 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_158 = local_98;
          }
          _objc_storeStrong(&local_90,local_158);
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        lVar6 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
        lVar7 = local_90;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (lVar6 == 0) {
          lVar7 = *(long *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf___jeV);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar7 + 0x10))(lVar7,0);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_80 = 1;
        }
        else {
          uVar8 = *(undefined8 *)(param_1 + 0x30);
          lVar6 = *(long *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
          if (lVar6 == 0) {
            local_198 = &cf_r;
          }
          else {
            local_198 = *(cfstringStruct **)(param_1 + 0x20);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_addModelId_name__026b0a40,lVar7,local_198);
          (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_90,0);
          local_80 = 0;
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf___j1Y_);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar7 + 0x10))(lVar7,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_80 = 1;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    lVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_Q___);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(lVar7);
    local_80 = 1;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_58,0);
  if (local_80 == 0) {
    local_80 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

