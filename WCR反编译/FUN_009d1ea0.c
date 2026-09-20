// FUN_009d1ea0 @ 009d1ea0

void FUN_009d1ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_140;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_f8;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  long local_58;
  uint local_4c;
  long local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_finished_026a15b0);
  if ((uVar2 & 1) == 0) {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
    lVar4 = local_30;
    local_58 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_69 = false;
    if (lVar4 == 0) {
      local_f8 = (cfstringStruct *)0x0;
    }
    else {
      local_f8 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_f8;
    }
    local_69 = lVar4 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_f8;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar5 = local_60;
    FUN_009c6c6c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar5;
    if ((((local_40 == (cfstringStruct *)0x0) && (199 < local_58)) && (local_58 < 300)) &&
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0),
       pcVar5 == (cfstringStruct *)0x0)) {
      pcVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 0;
      local_b9 = 0;
      local_c9 = 0;
      local_140 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_150 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_request_id);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_150;
        if (local_150 == (cfstringStruct *)0x0) {
          local_160 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_requestId);
          _objc_retainAutoreleasedReturnValue();
          local_b9 = 1;
          local_b8 = local_160;
          if (local_160 == (cfstringStruct *)0x0) {
            pcVar6 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_task_id);
            _objc_retainAutoreleasedReturnValue();
            local_c9 = 1;
            local_170 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_170 = &cf___;
            }
            local_160 = local_170;
            local_c8 = pcVar6;
          }
          local_150 = local_160;
        }
        local_140 = local_150;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_140;
      if ((local_c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      if ((local_b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_description_026ca5f8);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
      if (pcVar5 != (cfstringStruct *)0x0) {
        FUN_009d279c(*(undefined8 *)(param_1 + 0x20),&cf_submitted,0xffffffffffffffff,
                     *(undefined8 *)(param_1 + 0x40));
        FUN_009d2b74(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x30),local_d8,0,*(undefined8 *)(param_1 + 0x40),
                     *(undefined8 *)(param_1 + 0x38));
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        pcVar6 = &cf_NR___;
        FUN_009c701c(&cf_NR___,0xfffffffffffffffe);
        _objc_retainAutoreleasedReturnValue();
        FUN_009d255c(uVar8,uVar7,0);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      local_4c = (uint)(pcVar5 == (cfstringStruct *)0x0);
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      local_81 = 0;
      local_91 = 0;
      if (local_40 == (cfstringStruct *)0x0) {
        bVar1 = local_78 == (cfstringStruct *)0x0;
        if (bVar1) {
          local_130 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_HTTP_ld);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_130;
        }
        else {
          local_130 = local_78;
        }
        local_81 = bVar1;
        FUN_009c701c(local_130,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_120 = local_130;
        local_90 = local_130;
      }
      else {
        local_120 = local_40;
      }
      FUN_009d255c(uVar8,uVar7,0,local_120);
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      local_4c = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

