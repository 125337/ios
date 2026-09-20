// FUN_015a6e14 @ 015a6e14

void FUN_015a6e14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  dispatch_time_t dVar6;
  dispatch_queue_t pdVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_140;
  undefined1 *local_128;
  ulong local_120;
  cfstringStruct *local_110;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined1 *local_78;
  bool local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  ulong local_58;
  uint local_4c;
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
  uVar4 = local_38;
  local_48 = param_1;
  if (local_40 == (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) == 0) {
      local_120 = 0;
    }
    else {
      local_120 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
    }
    local_58 = local_120;
    lVar10 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_69 = false;
    if (lVar10 == 0) {
      local_128 = (undefined1 *)0x0;
    }
    else {
      local_128 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_128;
    }
    local_69 = lVar10 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_128;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar5 = local_60;
    if ((long)local_58 < 400) {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar5 & 1) == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,&cf_F);
        local_4c = 1;
      }
      else {
        puVar5 = local_60;
        FUN_015a6418();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
        bVar1 = puVar5 < (undefined1 *)((long)&MACH_HEADER.cputype + 2);
        if (bVar1) {
          dVar6 = _dispatch_time(0,2000000000);
          pdVar7 = _dispatch_get_global_queue(0,0);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = PTR___NSConcreteStackBlock_02578660;
          local_d8 = 0xc2000000;
          local_d4 = 0;
          local_d0 = FUN_015a7424;
          local_c8 = &DAT_02582be8;
          local_b0 = *(undefined8 *)(param_1 + 0x30);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_retain_02578638)();
          local_a8 = *(undefined8 *)(param_1 + 0x38);
          uVar9 = *(undefined8 *)(param_1 + 0x28);
          local_c0 = uVar8;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = uVar9;
          _dispatch_after(dVar6,pdVar7,&local_e0);
          (*(code *)PTR__objc_release_02578630)(pdVar7);
          _objc_storeStrong(&local_b8);
          _objc_storeStrong(&local_c0,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x30),PTR_s_wcr_downloadFineVoiceAudioURL_ca_026b0b70
                     ,local_a0,0,*(undefined8 *)(param_1 + 0x28));
        }
        local_4c = (uint)!bVar1;
        _objc_storeStrong(&local_a0,0);
      }
    }
    else {
      FUN_015a6008(local_58 - 400);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_1 + 0x28);
      local_78 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      local_81 = 0;
      local_91 = 0;
      local_140 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar5 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_gNR1Y_);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_140;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_gNR1Y_);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_140;
      }
      (**(code **)(lVar10 + 0x10))(lVar10,0,local_140);
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
    lVar10 = *(long *)(param_1 + 0x28);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_110 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_110 = &cf_Q__;
    }
    (**(code **)(lVar10 + 0x10))(lVar10,0,local_110);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

