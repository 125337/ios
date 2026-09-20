// FUN_01620dd4 @ 01620dd4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01620dd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *local_810;
  undefined *local_808;
  undefined *local_7c8;
  undefined *local_7c0;
  undefined *local_788;
  undefined *local_780;
  undefined *local_748;
  undefined *local_708;
  undefined *local_700;
  undefined *local_6c8;
  undefined *local_6c0;
  undefined *local_680;
  undefined *local_678;
  byte local_629;
  undefined8 local_628;
  undefined1 auStack_620 [8];
  long local_618;
  long *local_610;
  ulong local_5e0;
  undefined8 local_5d8;
  undefined1 auStack_5d0 [8];
  long local_5c8;
  long *local_5c0;
  undefined8 local_590;
  undefined1 auStack_588 [8];
  long local_580;
  long *local_578;
  undefined8 local_548;
  byte local_539;
  undefined *local_538;
  byte local_529;
  ulong local_528;
  byte local_519;
  undefined *local_518;
  byte local_509;
  ulong local_508;
  undefined *local_500;
  ulong local_4f8;
  undefined1 auStack_4f0 [8];
  long local_4e8;
  long *local_4e0;
  ulong local_4b0;
  undefined *local_4a8;
  undefined1 auStack_4a0 [8];
  long local_498;
  long *local_490;
  undefined8 local_460;
  undefined *local_458;
  byte local_449;
  undefined *local_448;
  long local_440;
  undefined *local_438;
  undefined *local_430;
  undefined *local_428;
  long local_420;
  undefined *local_418;
  int local_40c;
  undefined1 auStack_408 [8];
  long local_400;
  long *local_3f8;
  ulong local_3c8;
  undefined *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 auStack_398 [128];
  undefined1 auStack_318 [128];
  undefined1 auStack_298 [128];
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  undefined1 auStack_1f8 [128];
  undefined1 auStack_178 [128];
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_3a8 = 0;
  _objc_storeStrong(&local_3a8,param_1);
  uVar4 = local_3a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_3a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrDefaultTitle);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_3b0 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_3a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_3b8 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8);
  _objc_retainAutoreleasedReturnValue();
  local_3c0 = puVar6;
  _memset(auStack_408,0,0x40);
  local_b8 = local_3b0;
  local_b0 = local_3b8;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_678 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_678 != (undefined *)0x0) {
    lVar10 = *local_3f8;
    local_680 = (undefined *)0x0;
    do {
      do {
        if (*local_3f8 - lVar10 != 0) {
          _objc_enumerationMutation(*local_3f8 - lVar10,puVar6);
        }
        uVar15 = *(ulong *)(local_400 + (long)local_680 * 8);
        local_3c8 = uVar15;
        (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_length_0269cca0);
        if (((((uVar15 != 0) &&
              (puVar7 = local_3c0,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_3c0,PTR_s_containsObject__0269cbb8,local_3c8),
              ((ulong)puVar7 & 1) == 0)) &&
             (uVar15 = local_3c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_containsString__0269d0b0,&cf__),
             (uVar15 & 1) == 0)) &&
            ((uVar15 = local_3c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_containsString__0269d0b0,&cf__),
             (uVar15 & 1) == 0 &&
             (uVar15 = local_3c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_isEqualToString__0269ccc8,&cf__),
             (uVar15 & 1) == 0)))) &&
           (uVar15 = local_3c8,
           (*(code *)PTR__objc_msgSend_02578628)(local_3c8,PTR_s_isEqualToString__0269ccc8,&cf___),
           (uVar15 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_3c0,PTR_s_addObject__0269d180,local_3c8);
        }
        local_680 = local_680 + 1;
      } while (local_680 < local_678);
      local_678 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_408,auStack_a8,0x10)
      ;
      local_680 = (undefined *)0x0;
    } while (local_678 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar6 = local_3c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_3c0,PTR_s_count_0269cfe0);
  if (puVar6 == (undefined *)0x0) {
    local_3a0 = 0;
    local_40c = 1;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = 9;
    local_418 = puVar6;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_420 = lVar10;
    (*(code *)PTR__objc_release_02578630)(lVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_WCRSuperFloatProfileStore_026cee48;
    local_428 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconPackAbsoluteDirectory_026b1a68);
    _objc_retainAutoreleasedReturnValue();
    local_430 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_length_0269cca0);
    if (puVar7 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_addObject__0269d180,local_430);
    }
    puVar6 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,
               PTR_s_menuIconPackRootAbsoluteDirector_026b18d0);
    _objc_retainAutoreleasedReturnValue();
    local_438 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
    if ((puVar6 != (undefined *)0x0) &&
       (puVar6 = local_428,
       (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_containsObject__0269cbb8,local_438),
       ((ulong)puVar6 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_addObject__0269d180,local_438);
    }
    lVar10 = local_420;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine_SuperFloat_icon
              );
    _objc_retainAutoreleasedReturnValue();
    local_440 = lVar10;
    (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0);
    if ((lVar10 != 0) &&
       (puVar6 = local_428,
       (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_containsObject__0269cbb8,local_440),
       ((ulong)puVar6 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_addObject__0269d180,local_440);
    }
    puVar6 = PTR_WCRefinePluginIconCatalog_026ce4e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_albumIconDirectoryPath_026aee90);
    _objc_retainAutoreleasedReturnValue();
    local_448 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
    local_449 = 0;
    if (puVar6 != (undefined *)0x0) {
      puVar6 = local_428;
      (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_containsObject__0269cbb8,local_448);
      local_449 = (byte)puVar6;
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = local_428;
        (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_addObject__0269d180,local_448);
        local_449 = (byte)puVar6;
      }
    }
    FUN_01618a98();
    local_f8 = &cf_svg;
    local_f0 = &cf_png;
    local_e8 = &cf_jpg;
    local_e0 = &cf_jpeg;
    local_d8 = &cf_webp;
    local_d0 = &cf_gif;
    local_c8 = &cf_heic;
    local_c0 = &cf_bmp;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f8,8
              );
    _objc_retainAutoreleasedReturnValue();
    local_458 = puVar6;
    _memset(auStack_4a0,0,0x40);
    puVar6 = local_428;
    (*(code *)PTR__objc_retain_02578638)();
    local_6c0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a0,auStack_178,0x10);
    if (local_6c0 != (undefined *)0x0) {
      lVar10 = *local_490;
      local_6c8 = (undefined *)0x0;
      do {
        do {
          if (*local_490 - lVar10 != 0) {
            _objc_enumerationMutation(*local_490 - lVar10,puVar6);
          }
          local_460 = *(undefined8 *)(local_498 + (long)local_6c8 * 8);
          puVar7 = local_418;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_418,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_460,0);
          _objc_retainAutoreleasedReturnValue();
          local_4a8 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_count_0269cfe0);
          if (puVar7 == (undefined *)0x0) {
            local_40c = 5;
          }
          else {
            _memset(auStack_4f0,0,0x40);
            puVar7 = local_3c0;
            (*(code *)PTR__objc_retain_02578638)();
            local_700 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f0,
                       auStack_1f8,0x10);
            if (local_700 != (undefined *)0x0) {
              lVar8 = *local_4e0;
              local_708 = (undefined *)0x0;
              do {
                do {
                  if (*local_4e0 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_4e0 - lVar8,puVar7);
                  }
                  uVar15 = *(ulong *)(local_4e8 + (long)local_708 * 8);
                  local_4b0 = uVar15;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_4f8 = uVar15;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar15,PTR_s_lowercaseString_0269d9c0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = uVar15;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar15);
                  uVar15 = local_4f8;
                  if ((uVar14 & 1) != 0) {
                    uVar14 = local_4f8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_4f8,PTR_s_length_0269cca0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar15,PTR_s_substringToIndex__0269d6c0,uVar14 - 5);
                    _objc_retainAutoreleasedReturnValue();
                    uVar14 = local_4f8;
                    local_4f8 = uVar15;
                    (*(code *)PTR__objc_release_02578630)(uVar14);
                  }
                  local_509 = 0;
                  local_519 = 0;
                  local_529 = 0;
                  local_539 = 0;
                  if ((local_449 & 1) == 0) {
                    local_218 = local_4f8;
                    uVar15 = local_4f8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4f8,PTR_s_stringByAppendingString__0269d398,&cf__dark);
                    _objc_retainAutoreleasedReturnValue();
                    local_529 = 1;
                    local_748 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    local_528 = uVar15;
                    local_210 = uVar15;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                               PTR_s_arrayWithObjects_count__0269cc70,&local_218,2);
                    _objc_retainAutoreleasedReturnValue();
                    local_539 = 1;
                    local_538 = local_748;
                  }
                  else {
                    uVar15 = local_4f8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4f8,PTR_s_stringByAppendingString__0269d398,&cf__dark);
                    _objc_retainAutoreleasedReturnValue();
                    local_509 = 1;
                    local_200 = local_4f8;
                    local_748 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    local_508 = uVar15;
                    local_208 = uVar15;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                               PTR_s_arrayWithObjects_count__0269cc70,&local_208,2);
                    _objc_retainAutoreleasedReturnValue();
                    local_519 = 1;
                    local_518 = local_748;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_500 = local_748;
                  if ((local_539 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_538);
                  }
                  if ((local_529 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_528);
                  }
                  if ((local_519 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_518);
                  }
                  if ((local_509 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_508);
                  }
                  _memset(auStack_588,0,0x40);
                  puVar1 = local_500;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_780 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_588,
                             auStack_298,0x10);
                  if (local_780 != (undefined *)0x0) {
                    lVar11 = *local_578;
                    local_788 = (undefined *)0x0;
                    do {
                      do {
                        if (*local_578 - lVar11 != 0) {
                          _objc_enumerationMutation(*local_578 - lVar11,puVar1);
                        }
                        local_548 = *(undefined8 *)(local_580 + (long)local_788 * 8);
                        _memset(auStack_5d0,0,0x40);
                        puVar3 = local_458;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_7c0 = puVar3;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_5d0,auStack_318,0x10);
                        if (local_7c0 != (undefined *)0x0) {
                          lVar12 = *local_5c0;
                          local_7c8 = (undefined *)0x0;
                          do {
                            do {
                              if (*local_5c0 - lVar12 != 0) {
                                _objc_enumerationMutation(*local_5c0 - lVar12,puVar3);
                              }
                              local_590 = *(undefined8 *)(local_5c8 + (long)local_7c8 * 8);
                              uVar4 = local_548;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_548,PTR_s_stringByAppendingPathExtension__026a4580,
                                         local_590);
                              _objc_retainAutoreleasedReturnValue();
                              uVar5 = uVar4;
                              (*(code *)PTR__objc_msgSend_02578628)();
                              _objc_retainAutoreleasedReturnValue();
                              local_5d8 = uVar5;
                              (*(code *)PTR__objc_release_02578630)(uVar4);
                              _memset(auStack_620,0,0x40);
                              puVar2 = local_4a8;
                              (*(code *)PTR__objc_retain_02578638)();
                              local_808 = puVar2;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                         auStack_620,auStack_398,0x10);
                              if (local_808 != (undefined *)0x0) {
                                lVar13 = *local_610;
                                local_810 = (undefined *)0x0;
                                do {
                                  do {
                                    if (*local_610 - lVar13 != 0) {
                                      _objc_enumerationMutation(*local_610 - lVar13,puVar2);
                                    }
                                    uVar14 = *(ulong *)(local_618 + (long)local_810 * 8);
                                    local_5e0 = uVar14;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (uVar14,PTR_s_lowercaseString_0269d9c0);
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar15 = uVar14;
                                    (*(code *)PTR__objc_msgSend_02578628)();
                                    (*(code *)PTR__objc_release_02578630)(uVar14);
                                    if ((uVar15 & 1) != 0) {
                                      uVar4 = local_460;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_460,
                                                 PTR_s_stringByAppendingPathComponent__026cab30,
                                                 local_5e0);
                                      _objc_retainAutoreleasedReturnValue();
                                      local_629 = 0;
                                      puVar9 = local_418;
                                      local_628 = uVar4;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_418,
                                                 PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar4,
                                                 &local_629);
                                      uVar4 = local_628;
                                      if ((((ulong)puVar9 & 1) == 0) || ((local_629 & 1) != 0)) {
                                        local_40c = 0;
                                      }
                                      else {
                                        (*(code *)PTR__objc_retain_02578638)();
                                        local_3a0 = uVar4;
                                        local_40c = 1;
                                      }
                                      _objc_storeStrong(&local_628,0);
                                      if (local_40c != 0) goto LAB_01621eb0;
                                    }
                                    local_810 = local_810 + 1;
                                  } while (local_810 < local_808);
                                  local_808 = puVar2;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                             auStack_620,auStack_398,0x10);
                                  local_810 = (undefined *)0x0;
                                } while (local_808 != (undefined *)0x0);
                              }
                              local_40c = 0;
