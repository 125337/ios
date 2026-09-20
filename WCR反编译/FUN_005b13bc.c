// FUN_005b13bc @ 005b13bc

void FUN_005b13bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *local_c60;
  undefined *local_c58;
  undefined *local_c20;
  undefined *local_c18;
  undefined *local_ba0;
  undefined *local_b98;
  undefined *local_b60;
  undefined *local_b58;
  undefined *local_ae0;
  undefined *local_ad8;
  undefined *local_aa0;
  undefined *local_a98;
  undefined *local_a10;
  undefined *local_a08;
  undefined *local_9d0;
  undefined *local_9c8;
  ulong local_910;
  ulong local_908;
  long local_8c0;
  ulong local_8b8;
  char *local_8b0;
  cfstringStruct *local_8a8;
  char *local_8a0;
  cfstringStruct *local_898;
  cfstringStruct *local_890;
  ulong local_888;
  char *local_880;
  cfstringStruct *local_878;
  undefined *local_870;
  char *local_868;
  ulong local_860;
  undefined1 auStack_858 [8];
  long local_850;
  long *local_848;
  undefined8 local_818;
  undefined1 auStack_810 [8];
  long local_808;
  long *local_800;
  undefined8 local_7d0;
  ulong local_7c8;
  cfstringStruct *local_7c0;
  ulong local_7b8;
  undefined1 auStack_7b0 [8];
  long local_7a8;
  long *local_7a0;
  undefined8 local_770;
  undefined1 auStack_768 [8];
  long local_760;
  long *local_758;
  undefined8 local_728;
  ulong local_720;
  cfstringStruct *local_718;
  ulong local_710;
  undefined1 auStack_708 [8];
  long local_700;
  long *local_6f8;
  undefined8 local_6c8;
  undefined1 auStack_6c0 [8];
  long local_6b8;
  long *local_6b0;
  undefined8 local_680;
  ulong local_678;
  cfstringStruct *local_670;
  undefined *local_668;
  undefined *local_660;
  ulong local_658;
  undefined1 auStack_650 [8];
  long local_648;
  long *local_640;
  undefined8 local_610;
  undefined1 auStack_608 [8];
  long local_600;
  long *local_5f8;
  undefined8 local_5c8;
  undefined *local_5c0;
  undefined *local_5b8;
  undefined *local_5b0;
  byte local_5a1;
  cfstringStruct *local_5a0;
  cfstringStruct *local_598;
  ulong local_590;
  ulong local_588;
  int local_57c;
  long local_578;
  undefined1 auStack_570 [8];
  long local_568;
  long *local_560;
  long local_530;
  ulong local_528;
  ulong local_520 [3];
  ulong local_508;
  ulong local_500;
  undefined8 local_4f8;
  long local_4f0;
  undefined1 auStack_4e8 [128];
  undefined1 auStack_468 [128];
  undefined1 auStack_3e8 [128];
  undefined1 auStack_368 [128];
  undefined1 auStack_2e8 [128];
  undefined1 auStack_268 [128];
  undefined1 auStack_1e8 [128];
  undefined1 auStack_168 [128];
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_500 = 0;
  local_4f8 = param_2;
  local_4f0 = param_1;
  _objc_storeStrong(&local_500,param_3);
  uVar2 = local_500;
  (*(code *)PTR__objc_msgSend_02578628)(local_500,PTR_s_valueForKey__0269d128,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  local_508 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf_mediaList);
  _objc_retainAutoreleasedReturnValue();
  local_528 = 0;
  local_520[0] = uVar2;
  _memset(auStack_570,0,0x40);
  uVar2 = local_520[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_908 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_570,auStack_a8,0x10);
  if (local_908 != 0) {
    lVar10 = *local_560;
    local_910 = 0;
    do {
      do {
        if (*local_560 - lVar10 != 0) {
          _objc_enumerationMutation(*local_560 - lVar10,uVar2);
        }
        lVar11 = *(long *)(local_568 + local_910 * 8);
        local_530 = lVar11;
        (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_valueForKey__0269d128,&cf_type);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar11);
        local_578 = lVar12;
        if ((lVar12 == 2) || (lVar12 == 5)) {
          _objc_storeStrong(0,&local_528,local_530);
          local_57c = 3;
          goto LAB_005b16a0;
        }
        local_910 = local_910 + 1;
      } while (local_910 < local_908);
      local_908 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_570,auStack_a8,0x10);
      local_910 = 0;
    } while (local_908 != 0);
  }
  local_57c = 0;
