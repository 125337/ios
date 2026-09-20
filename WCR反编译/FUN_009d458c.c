// FUN_009d458c @ 009d458c

void FUN_009d458c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  dispatch_time_t dVar7;
  dispatch_queue_t pdVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  cfstringStruct *local_228;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_198;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  cfstringStruct *local_150;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
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
  int local_4c;
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
      local_150 = (cfstringStruct *)0x0;
    }
    else {
      local_150 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_150;
    }
    local_69 = lVar4 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_150;
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
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 0;
      local_198 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        pcVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_status);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_1a8 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_1a8 = &cf___;
        }
        local_198 = local_1a8;
        local_a8 = pcVar6;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_198;
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_description_026ca5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_60;
      FUN_009d50a8();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
      if (((pcVar5 == (cfstringStruct *)0x0) &&
          (pcVar5 = local_b8,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_isEqualToString__0269ccc8,&cf_completed),
          ((ulong)pcVar5 & 1) == 0)) &&
         ((pcVar5 = local_b8,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_isEqualToString__0269ccc8,&cf_succeed), ((ulong)pcVar5 & 1) == 0
          && ((pcVar5 = local_b8,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_isEqualToString__0269ccc8,&cf_succeeded),
              ((ulong)pcVar5 & 1) == 0 &&
              (pcVar5 = local_b8,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_isEqualToString__0269ccc8,&cf_done),
              ((ulong)pcVar5 & 1) == 0)))))) {
        pcVar5 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,&cf_failed);
        if ((((ulong)pcVar5 & 1) == 0) &&
           (pcVar5 = local_b8,
           (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,&cf_error)
           , ((ulong)pcVar5 & 1) == 0)) {
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          pcVar5 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_228 = &cf_generating;
          }
          else {
            local_228 = local_b8;
          }
          FUN_009d279c(uVar9,local_228,*(undefined8 *)(param_1 + 0x50),
                       *(undefined8 *)(param_1 + 0x48));
          dVar7 = _dispatch_time(0,5000000000);
          pdVar8 = _dispatch_get_global_queue(0x11,0);
          _objc_retainAutoreleasedReturnValue();
          local_130 = PTR___NSConcreteStackBlock_02578660;
          local_128 = 0xc2000000;
          local_124 = 0;
          local_120 = FUN_009d5c4c;
          local_118 = &DAT_02581608;
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_retain_02578638)();
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          local_110 = uVar9;
          (*(code *)PTR__objc_retain_02578638)();
          uVar9 = *(undefined8 *)(param_1 + 0x30);
          local_108 = uVar10;
          (*(code *)PTR__objc_retain_02578638)();
          uVar10 = *(undefined8 *)(param_1 + 0x38);
          local_100 = uVar9;
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = *(undefined8 *)(param_1 + 0x50);
          uVar9 = *(undefined8 *)(param_1 + 0x48);
          local_f8 = uVar10;
          (*(code *)PTR__objc_retain_02578638)();
          uVar10 = *(undefined8 *)(param_1 + 0x40);
          local_f0 = uVar9;
          (*(code *)PTR__objc_retain_02578638)();
          local_e8 = uVar10;
          _dispatch_after(dVar7,pdVar8,&local_130);
          (*(code *)PTR__objc_release_02578630)(pdVar8);
          _objc_storeStrong(&local_e8);
          _objc_storeStrong(&local_f0,0);
          _objc_storeStrong(&local_f8,0);
          _objc_storeStrong(&local_100,0);
          _objc_storeStrong(&local_108,0);
          _objc_storeStrong(&local_110,0);
          local_4c = 0;
        }
        else {
          pcVar5 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_failure_reason);
          _objc_retainAutoreleasedReturnValue();
          local_d1 = 0;
          local_1e0 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            pcVar6 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_reason);
            _objc_retainAutoreleasedReturnValue();
            local_d1 = 1;
            local_1f0 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_1f0 = &cf_ub1Y_;
            }
            local_1e0 = local_1f0;
            local_d0 = pcVar6;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_description_026ca5f8);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = local_1e0;
          if ((local_d1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_d0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          uVar9 = *(undefined8 *)(param_1 + 0x40);
          pcVar5 = local_c8;
          FUN_009c701c(local_c8,0xfffffffffffffffe);
          _objc_retainAutoreleasedReturnValue();
          FUN_009d255c(uVar10,uVar9);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          local_4c = 1;
          _objc_storeStrong(&local_c8,0);
        }
      }
      else {
        pcVar5 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
        if (pcVar5 == (cfstringStruct *)0x0) {
          uVar2 = *(ulong *)(param_1 + 0x28);
          FUN_009d1488();
          if ((uVar2 & 1) == 0) {
            uVar10 = *(undefined8 *)(param_1 + 0x20);
            uVar9 = *(undefined8 *)(param_1 + 0x40);
            pcVar5 = &cf___bFO___N_0W_W;
            FUN_009c701c(&cf___bFO___N_0W_W,0xfffffffffffffffe);
            _objc_retainAutoreleasedReturnValue();
            FUN_009d255c(uVar10,uVar9,0);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
          else {
            FUN_009d279c(*(undefined8 *)(param_1 + 0x20),&cf_downloading,
                         *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
            FUN_009d5958(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                         *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                         *(undefined8 *)(param_1 + 0x40));
          }
        }
        else {
          FUN_009d279c(*(undefined8 *)(param_1 + 0x20),&cf_downloading,
                       *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
          FUN_009d5804(*(undefined8 *)(param_1 + 0x20),local_c0,*(undefined8 *)(param_1 + 0x40));
        }
        local_4c = 1;
      }
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      local_81 = 0;
      local_91 = 0;
      if (local_40 == (cfstringStruct *)0x0) {
        bVar1 = local_78 == (cfstringStruct *)0x0;
        if (bVar1) {
          local_188 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_HTTP_ld);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_188;
        }
        else {
          local_188 = local_78;
        }
        local_81 = bVar1;
        FUN_009c701c(local_188,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_178 = local_188;
        local_90 = local_188;
      }
      else {
        local_178 = local_40;
      }
      FUN_009d255c(uVar10,uVar9,0,local_178);
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