LAB_01621eb0:
                              (*(code *)PTR__objc_release_02578630)(puVar2);
                              if (local_40c == 0) {
                                local_40c = 0;
                              }
                              _objc_storeStrong(&local_5d8,0);
                              if (local_40c != 0) goto LAB_01621f68;
                              local_7c8 = local_7c8 + 1;
                            } while (local_7c8 < local_7c0);
                            local_7c0 = puVar3;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                       auStack_5d0,auStack_318,0x10);
                            local_7c8 = (undefined *)0x0;
                          } while (local_7c0 != (undefined *)0x0);
                        }
                        local_40c = 0;
LAB_01621f68:
                        (*(code *)PTR__objc_release_02578630)(puVar3);
                        if (local_40c != 0) goto LAB_01621ff8;
                        local_788 = local_788 + 1;
                      } while (local_788 < local_780);
                      local_780 = puVar1;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_588,
                                 auStack_298,0x10);
                      local_788 = (undefined *)0x0;
                    } while (local_780 != (undefined *)0x0);
                  }
                  local_40c = 0;
LAB_01621ff8:
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  if (local_40c == 0) {
                    local_40c = 0;
                  }
                  _objc_storeStrong(&local_500);
                  _objc_storeStrong(&local_4f8,0);
                  if (local_40c != 0) goto LAB_016220c0;
                  local_708 = local_708 + 1;
                } while (local_708 < local_700);
                local_700 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4f0,
                           auStack_1f8,0x10);
                local_708 = (undefined *)0x0;
              } while (local_700 != (undefined *)0x0);
            }
            local_40c = 0;