LAB_005b16a0:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_528 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R);
    local_57c = 1;
  }
  else {
    uVar2 = local_528;
    (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_valueForKey__0269d128,&cf_type);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_590 = 0;
    local_588 = uVar3;
    if (uVar3 == 2) {
      pcVar4 = &cf_pathForSightData;
      _NSSelectorFromString(0);
      uVar2 = local_528;
      local_598 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_528;
        (*(code *)PTR__objc_msgSend_02578628)(local_528,local_598);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_590;
        local_590 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    else if (uVar3 == 5) {
      pcVar4 = &cf_pathForData;
      _NSSelectorFromString(0);
      uVar2 = local_528;
      local_5a0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_528;
        (*(code *)PTR__objc_msgSend_02578628)(local_528,local_5a0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_590;
        local_590 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    local_5a1 = 0;
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = &cf__mp4;
    local_c0 = &cf__mov;
    local_b8 = &cf__m4v;
    local_b0 = &cf___;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_5b0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_e8 = &cf__1_temp;
    local_e0 = &cf__2_temp;
    local_d8 = &cf__temp;
    local_d0 = &cf___;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_5b8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_5c0 = puVar5;
    if (local_590 != 0) {
      _memset(auStack_608,0,0x40);
      puVar5 = local_5c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_9c8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_608,auStack_168,0x10
                );
      if (local_9c8 != (undefined *)0x0) {
        lVar10 = *local_5f8;
        local_9d0 = (undefined *)0x0;
        do {
          do {
            if (*local_5f8 - lVar10 != 0) {
              _objc_enumerationMutation(*local_5f8 - lVar10,puVar5);
            }
            local_5c8 = *(undefined8 *)(local_600 + (long)local_9d0 * 8);
            _memset(auStack_650,0,0x40);
            puVar6 = local_5b8;
            (*(code *)PTR__objc_retain_02578638)();
            local_a08 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_650,
                       auStack_1e8,0x10);
            if (local_a08 != (undefined *)0x0) {
              lVar12 = *local_640;
              local_a10 = (undefined *)0x0;
              do {
                do {
                  if (*local_640 - lVar12 != 0) {
                    _objc_enumerationMutation(*local_640 - lVar12,puVar6);
                  }
                  local_610 = *(undefined8 *)(local_648 + (long)local_a10 * 8);
                  uVar2 = local_590;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_590,PTR_s_stringByAppendingFormat__026a2088,&cf_____);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = local_5b0;
                  local_658 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_5b0,PTR_s_fileExistsAtPath__026ca630,uVar2);
                  if (((ulong)puVar7 & 1) == 0) {
LAB_005b1d60:
                    local_57c = 0;
                  }
                  else {
                    puVar7 = local_5b0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_5b0,PTR_s_attributesOfItemAtPath_error__0269db08,local_658,0);
                    _objc_retainAutoreleasedReturnValue();
                    local_660 = puVar7;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_fileSize_026a1640);
                    puVar13 = puVar7 + -0x7d000;
                    local_668 = puVar7;
                    if (puVar7 < (undefined *)0x7d000 || puVar13 == (undefined1 *)0x0) {
                      local_57c = 0;
                    }
                    else {
                      _objc_storeStrong(puVar13,&local_590,local_658);
                      local_5a1 = 1;
                      puVar13 = (undefined1 *)((long)&MACH_HEADER.cputype + 3);
                      local_57c = 7;
                    }
                    _objc_storeStrong(puVar13,&local_660,0);
                    if (local_57c == 0) goto LAB_005b1d60;
                  }
                  _objc_storeStrong(&local_658,0);
                  if (local_57c != 0) goto LAB_005b1df4;
                  local_a10 = local_a10 + 1;
                } while (local_a10 < local_a08);
                local_a08 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_650,
                           auStack_1e8,0x10);
                local_a10 = (undefined *)0x0;
              } while (local_a08 != (undefined *)0x0);
            }
            local_57c = 0;
LAB_005b1df4:
            (*(code *)PTR__objc_release_02578630)(puVar6);
            if ((local_5a1 & 1) != 0) {
              local_57c = 5;
              goto LAB_005b1ec8;
            }
            local_9d0 = local_9d0 + 1;
          } while (local_9d0 < local_9c8);
          local_9c8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_608,auStack_168,
                     0x10);
          local_9d0 = (undefined *)0x0;
        } while (local_9c8 != (undefined *)0x0);
      }
      local_57c = 0;
