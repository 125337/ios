// douyinNoteItemFromJSON:target: @ 0101d5ac

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::douyinNoteItemFromJSON_target_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined *local_580;
  undefined *local_578;
  undefined *local_518;
  undefined *local_510;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined *local_470;
  undefined *local_468;
  ID local_438;
  undefined1 auStack_430 [8];
  long local_428;
  long *local_420;
  undefined8 local_3f0;
  byte local_3e1;
  undefined *local_3e0;
  undefined1 auStack_3d8 [8];
  long local_3d0;
  long *local_3c8;
  undefined8 local_398;
  undefined *local_390;
  undefined1 auStack_388 [8];
  long local_380;
  long *local_378;
  undefined8 local_348;
  byte local_339;
  undefined *local_338;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  undefined8 local_2f0;
  ID local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  int local_2cc;
  long local_2c8;
  long local_2c0;
  SEL local_2b8;
  ID local_2b0;
  undefined *local_2a8;
  undefined1 auStack_2a0 [128];
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  undefined1 auStack_208 [128];
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [128];
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2c0 = 0;
  local_2b8 = param_2;
  local_2b0 = param_1;
  _objc_storeStrong(&local_2c0,param_3);
  local_2c8 = 0;
  _objc_storeStrong(&local_2c8,param_4);
  if ((local_2c0 == 0) ||
     (lVar9 = local_2c8, (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_length_0269cca0),
     lVar9 == 0)) {
    local_2a8 = (undefined *)0x0;
    local_2cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_2c0);
    _objc_retainAutoreleasedReturnValue();
    local_2d8 = puVar2;
    do {
      puVar2 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        local_2a8 = (undefined *)0x0;
        iVar8 = 1;
        local_2cc = 1;
        break;
      }
      puVar2 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_removeLastObject_0269e830);
      puVar2 = local_2e0;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      puVar3 = local_2e0;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          IVar7 = local_2b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2b0,PTR_s_douyinJSONObjectIfEmbedded__026adcd8,local_2e0);
          _objc_retainAutoreleasedReturnValue();
          local_438 = IVar7;
          if (IVar7 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_addObject__0269d180,IVar7);
          }
          _objc_storeStrong(&local_438,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2d8,PTR_s_addObjectsFromArray__0269d540,local_2e0);
        }
LAB_0101e264:
        local_2cc = 0;
      }
      else {
        IVar7 = local_2b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2b0,PTR_s_douyinDictionaryAwemeID__026adcc8,local_2e0);
        _objc_retainAutoreleasedReturnValue();
        local_2e8 = IVar7;
        (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_length_0269cca0);
        if ((IVar7 == 0) ||
           (IVar7 = local_2e8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_2e8,PTR_s_isEqualToString__0269ccc8,local_2c8), (IVar7 & 1) != 0)) {
          IVar7 = local_2e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_isEqualToString__0269ccc8,local_2c8)
          ;
          if ((IVar7 & 1) == 0) {
LAB_0101dfbc:
            _memset(auStack_430,0,0x40);
            puVar2 = local_2e0;
            (*(code *)PTR__objc_retain_02578638)();
            local_578 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,
                       auStack_2a0,0x10);
            if (local_578 != (undefined *)0x0) {
              lVar9 = *local_420;
              local_580 = (undefined *)0x0;
              do {
                do {
                  if (*local_420 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_420 - lVar9,puVar2);
                  }
                  local_3f0 = *(undefined8 *)(local_428 + (long)local_580 * 8);
                  IVar7 = local_2b0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2b0,PTR_s_douyinJSONKeyShouldSkipImageWalk_026adcd0,local_3f0);
                  puVar3 = local_2d8;
                  if ((IVar7 & 1) == 0) {
                    puVar4 = local_2e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2e0,PTR_s_objectForKeyedSubscript__0269d098,local_3f0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                    (*(code *)PTR__objc_release_02578630)(puVar4);
                  }
                  local_580 = local_580 + 1;
                } while (local_580 < local_578);
                local_578 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,
                           auStack_2a0,0x10);
                local_580 = (undefined *)0x0;
              } while (local_578 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_2cc = 0;
          }
          else {
            _memset(auStack_330,0,0x40);
            local_d8 = &cf_images;
            local_d0 = &cf_image_list;
            local_c8 = &cf_imageList;
            local_c0 = &cf_imageInfos;
            local_b8 = &cf_imagesInfo;
            local_b0 = &cf_note_images;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_d8,6);
            _objc_retainAutoreleasedReturnValue();
            local_468 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_468 != (undefined *)0x0) {
              lVar9 = *local_320;
              local_470 = (undefined *)0x0;
              do {
                do {
                  if (*local_320 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_320 - lVar9,puVar2);
                  }
                  local_2f0 = *(undefined8 *)(local_328 + (long)local_470 * 8);
                  puVar3 = local_2e0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2e0,PTR_s_objectForKeyedSubscript__0269d098,local_2f0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                  puVar5 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4)
                  ;
                  local_339 = 0;
                  bVar1 = false;
                  if (((ulong)puVar5 & 1) != 0) {
                    puVar4 = local_2e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2e0,PTR_s_objectForKeyedSubscript__0269d098,local_2f0);
                    _objc_retainAutoreleasedReturnValue();
                    local_339 = 1;
                    local_338 = puVar4;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    bVar1 = puVar4 != (undefined *)0x0;
                  }
                  if ((local_339 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_338);
                  }
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  puVar3 = local_2e0;
                  if (bVar1) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_2a8 = puVar3;
                    local_2cc = 1;
                    goto LAB_0101da78;
                  }
                  local_470 = local_470 + 1;
                } while (local_470 < local_468);
                local_468 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,
                           auStack_a8,0x10);
                local_470 = (undefined *)0x0;
              } while (local_468 != (undefined *)0x0);
            }
            local_2cc = 0;
