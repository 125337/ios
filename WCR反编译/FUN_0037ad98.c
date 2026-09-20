// FUN_0037ad98 @ 0037ad98

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0037ad98(double param_1,undefined8 param_2,undefined8 param_3,cfstringStruct *param_4)

{
  double dVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  dispatch_time_t dVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  uint local_434;
  cfstringStruct *local_3d8;
  cfstringStruct *local_3b8;
  cfstringStruct *local_3a0;
  cfstringStruct *local_380;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  double local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  undefined8 local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  double local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_4;
  if (local_28 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    pcVar5 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    if (param_4 == pcVar3) {
      pcVar5 = local_28;
      FUN_003adbe4();
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_28;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_28;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_28;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        local_3c = 1;
      }
      else {
        pcVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_findMainTableView_026a2848)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          pcVar5 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar5 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar5 = local_28;
          _WCRGroupingState();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          local_3c = 1;
        }
        else {
          pcVar2 = local_28;
          FUN_003788e8(local_28,pcVar5);
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar5 = local_48;
            FUN_00364dd0();
            if (((ulong)pcVar5 & 1) == 0) {
              _CACurrentMediaTime();
              pcVar5 = local_28;
              local_88 = param_1;
              _WCRGroupingState();
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_90 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              dVar1 = local_88;
              if (local_90 == (cfstringStruct *)0x0) {
                puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_88,PTR__OBJC_CLASS___NSNumber_026ce038,
                           PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = local_28;
                _WCRGroupingState();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                dVar4 = _dispatch_time(0,1000000000);
                puVar7 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = local_28;
                local_c8 = PTR___NSConcreteStackBlock_02578660;
                local_c0 = 0xc2000000;
                local_bc = 0;
                local_b8 = FUN_003d1dcc;
                local_b0 = &DAT_0257a740;
                (*(code *)PTR__objc_retain_02578638)();
                uVar6 = local_30;
                local_a8 = pcVar5;
                (*(code *)PTR__objc_retain_02578638)();
                local_a0 = uVar6;
                local_98 = local_38;
                _dispatch_after(dVar4,puVar7,&local_c8);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                local_3c = 1;
                _objc_storeStrong(&local_a0);
                _objc_storeStrong(&local_a8,0);
              }
              else {
                dVar8 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_doubleValue_026ca608);
                local_d0 = dVar1 - dVar8;
                if (1.0 <= local_d0) {
                  pcVar5 = local_28;
                  _WCRGroupingState();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  pcVar5 = local_28;
                  _WCRGroupingState();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  pcVar5 = local_28;
                  _WCRGroupingState();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  pcVar5 = local_28;
                  _WCRGroupingState();
                  _objc_retainAutoreleasedReturnValue();
                  pcVar2 = pcVar5;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  if (((ulong)pcVar3 & 1) == 0) {
                    FUN_003736ec(local_28);
                    local_118 = (cfstringStruct *)0x0;
                    local_120 = PTR_s_wcrGrouping_snapshotForTableView_026a2a50;
                    pcVar5 = local_28;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_28,PTR_s_respondsToSelector__026ca818,
                               PTR_s_wcrGrouping_snapshotForTableView_026a2a50);
                    if (((ulong)pcVar5 & 1) != 0) {
                      pcVar2 = local_28;
                      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_120,local_48);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar5 = local_118;
                      local_118 = pcVar2;
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                    }
                    pcVar5 = local_118;
                    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_displaySignature_026a2878)
                    ;
                    _objc_retainAutoreleasedReturnValue();
                    local_380 = pcVar5;
                    if (pcVar5 == (cfstringStruct *)0x0) {
                      local_380 = &cf___;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_128 = local_380;
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    pcVar5 = local_28;
                    _WCRGroupingState();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar2 = pcVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_3a0 = pcVar2;
                    if (pcVar2 == (cfstringStruct *)0x0) {
                      local_3a0 = &cf___;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_130 = local_3a0;
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    pcVar5 = local_118;
                    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_layoutSignature_026a2868);
                    _objc_retainAutoreleasedReturnValue();
                    local_3b8 = pcVar5;
                    if (pcVar5 == (cfstringStruct *)0x0) {
                      local_3b8 = &cf___;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_138 = local_3b8;
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    pcVar5 = local_28;
                    _WCRGroupingState();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar2 = pcVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_3d8 = pcVar2;
                    if (pcVar2 == (cfstringStruct *)0x0) {
                      local_3d8 = &cf___;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_140 = local_3d8;
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    pcVar5 = local_128;
                    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
                    if (((((pcVar5 == (cfstringStruct *)0x0) || (local_118 == (cfstringStruct *)0x0)
                          ) || (pcVar5 = local_118,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_118,PTR_s_budgetFallback_026a25d8),
                               ((ulong)pcVar5 & 1) != 0)) ||
                        ((pcVar5 = local_128,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_128,PTR_s_isEqualToString__0269ccc8,local_130),
                         ((ulong)pcVar5 & 1) == 0 ||
                         (pcVar5 = local_138,
                         (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
                         pcVar5 == (cfstringStruct *)0x0)))) ||
                       (pcVar5 = local_138,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_138,PTR_s_isEqualToString__0269ccc8,local_140),
                       puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038, ((ulong)pcVar5 & 1) == 0)) {
                      _CACurrentMediaTime();
                      pcVar5 = local_138;
                      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
                      local_434 = 0;
                      if (pcVar5 != (cfstringStruct *)0x0) {
                        pcVar5 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_138,PTR_s_isEqualToString__0269ccc8,local_140);
                        local_434 = (uint)pcVar5;
                      }
                      if ((local_434 & 1) == 0) {
                        FUN_0037d3b4(local_28,local_48);
                      }
                      else {
                        FUN_0037cee8(local_28,local_48);
                      }
                      pcVar5 = local_128;
                      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
                      if (((pcVar5 != (cfstringStruct *)0x0) && (local_118 != (cfstringStruct *)0x0)
                          ) && (pcVar5 = local_118,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_118,PTR_s_budgetFallback_026a25d8),
                               ((ulong)pcVar5 & 1) == 0)) {
                        pcVar5 = local_28;
                        _WCRGroupingState();
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(pcVar5);
                        pcVar5 = local_28;
                        _WCRGroupingState();
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(pcVar5);
                      }
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      _CACurrentMediaTime();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      pcVar5 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      pcVar5 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,
                                 PTR_s_numberWithUnsignedInteger__0269e4d0,
                                 (undefined1 *)((long)&local_38->field0_0x0 + 1));
                      _objc_retainAutoreleasedReturnValue();
                      pcVar5 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      local_3c = 0;
                    }
                    else {
                      _CACurrentMediaTime();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      pcVar5 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      _CACurrentMediaTime();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      pcVar5 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      pcVar5 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,
                                 PTR_s_numberWithUnsignedInteger__0269e4d0,
                                 (undefined1 *)((long)&local_38->field0_0x0 + 1));
                      _objc_retainAutoreleasedReturnValue();
                      pcVar5 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      (*(code *)PTR__objc_release_02578630)(puVar7);
                      local_3c = 1;
                    }
                    _objc_storeStrong(&local_140);
                    _objc_storeStrong(&local_138,0);
                    _objc_storeStrong(&local_130,0);
                    _objc_storeStrong(&local_128,0);
                    _objc_storeStrong(&local_118,0);
                  }
                  else {
                    FUN_0037c2b0(local_28);
                    pcVar5 = local_28;
                    _WCRGroupingState();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar2 = pcVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_110 = pcVar2;
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    if ((local_110 != (cfstringStruct *)0x0) &&
                       (pcVar5 = local_110,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_110,PTR_s_budgetFallback_026a25d8), ((ulong)pcVar5 & 1) == 0
                       )) {
                      pcVar5 = local_110;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_110,PTR_s_displaySignature_026a2878);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                      pcVar5 = local_110;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_110,PTR_s_layoutSignature_026a2868);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar2 = local_28;
                      _WCRGroupingState();
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                    }
                    local_3c = 1;
                    _objc_storeStrong(&local_110,0);
                  }
                }
                else {
                  dVar4 = _dispatch_time(0,(long)((1.0 - local_d0) * 1000000000.0));
                  puVar7 = PTR___dispatch_main_q_02578680;
                  _objc_retainAutoreleaseReturnValue();
                  _objc_retainAutoreleasedReturnValue();
                  local_108 = PTR___NSConcreteStackBlock_02578660;
                  local_100 = 0xc2000000;
                  local_fc = 0;
                  local_f8 = FUN_003d1e08;
                  local_f0 = &DAT_0257a740;
                  pcVar5 = local_28;
                  (*(code *)PTR__objc_retain_02578638)();
                  uVar6 = local_30;
                  local_e8 = pcVar5;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_d8 = local_38;
                  local_e0 = uVar6;
                  _dispatch_after(dVar4,puVar7,&local_108);
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                  local_3c = 1;
                  _objc_storeStrong(&local_e0);
                  _objc_storeStrong(&local_e8,0);
                }
              }
              _objc_storeStrong(&local_90,0);
            }
            else {
              pcVar5 = local_28;
              _WCRGroupingState();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              dVar4 = _dispatch_time(0,350000000);
              puVar7 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = local_28;
              local_80 = PTR___NSConcreteStackBlock_02578660;
              local_78 = 0xc2000000;
              local_74 = 0;
              local_70 = FUN_003d1d90;
              local_68 = &DAT_0257a740;
              (*(code *)PTR__objc_retain_02578638)();
              uVar6 = local_30;
              local_60 = pcVar5;
              (*(code *)PTR__objc_retain_02578638)();
              local_58 = uVar6;
              local_50 = local_38;
              _dispatch_after(dVar4,puVar7,&local_80);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              local_3c = 1;
              _objc_storeStrong(&local_58,0);
              _objc_storeStrong(&local_60,0);
            }
          }
          else {
            FUN_0037aadc(local_28,local_48);
            pcVar5 = local_28;
            _WCRGroupingState();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_28;
            _WCRGroupingState();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_28;
            _WCRGroupingState();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            local_3c = 1;
          }
        }
        _objc_storeStrong(&local_48,0);
      }
    }
    else {
      pcVar5 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_28;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