LAB_005b1ec8:
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    if ((local_5a1 & 1) == 0) {
      pcVar4 = &cf_pathForExistData;
      _NSSelectorFromString();
      uVar2 = local_528;
      local_670 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_528;
        (*(code *)PTR__objc_msgSend_02578628)(local_528,local_670);
        _objc_retainAutoreleasedReturnValue();
        local_678 = uVar2;
        if ((uVar2 == 0) ||
           (puVar5 = local_5b0,
           (*(code *)PTR__objc_msgSend_02578628)(local_5b0,PTR_s_fileExistsAtPath__026ca630,uVar2),
           ((ulong)puVar5 & 1) == 0)) {
          if (local_678 != 0) {
            _memset(auStack_6c0,0,0x40);
            puVar5 = local_5c0;
            (*(code *)PTR__objc_retain_02578638)();
            local_a98 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6c0,
                       auStack_268,0x10);
            if (local_a98 != (undefined *)0x0) {
              lVar10 = *local_6b0;
              local_aa0 = (undefined *)0x0;
              do {
                do {
                  if (*local_6b0 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_6b0 - lVar10,puVar5);
                  }
                  local_680 = *(undefined8 *)(local_6b8 + (long)local_aa0 * 8);
                  _memset(auStack_708,0,0x40);
                  puVar6 = local_5b8;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_ad8 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_708,
                             auStack_2e8,0x10);
                  if (local_ad8 != (undefined *)0x0) {
                    lVar12 = *local_6f8;
                    local_ae0 = (undefined *)0x0;
                    do {
                      do {
                        if (*local_6f8 - lVar12 != 0) {
                          _objc_enumerationMutation(*local_6f8 - lVar12,puVar6);
                        }
                        local_6c8 = *(undefined8 *)(local_700 + (long)local_ae0 * 8);
                        uVar2 = local_678;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_678,PTR_s_stringByAppendingFormat__026a2088,&cf_____);
                        _objc_retainAutoreleasedReturnValue();
                        puVar7 = local_5b0;
                        local_710 = uVar2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_5b0,PTR_s_fileExistsAtPath__026ca630,uVar2);
                        if (((ulong)puVar7 & 1) == 0) {
                          local_57c = 0;
                        }
                        else {
                          _objc_storeStrong(&local_590,local_710);
                          local_5a1 = 1;
                          local_57c = 0xb;
                        }
                        _objc_storeStrong(&local_710,0);
                        if (local_57c != 0) goto LAB_005b2304;
                        local_ae0 = local_ae0 + 1;
                      } while (local_ae0 < local_ad8);
                      local_ad8 = puVar6;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_708,
                                 auStack_2e8,0x10);
                      local_ae0 = (undefined *)0x0;
                    } while (local_ad8 != (undefined *)0x0);
                  }
                  local_57c = 0;
