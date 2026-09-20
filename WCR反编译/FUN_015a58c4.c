// FUN_015a58c4 @ 015a58c4

void FUN_015a58c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_160;
  undefined *local_140;
  cfstringStruct *local_128;
  ulong local_120;
  cfstringStruct *local_110;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  ulong local_58;
  int local_4c;
  long local_48;
  cfstringStruct *local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_38;
  local_48 = param_1;
  if (local_40 == (cfstringStruct *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_120 = 0;
    }
    else {
      local_120 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
    }
    local_58 = local_120;
    lVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_69 = false;
    if (lVar7 == 0) {
      local_128 = (cfstringStruct *)0x0;
    }
    else {
      local_128 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_128;
    }
    local_69 = lVar7 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_128;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar3 = local_60;
    if ((long)local_58 < 400) {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar3 & 1) == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,&cf_F);
        local_4c = 1;
      }
      else {
        pcVar3 = local_60;
        FUN_015a6418();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
        if (pcVar3 < (cfstringStruct *)((long)&MACH_HEADER.cputype + 2)) {
          pcVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_uuid);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          FUN_015a4bf8();
          _objc_retainAutoreleasedReturnValue();
          local_a8 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
          if (pcVar3 < (cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 3)) {
            pcVar4 = local_60;
            FUN_015a66b0((undefined1 *)((long)&pcVar3[-1].field2_0x10 + 5));
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_a8;
            local_a8 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          pcVar4 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
          pcVar3 = local_a8;
          if ((cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 2) < pcVar4) {
            uVar8 = *(undefined8 *)(param_1 + 0x30);
            local_e0 = PTR___NSConcreteStackBlock_02578660;
            local_d8 = 0xc2000000;
            local_d4 = 0;
            local_d0 = FUN_015a6860;
            local_c8 = &DAT_02586e08;
            uVar5 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_retain_02578638)();
            uVar6 = *(undefined8 *)(param_1 + 0x28);
            local_c0 = uVar5;
            (*(code *)PTR__objc_retain_02578638)();
            local_b8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_wcr_pollFineVoiceTask_attempt_fi_026b0b78,pcVar3,0,&local_e0);
            _objc_storeStrong(&local_b8);
            _objc_storeStrong(&local_c0,0);
            local_4c = 0;
          }
          else {
            pcVar3 = local_60;
            FUN_015a6008((undefined1 *)((long)&pcVar4[-1].field2_0x10 + 5));
            _objc_retainAutoreleasedReturnValue();
            lVar7 = *(long *)(param_1 + 0x28);
            local_b0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_160 = &cf_0F;
            }
            else {
              local_160 = local_b0;
            }
            (**(code **)(lVar7 + 0x10))(lVar7,0,local_160);
            local_4c = 1;
            _objc_storeStrong(&local_b0,0);
          }
          _objc_storeStrong(&local_a8,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x30),PTR_s_wcr_downloadFineVoiceAudioURL_ca_026b0b70
                     ,local_a0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
          local_4c = 1;
        }
        _objc_storeStrong(&local_a0,0);
      }
    }
    else {
      FUN_015a6008(local_58 - 400);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x28);
      local_78 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
      local_81 = 0;
      local_91 = 0;
      local_140 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (pcVar3 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Tb1Y_);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_140;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Tb1Y_);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_140;
      }
      (**(code **)(lVar7 + 0x10))(lVar7,0,local_140);
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      local_4c = 1;
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_60,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_110 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_110 = &cf_Q__;
    }
    (**(code **)(lVar7 + 0x10))(lVar7,0,local_110);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

