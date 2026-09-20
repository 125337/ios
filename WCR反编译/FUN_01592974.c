// FUN_01592974 @ 01592974

void FUN_01592974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_158;
  cfstringStruct *local_138;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_d8;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  int local_4c;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = param_1;
  if ((local_40 == (cfstringStruct *)0x0) &&
     (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar3 != (cfstringStruct *)0x0)) {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_58 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_69 = 0;
    local_79 = 0;
    if (((ulong)pcVar3 & 1) == 0) {
      local_f8 = (cfstringStruct *)0x0;
    }
    else {
      local_f0 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_uri);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_f0;
      if (local_f0 == (cfstringStruct *)0x0) {
        local_f0 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_voice);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = local_f0;
      }
      local_f8 = local_f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_f8;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    pcVar6 = local_58;
    pcVar3 = local_60;
    if (pcVar5 == (cfstringStruct *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar2 = false;
      bVar1 = false;
      if (((ulong)pcVar6 & 1) == 0) {
        local_120 = (cfstringStruct *)0x0;
      }
      else {
        local_90 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar1 = local_90 == (cfstringStruct *)0x0;
        local_118 = local_90;
        if (bVar1) {
          local_a0 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_error);
          _objc_retainAutoreleasedReturnValue();
          local_118 = local_a0;
        }
        local_120 = local_118;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_120;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      lVar7 = *(long *)(param_1 + 0x28);
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_138 = &cf_Y_ReV;
      }
      else {
        local_138 = local_88;
      }
      (**(code **)(lVar7 + 0x10))(lVar7,0,local_138);
      local_4c = 1;
      _objc_storeStrong(&local_88,0);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      lVar7 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
      if (lVar7 == 0) {
        local_158 = &cf_r;
      }
      else {
        local_158 = *(cfstringStruct **)(param_1 + 0x20);
      }
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_addModelId_name__026b0a40,pcVar3,local_158);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_60,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_d8 = &cf_Q__;
    }
    (**(code **)(lVar7 + 0x10))(lVar7,0,local_d8);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