LAB_005b2304:
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  if ((local_5a1 & 1) != 0) {
                    local_57c = 9;
                    goto LAB_005b23c8;
                  }
                  local_aa0 = local_aa0 + 1;
                } while (local_aa0 < local_a98);
                local_a98 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_6c0,
                           auStack_268,0x10);
                local_aa0 = (undefined *)0x0;
              } while (local_a98 != (undefined *)0x0);
            }
            local_57c = 0;
LAB_005b23c8:
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
        }
        else {
          _objc_storeStrong(&local_590,local_678);
          local_5a1 = 1;
        }
        _objc_storeStrong(&local_678,0);
      }
      if ((local_5a1 & 1) == 0) {
        pcVar4 = &cf_pathForHdData;
        _NSSelectorFromString();
        uVar2 = local_528;
        local_718 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_528;
          (*(code *)PTR__objc_msgSend_02578628)(local_528,local_718);
          _objc_retainAutoreleasedReturnValue();
          local_720 = uVar2;
          if ((uVar2 == 0) ||
             (puVar5 = local_5b0,
             (*(code *)PTR__objc_msgSend_02578628)(local_5b0,PTR_s_fileExistsAtPath__026ca630,uVar2)
             , ((ulong)puVar5 & 1) == 0)) {
            if (local_720 != 0) {
              _memset(auStack_768,0,0x40);
              puVar5 = local_5c0;
              (*(code *)PTR__objc_retain_02578638)();
              local_b58 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_768,
                         auStack_368,0x10);
              if (local_b58 != (undefined *)0x0) {
                lVar10 = *local_758;
                local_b60 = (undefined *)0x0;
                do {
                  do {
                    if (*local_758 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_758 - lVar10,puVar5);
                    }
                    local_728 = *(undefined8 *)(local_760 + (long)local_b60 * 8);
                    _memset(auStack_7b0,0,0x40);
                    puVar6 = local_5b8;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_b98 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_7b0,
                               auStack_3e8,0x10);
                    if (local_b98 != (undefined *)0x0) {
                      lVar12 = *local_7a0;
                      local_ba0 = (undefined *)0x0;
                      do {
                        do {
                          if (*local_7a0 - lVar12 != 0) {
                            _objc_enumerationMutation(*local_7a0 - lVar12,puVar6);
                          }
                          local_770 = *(undefined8 *)(local_7a8 + (long)local_ba0 * 8);
                          uVar2 = local_720;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_720,PTR_s_stringByAppendingFormat__026a2088,&cf_____);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = local_5b0;
                          local_7b8 = uVar2;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_5b0,PTR_s_fileExistsAtPath__026ca630,uVar2);
                          if (((ulong)puVar7 & 1) == 0) {
                            local_57c = 0;
                          }
                          else {
                            _objc_storeStrong(&local_590,local_7b8);
                            local_5a1 = 1;
                            local_57c = 0xf;
                          }
                          _objc_storeStrong(&local_7b8,0);
                          if (local_57c != 0) goto LAB_005b2818;
                          local_ba0 = local_ba0 + 1;
                        } while (local_ba0 < local_b98);
                        local_b98 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_7b0,auStack_3e8,0x10);
                        local_ba0 = (undefined *)0x0;
                      } while (local_b98 != (undefined *)0x0);
                    }
                    local_57c = 0;
LAB_005b2818:
                    (*(code *)PTR__objc_release_02578630)(puVar6);
                    if ((local_5a1 & 1) != 0) {
                      local_57c = 0xd;
                      goto LAB_005b28dc;
                    }
                    local_b60 = local_b60 + 1;
                  } while (local_b60 < local_b58);
                  local_b58 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_768,
                             auStack_368,0x10);
                  local_b60 = (undefined *)0x0;
                } while (local_b58 != (undefined *)0x0);
              }
              local_57c = 0;