LAB_0101da78:
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (local_2cc == 0) {
              _memset(auStack_388,0,0x40);
              local_188 = &cf_image_post;
              local_180 = &cf_imagePost;
              local_178 = &cf_image_post_info;
              local_170 = &cf_imagePostInfo;
              local_168 = &cf_atlas_info;
              local_160 = &cf_atlasInfo;
              puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_188,6);
              _objc_retainAutoreleasedReturnValue();
              local_4c8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_4c8 != (undefined *)0x0) {
                lVar9 = *local_378;
                local_4d0 = (undefined *)0x0;
                do {
                  do {
                    if (*local_378 - lVar9 != 0) {
                      _objc_enumerationMutation(*local_378 - lVar9,puVar2);
                    }
                    local_348 = *(undefined8 *)(local_380 + (long)local_4d0 * 8);
                    puVar3 = local_2e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2e0,PTR_s_objectForKeyedSubscript__0269d098,local_348);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                    local_390 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
                    if (((ulong)puVar3 & 1) == 0) {
                      local_2cc = 7;
                    }
                    else {
                      _memset(auStack_3d8,0,0x40);
                      local_220 = &cf_images;
                      local_218 = &cf_image_list;
                      local_210 = &cf_imageList;
                      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                 PTR_s_arrayWithObjects_count__0269cc70,&local_220,3);
                      _objc_retainAutoreleasedReturnValue();
                      local_510 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      if (local_510 != (undefined *)0x0) {
                        lVar10 = *local_3c8;
                        local_518 = (undefined *)0x0;
                        do {
                          do {
                            if (*local_3c8 - lVar10 != 0) {
                              _objc_enumerationMutation(*local_3c8 - lVar10,puVar3);
                            }
                            local_398 = *(undefined8 *)(local_3d0 + (long)local_518 * 8);
                            puVar4 = local_390;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_390,PTR_s_objectForKeyedSubscript__0269d098,local_398);
                            _objc_retainAutoreleasedReturnValue();
                            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                            puVar6 = puVar4;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
                            local_3e1 = 0;
                            bVar1 = false;
                            if (((ulong)puVar6 & 1) != 0) {
                              puVar5 = local_390;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_390,PTR_s_objectForKeyedSubscript__0269d098,local_398
                                        );
                              _objc_retainAutoreleasedReturnValue();
                              local_3e1 = 1;
                              local_3e0 = puVar5;
                              (*(code *)PTR__objc_msgSend_02578628)();
                              bVar1 = puVar5 != (undefined *)0x0;
                            }
                            if ((local_3e1 & 1) != 0) {
                              (*(code *)PTR__objc_release_02578630)(local_3e0);
                            }
                            (*(code *)PTR__objc_release_02578630)(puVar4);
                            puVar4 = local_2e0;
                            if (bVar1) {
                              (*(code *)PTR__objc_retain_02578638)();
                              local_2a8 = puVar4;
                              local_2cc = 1;
                              goto LAB_0101dedc;
                            }
                            local_518 = local_518 + 1;
                          } while (local_518 < local_510);
                          local_510 = puVar3;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                     auStack_3d8,auStack_208,0x10);
                          local_518 = (undefined *)0x0;
                        } while (local_510 != (undefined *)0x0);
                      }
                      local_2cc = 0;
LAB_0101dedc:
                      (*(code *)PTR__objc_release_02578630)(puVar3);
                      if (local_2cc == 0) {
                        local_2cc = 0;
                      }
                    }
                    _objc_storeStrong(&local_390,0);
                    if ((local_2cc != 0) && (local_2cc != 7)) goto LAB_0101df98;
                    local_4d0 = local_4d0 + 1;
                  } while (local_4d0 < local_4c8);
                  local_4c8 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_388,
                             auStack_158,0x10);
                  local_4d0 = (undefined *)0x0;
                } while (local_4c8 != (undefined *)0x0);
              }
              local_2cc = 0;
LAB_0101df98:
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if (local_2cc == 0) goto LAB_0101dfbc;
            }
          }
        }
        else {
          local_2cc = 2;
        }
        _objc_storeStrong(&local_2e8,0);
        if (local_2cc == 0) goto LAB_0101e264;
      }
      _objc_storeStrong(&local_2e0,0);
    } while ((local_2cc == 0) || (iVar8 = local_2cc + -2, iVar8 == 0));
    _objc_storeStrong(iVar8,&local_2d8,0);
  }
  _objc_storeStrong(&local_2c8);
  _objc_storeStrong(&local_2c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_2a8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