LAB_016220c0:
            (*(code *)PTR__objc_release_02578630)(puVar7);
            if (local_40c == 0) {
              local_40c = 0;
            }
          }
          _objc_storeStrong(&local_4a8,0);
          if ((local_40c != 0) && (local_40c != 5)) goto LAB_0162218c;
          local_6c8 = local_6c8 + 1;
        } while (local_6c8 < local_6c0);
        local_6c0 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4a0,auStack_178,
                   0x10);
        local_6c8 = (undefined *)0x0;
      } while (local_6c0 != (undefined *)0x0);
    }
    local_40c = 0;
LAB_0162218c:
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (local_40c == 0) {
      local_3a0 = 0;
      local_40c = 1;
    }
    _objc_storeStrong(&local_458);
    _objc_storeStrong(&local_448,0);
    _objc_storeStrong(&local_440,0);
    _objc_storeStrong(&local_438,0);
    _objc_storeStrong(&local_430,0);
    _objc_storeStrong(&local_428,0);
    _objc_storeStrong(&local_420,0);
    _objc_storeStrong(&local_418,0);
  }
  _objc_storeStrong(&local_3c0);
  _objc_storeStrong(&local_3b8,0);
  _objc_storeStrong(&local_3b0,0);
  _objc_storeStrong(&local_3a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_3a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