LAB_005b28dc:
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
          }
          else {
            _objc_storeStrong(&local_590,local_720);
            local_5a1 = 1;
          }
          _objc_storeStrong(&local_720,0);
        }
      }
      if (((local_5a1 & 1) == 0) && (local_588 == 5)) {
        pcVar4 = &cf_pathForSightData;
        _NSSelectorFromString(0);
        uVar2 = local_528;
        local_7c0 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_528;
          (*(code *)PTR__objc_msgSend_02578628)(local_528,local_7c0);
          _objc_retainAutoreleasedReturnValue();
          local_7c8 = uVar2;
          if ((uVar2 == 0) ||
             (puVar5 = local_5b0,
             (*(code *)PTR__objc_msgSend_02578628)(local_5b0,PTR_s_fileExistsAtPath__026ca630,uVar2)
             , ((ulong)puVar5 & 1) == 0)) {
            if (local_7c8 != 0) {
              _memset(auStack_810,0,0x40);
              puVar5 = local_5c0;
              (*(code *)PTR__objc_retain_02578638)();
              local_c18 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_810,
                         auStack_468,0x10);
              if (local_c18 != (undefined *)0x0) {
                lVar10 = *local_800;
                local_c20 = (undefined *)0x0;
                do {
                  do {
                    if (*local_800 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_800 - lVar10,puVar5);
                    }
                    local_7d0 = *(undefined8 *)(local_808 + (long)local_c20 * 8);
                    _memset(auStack_858,0,0x40);
                    puVar6 = local_5b8;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_c58 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_858,
                               auStack_4e8,0x10);
                    if (local_c58 != (undefined *)0x0) {
                      lVar12 = *local_848;
                      local_c60 = (undefined *)0x0;
                      do {
                        do {
                          if (*local_848 - lVar12 != 0) {
                            _objc_enumerationMutation(*local_848 - lVar12,puVar6);
                          }
                          local_818 = *(undefined8 *)(local_850 + (long)local_c60 * 8);
                          uVar2 = local_7c8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_7c8,PTR_s_stringByAppendingFormat__026a2088,&cf_____);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = local_5b0;
                          local_860 = uVar2;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_5b0,PTR_s_fileExistsAtPath__026ca630,uVar2);
                          if (((ulong)puVar7 & 1) == 0) {
                            local_57c = 0;
                          }
                          else {
                            _objc_storeStrong(&local_590,local_860);
                            local_5a1 = 1;
                            local_57c = 0x13;
                          }
                          _objc_storeStrong(&local_860,0);
                          if (local_57c != 0) goto LAB_005b2d40;
                          local_c60 = local_c60 + 1;
                        } while (local_c60 < local_c58);
                        local_c58 = puVar6;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_858,auStack_4e8,0x10);
                        local_c60 = (undefined *)0x0;
                      } while (local_c58 != (undefined *)0x0);
                    }
                    local_57c = 0;
LAB_005b2d40:
                    (*(code *)PTR__objc_release_02578630)(puVar6);
                    if ((local_5a1 & 1) != 0) {
                      local_57c = 0x11;
                      goto LAB_005b2e04;
                    }
                    local_c20 = local_c20 + 1;
                  } while (local_c20 < local_c18);
                  local_c18 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_810,
                             auStack_468,0x10);
                  local_c20 = (undefined *)0x0;
                } while (local_c18 != (undefined *)0x0);
              }
              local_57c = 0;
LAB_005b2e04:
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
          }
          else {
            _objc_storeStrong(&local_590,local_7c8);
            local_5a1 = 1;
          }
          _objc_storeStrong(&local_7c8,0);
        }
      }
    }
    if (((local_5a1 & 1) == 0) || (local_590 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eNNX__W);
      local_57c = 1;
    }
    else {
      pcVar8 = "SightDraft";
      _objc_getClass();
      local_868 = pcVar8;
      if (pcVar8 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RNS_u);
        local_57c = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_590);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = &cf_draftWithVideoURL_thumbImage_;
        local_870 = puVar5;
        _NSSelectorFromString();
        local_880 = (char *)0x0;
        pcVar8 = local_868;
        local_878 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_868,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar8 & 1) == 0) {
          pcVar4 = &cf_draftWithVideoURL_;
          _NSSelectorFromString();
          pcVar8 = local_868;
          local_898 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_868,PTR_s_respondsToSelector__026ca818,pcVar4)
          ;
          if (((ulong)pcVar8 & 1) != 0) {
            pcVar9 = local_868;
            (*(code *)PTR__objc_msgSend_02578628)(local_868,local_898,local_870);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_880;
            local_880 = pcVar9;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
        }
        else {
          local_888 = 0;
          pcVar4 = &cf_thumbImage;
          _NSSelectorFromString();
          uVar2 = local_528;
          local_890 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_528,PTR_s_respondsToSelector__026ca818,pcVar4)
          ;
          if ((uVar2 & 1) != 0) {
            uVar3 = local_528;
            (*(code *)PTR__objc_msgSend_02578628)(local_528,local_890);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_888;
            local_888 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          pcVar9 = local_868;
          (*(code *)PTR__objc_msgSend_02578628)(local_868,local_878,local_870,local_888);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_880;
          local_880 = pcVar9;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          _objc_storeStrong(&local_888,0);
        }
        if (local_880 == (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_I_z1Y_);
          local_57c = 1;
        }
        else {
          FUN_005befb0(local_880);
          pcVar8 = "WCNewCommitViewController";
          _objc_getClass();
          local_8a0 = pcVar8;
          if (pcVar8 == (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RNS_u);
            local_57c = 1;
          }
          else {
            pcVar4 = &cf_initWithSightDraft_;
            _NSSelectorFromString();
            pcVar8 = local_8a0;
            local_8a8 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_8a0,PTR_s_instancesRespondToSelector__0269da90,pcVar4);
            if (((ulong)pcVar8 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RNS_u);
              local_57c = 1;
            }
            else {
              pcVar8 = local_8a0;
              _objc_alloc();
              pcVar9 = pcVar8;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar8,local_8a8,local_880);
              _objc_retainAutoreleasedReturnValue();
              local_8b0 = pcVar9;
              (*(code *)PTR__objc_release_02578630)(pcVar8);
              if (local_8b0 == (char *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R__hV1Y_)
                ;
                local_57c = 1;
              }
              else {
                FUN_005bf0b8(local_8b0);
                _WCRefineMarkMomentsForwardEditor(local_8b0,local_500);
                uVar2 = local_500;
                FUN_005d07f4();
                _objc_retainAutoreleasedReturnValue();
                local_8b8 = uVar2;
                FUN_005d0aa8(local_8b0,uVar2);
                lVar10 = local_4f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_4f0,PTR_s_WCRefine_findViewController_026a5820);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = false;
                local_8c0 = lVar10;
                if (lVar10 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_navigationController_0269d458);
                  _objc_retainAutoreleasedReturnValue();
                  bVar1 = lVar10 != 0;
                  (*(code *)PTR__objc_release_02578630)(lVar10);
                }
                if (bVar1) {
                  lVar10 = local_8c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_8c0,PTR_s_navigationController_0269d458);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(lVar10);
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Sb);
                }
                _objc_storeStrong(&local_8c0);
                _objc_storeStrong(&local_8b8,0);
                local_57c = 0;
              }
              _objc_storeStrong(&local_8b0,0);
            }
          }
        }
        _objc_storeStrong(&local_880);
        _objc_storeStrong(&local_870,0);
      }
    }
    _objc_storeStrong(&local_5c0);
    _objc_storeStrong(&local_5b8,0);
    _objc_storeStrong(&local_5b0,0);
    _objc_storeStrong(&local_590,0);
  }
  _objc_storeStrong(&local_528);
  _objc_storeStrong(local_520,0);
  _objc_storeStrong(&local_508,0);
  if (local_57c == 0) {
    local_57c = 0;
  }
  _objc_storeStrong(&local_500,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

