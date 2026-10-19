

/* Function Stack Size: 0x20 bytes */



void WCMFeedController::userContentController_didReceiveScriptMessage_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  ID IVar1;

  bool bVar2;

  uint uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  cfstringStruct *local_6b8;

  undefined8 local_6b0;

  ulong local_668;

  ulong local_660;

  ulong local_5c8;

  ulong local_5c0;

  ulong local_550;

  ulong local_548;

  ulong local_500;

  ulong local_4f8;

  undefined8 local_488;

  uint local_474;

  undefined8 local_470;

  undefined8 local_468;

  long local_460;

  undefined8 local_458;

  bool local_449;

  cfstringStruct *local_448;

  byte local_439;

  undefined8 local_438;

  bool local_429;

  undefined8 local_428;

  long local_420;

  undefined8 local_418;

  long local_410;

  undefined1 auStack_408 [8];

  long local_400;

  long *local_3f8;

  undefined8 local_3c8;

  undefined8 local_3c0;

  undefined8 local_3b8;

  undefined8 local_3b0;

  byte local_3a1;

  long local_3a0;

  byte local_391;

  undefined8 local_390;

  byte local_381;

  long local_380;

  byte local_371;

  undefined8 local_370;

  undefined1 auStack_368 [8];

  long local_360;

  long *local_358;

  undefined8 local_328;

  undefined8 local_320;

  undefined8 local_318;

  undefined8 local_310;

  undefined1 auStack_308 [8];

  long local_300;

  long *local_2f8;

  undefined8 local_2c8;

  undefined1 auStack_2c0 [8];

  long local_2b8;

  long *local_2b0;

  undefined8 local_280;

  undefined8 local_278;

  undefined8 local_270;

  int local_268;

  byte local_261;

  undefined8 local_260;

  undefined8 local_258;

  undefined8 local_250;

  SEL local_248;

  ID local_240;

  undefined8 local_238;

  undefined8 local_230;

  undefined1 auStack_228 [128];

  undefined1 auStack_1a8 [128];

  undefined1 auStack_128 [128];

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_250 = 0;

  local_248 = param_2;

  local_240 = param_1;

  _objc_storeStrong(&local_250,param_3);

  local_258 = 0;

  _objc_storeStrong(&local_258,param_4);

  _objc_msgSend_frameInfo(local_258,local_488);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = _objc_msgSend_isMainFrame(uVar4,local_488);

  local_261 = 0;

  local_474 = 1;

  if ((uVar5 & 1) != 0) {

    _objc_msgSend_body(local_258,local_488);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    local_261 = 1;

    local_260 = uVar6;

    uVar7 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

    local_474 = _objc_opt_isKindOfClass(uVar6,uVar7);

    local_474 = local_474 ^ 1;

  }

  if ((local_261 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_260);

  }

  (*(code *)PTR__objc_release_00110458)(uVar4);

  if ((local_474 & 1) != 0) {

    local_268 = 1;

    goto LAB_0005901c;

  }

  _objc_msgSend_body(local_258,local_488);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_action);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _Text();

  local_270 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_assetMiss);

  if ((uVar5 & 1) == 0) {

    uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_scrolling);

    if ((uVar5 & 1) != 0) {

      _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_488);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_systemUptime(uVar4,local_488);

      _objc_msgSend_setLastWebScrollTime_(local_240,local_488);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      goto LAB_00059004;

    }

    uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_seen);

    if ((uVar5 & 1) != 0) {

      _objc_msgSend_body(local_258,local_488);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_ids);

      local_310 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar4);

      uVar4 = local_310;

      uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

      uVar5 = _objc_opt_isKindOfClass(uVar4,uVar6);

      if ((uVar5 & 1) != 0) {

        uVar5 = _objc_msgSend_count(local_310,local_488);

        if (uVar5 < 0x28 || uVar5 - 0x28 == 0) {

          _objc_msgSend_setPendingSeenIDs_(uVar5 - 0x28,local_240,local_488,local_310);

          _objc_msgSend_acknowledgeSeenItems(local_240,local_488);

        }

      }

      _objc_storeStrong(&local_310,0);

      goto LAB_00059004;

    }

    uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_visible);

    if ((uVar5 & 1) == 0) {

      uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_restore);

      if ((uVar5 & 1) == 0) {

        uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_refresh);

        if ((uVar5 & 1) == 0) {

          uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_more);

          if ((uVar5 & 1) == 0) {

            uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_emoji);

            if ((uVar5 & 1) == 0) {

              uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_gallery);

              IVar1 = local_240;

              if ((uVar5 & 1) == 0) {

                uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_cacheManager);

                if ((uVar5 & 1) == 0) {

                  uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_customizeHeader);

                  if ((uVar5 & 1) == 0) {

                    uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_myMoments);

                    if ((uVar5 & 1) == 0) {

                      uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_native);

                      if ((uVar5 & 1) == 0) {

                        uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_messages);

                        if ((uVar5 & 1) == 0) {

                          uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_publish);

                          if ((uVar5 & 1) == 0) {

                            uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_follow);

                            if ((uVar5 & 1) == 0) {

                              uVar5 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_hide);

                              if (((uVar5 & 1) == 0) &&

                                 (uVar5 = _objc_msgSend_isEqualToString_

                                                    (local_270,local_488,&cf_unhide),

                                 (uVar5 & 1) == 0)) {

                                uVar5 = _objc_msgSend_isEqualToString_

                                                  (local_270,local_488,&cf_authorProfile);

                                if (((uVar5 & 1) == 0) &&

                                   (uVar5 = _objc_msgSend_isEqualToString_

                                                      (local_270,local_488,&cf_authorChat),

                                   (uVar5 & 1) == 0)) {

                                  uVar5 = _objc_msgSend_isEqualToString_

                                                    (local_270,local_488,&cf_detail);

                                  if ((uVar5 & 1) != 0) {

                                    _objc_msgSend_body(local_258,local_488);

                                    uVar4 = _objc_retainAutoreleasedReturnValue();

                                    _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_id);

                                    uVar6 = _objc_retainAutoreleasedReturnValue();

                                    _Text();

                                    local_470 = _objc_retainAutoreleasedReturnValue();

                                    (*(code *)PTR__objc_release_00110458)(uVar6);

                                    (*(code *)PTR__objc_release_00110458)(uVar4);

                                    _objc_msgSend_cachedRows(local_240,local_488);

                                    uVar4 = _objc_retainAutoreleasedReturnValue();

                                    _objc_msgSend_objectForKeyedSubscript_

                                              (uVar4,local_488,local_470);

                                    uVar6 = _objc_retainAutoreleasedReturnValue();

                                    _objc_msgSend_objectForKeyedSubscript_

                                              (uVar6,local_488,&cf_video);

                                    uVar7 = _objc_retainAutoreleasedReturnValue();

                                    uVar3 = _objc_msgSend_boolValue(uVar7,local_488);

                                    (*(code *)PTR__objc_release_00110458)(uVar7);

                                    (*(code *)PTR__objc_release_00110458)(uVar6);

                                    (*(code *)PTR__objc_release_00110458)(uVar4);

                                    if ((uVar3 & 1) == 0) {

                                      _objc_msgSend_openNativeDetail_(local_240,local_488,local_470)

                                      ;

                                    }

                                    else {

                                      _objc_msgSend_openVideo_(local_240,local_488,local_470);

                                    }

                                    _objc_storeStrong(&local_470,0);

                                  }

                                }

                                else {

                                  IVar1 = local_240;

                                  _objc_msgSend_body(local_258,local_488);

                                  uVar4 = _objc_retainAutoreleasedReturnValue();

                                  _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_id);

                                  uVar6 = _objc_retainAutoreleasedReturnValue();

                                  _Text();

                                  uVar7 = _objc_retainAutoreleasedReturnValue();

                                  uVar8 = _objc_msgSend_isEqualToString_

                                                    (local_270,local_488,&cf_authorChat);

                                  _objc_msgSend_openAuthor_chat_(IVar1,local_488,uVar7,uVar8);

                                  (*(code *)PTR__objc_release_00110458)(uVar7);

                                  (*(code *)PTR__objc_release_00110458)(uVar6);

                                  (*(code *)PTR__objc_release_00110458)(uVar4);

                                }

                              }

                              else {

                                IVar1 = local_240;

                                _objc_msgSend_body(local_258,local_488);

                                uVar4 = _objc_retainAutoreleasedReturnValue();

                                _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_id);

                                uVar6 = _objc_retainAutoreleasedReturnValue();

                                _Text();

                                uVar7 = _objc_retainAutoreleasedReturnValue();

                                uVar8 = _objc_msgSend_isEqualToString_(local_270,local_488,&cf_hide)

                                ;

                                _objc_msgSend_setUser_hidden_(IVar1,local_488,uVar7,uVar8);

                                (*(code *)PTR__objc_release_00110458)(uVar7);

                                (*(code *)PTR__objc_release_00110458)(uVar6);

                                (*(code *)PTR__objc_release_00110458)(uVar4);

                              }

                            }

                            else {

                              _objc_msgSend_body(local_258,local_488);

                              uVar4 = _objc_retainAutoreleasedReturnValue();

                              _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_id);

                              uVar6 = _objc_retainAutoreleasedReturnValue();

                              _Text();

                              local_468 = _objc_retainAutoreleasedReturnValue();

                              (*(code *)PTR__objc_release_00110458)(uVar6);

                              (*(code *)PTR__objc_release_00110458)(uVar4);

                              lVar9 = _objc_msgSend_length(local_468,local_488);

                              if (lVar9 != 0) {

                                _objc_msgSend_toggleFollowing_(local_240,local_488,local_468);

                              }

                              _objc_storeStrong(&local_468,0);

                            }

                          }

                          else {

                            _objc_msgSend_host(local_240,local_488);

                            uVar4 = _objc_retainAutoreleasedReturnValue();

                            _objc_msgSend_host(local_240,local_488);

                            uVar6 = _objc_retainAutoreleasedReturnValue();

                            local_238 = uVar6;

                            _objc_msgSend_arrayWithObjects_count_

                                      (&_OBJC_CLASS___NSArray,local_488,&local_238,1);

                            uVar7 = _objc_retainAutoreleasedReturnValue();

                            _Call(uVar4,&cf_openAlbumAndPublish_);

                            lVar9 = _objc_retainAutoreleasedReturnValue();

                            (*(code *)PTR__objc_release_00110458)();

                            (*(code *)PTR__objc_release_00110458)(uVar7);

                            (*(code *)PTR__objc_release_00110458)(uVar6);

                            (*(code *)PTR__objc_release_00110458)(uVar4);

                            if (lVar9 == 0) {

                              _objc_msgSend_host(local_240,local_488);

                              uVar4 = _objc_retainAutoreleasedReturnValue();

                              _Call(uVar4,&cf_openAlbum,PTR____NSArray0__struct_00110718);

                              _objc_unsafeClaimAutoreleasedReturnValue();

                              (*(code *)PTR__objc_release_00110458)(uVar4);

                            }

                          }

                        }

                        else {

                          _objc_msgSend_openMessages(local_240,local_488);

                        }

                      }

                      else {

                        _objc_msgSend_host(local_240,local_488);

                        uVar4 = _objc_retainAutoreleasedReturnValue();

                        _Call(uVar4,&cf_openAlbum,PTR____NSArray0__struct_00110718);

                        _objc_unsafeClaimAutoreleasedReturnValue();

                        (*(code *)PTR__objc_release_00110458)(uVar4);

                      }

                    }

                    else {

                      _objc_msgSend_openMyMoments(local_240,local_488);

                    }

                  }

                  else {

                    _objc_msgSend_customizeHeader(local_240,local_488);

                  }

                }

                else {

                  _objc_msgSend_openCacheManager(local_240,local_488);

                }

              }

              else {

                _objc_msgSend_body(local_258,local_488);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_id);

                uVar6 = _objc_retainAutoreleasedReturnValue();

                _Text();

                uVar7 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_openGallery_(IVar1,local_488);

                (*(code *)PTR__objc_release_00110458)(uVar7);

                (*(code *)PTR__objc_release_00110458)(uVar6);

                (*(code *)PTR__objc_release_00110458)(uVar4);

              }

            }

            else {

              _objc_msgSend_body(local_258,local_488);

              uVar4 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_tokens);

              local_3b0 = _objc_retainAutoreleasedReturnValue();

              (*(code *)PTR__objc_release_00110458)(uVar4);

              uVar4 = local_3b0;

              uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

              uVar5 = _objc_opt_isKindOfClass(uVar4,uVar6);

              if ((uVar5 & 1) == 0) {

LAB_00058268:

                local_268 = 1;

              }

              else {

                uVar5 = _objc_msgSend_count(local_3b0,local_488);

                if (0x4f < uVar5 && uVar5 - 0x50 != 0) goto LAB_00058268;

                _objc_msgSend_emojiImages(uVar5 - 0x50,local_240,local_488);

                lVar9 = _objc_retainAutoreleasedReturnValue();

                (*(code *)PTR__objc_release_00110458)();

                if (lVar9 == 0) {

                  uVar4 = _objc_opt_new(&_OBJC_CLASS___NSCache);

                  _objc_msgSend_setEmojiImages_(local_240,local_488);

                  (*(code *)PTR__objc_release_00110458)(uVar4);

                  _objc_msgSend_emojiImages(local_240,local_488);

                  uVar4 = _objc_retainAutoreleasedReturnValue();

                  _objc_msgSend_setCountLimit_(uVar4,local_488,0x100);

                  (*(code *)PTR__objc_release_00110458)(uVar4);

                }

                uVar4 = _NSClassFromString(&cf_EmoticonParser);

                _Call(uVar4,&cf_newInstance,PTR____NSArray0__struct_00110718);

                local_3b8 = _objc_retainAutoreleasedReturnValue();

                local_3c0 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

                _memset(auStack_408,0,0x40);

                uVar4 = (*(code *)PTR__objc_retain_00110460)(local_3b0);

                local_660 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                      (uVar4,local_488,auStack_408,auStack_228,0x10);

                if (local_660 != 0) {

                  lVar9 = *local_3f8;

                  local_668 = 0;

                  do {

                    do {

                      if (*local_3f8 - lVar9 != 0) {

                        _objc_enumerationMutation(*local_3f8 - lVar9,uVar4);

                      }

                      uVar7 = *(undefined8 *)(local_400 + local_668 * 8);

                      local_3c8 = uVar7;

                      uVar6 = _objc_opt_class(&_OBJC_CLASS___NSString);

                      uVar5 = _objc_opt_isKindOfClass(uVar7,uVar6);

                      if ((uVar5 & 1) != 0) {

                        uVar5 = _objc_msgSend_length(local_3c8,local_488);

                        if (((uVar5 < 0x28 || uVar5 - 0x28 == 0) &&

                            (uVar5 = _objc_msgSend_hasPrefix_

                                               (uVar5 - 0x28,local_3c8,local_488,&cf__),

                            (uVar5 & 1) != 0)) &&

                           (uVar5 = _objc_msgSend_hasSuffix_(local_3c8,local_488,&cf__),

                           (uVar5 & 1) != 0)) {

                          _objc_msgSend_emojiImages(local_240,local_488);

                          uVar6 = _objc_retainAutoreleasedReturnValue();

                          _objc_msgSend_objectForKey_(uVar6,local_488,local_3c8);

                          local_410 = _objc_retainAutoreleasedReturnValue();

                          (*(code *)PTR__objc_release_00110458)(uVar6);

                          uVar6 = local_3b8;

                          if (local_410 == 0) {

                            local_230 = local_3c8;

                            _objc_msgSend_arrayWithObjects_count_

                                      (&_OBJC_CLASS___NSArray,local_488,&local_230,1);

                            uVar7 = _objc_retainAutoreleasedReturnValue();

                            _Call(uVar6,&cf_getImageForText_);

                            local_418 = _objc_retainAutoreleasedReturnValue();

                            (*(code *)PTR__objc_release_00110458)(uVar7);

                            uVar6 = local_418;

                            uVar7 = _objc_opt_class(&_OBJC_CLASS___UIImage);

                            uVar5 = _objc_opt_isKindOfClass(uVar6,uVar7);

                            local_429 = false;

                            bVar2 = (uVar5 & 1) == 0;

                            if (bVar2) {

                              local_6b0 = 0;

                            }

                            else {

                              _UIImagePNGRepresentation(local_418);

                              local_6b0 = _objc_retainAutoreleasedReturnValue();

                              local_428 = local_6b0;

                            }

                            local_429 = !bVar2;

                            local_420 = (*(code *)PTR__objc_retain_00110460)(local_6b0);

                            if ((local_429 & 1U) != 0) {

                              (*(code *)PTR__objc_release_00110458)(local_428);

                            }

                            local_439 = 0;

                            local_449 = false;

                            bVar2 = local_420 == 0;

                            if (bVar2) {

                              local_6b8 = &cf___;

                            }

                            else {

                              _objc_msgSend_base64EncodedStringWithOptions_(local_420,local_488,0);

                              local_438 = _objc_retainAutoreleasedReturnValue();

                              local_439 = 1;

                              _objc_msgSend_stringByAppendingString_

                                        (&cf_data_image_png_base64_,local_488);

                              local_6b8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                              local_448 = local_6b8;

                            }

                            local_449 = !bVar2;

                            _objc_storeStrong(&local_410,local_6b8);

                            if ((local_449 & 1U) != 0) {

                              (*(code *)PTR__objc_release_00110458)(local_448);

                            }

                            if ((local_439 & 1) != 0) {

                              (*(code *)PTR__objc_release_00110458)(local_438);

                            }

                            _objc_msgSend_emojiImages(local_240,local_488);

                            uVar6 = _objc_retainAutoreleasedReturnValue();

                            _objc_msgSend_setObject_forKey_(uVar6,local_488,local_410,local_3c8);

                            (*(code *)PTR__objc_release_00110458)(uVar6);

                            _objc_storeStrong(&local_420);

                            _objc_storeStrong(&local_418,0);

                          }

                          _objc_msgSend_setObject_forKeyedSubscript_

                                    (local_3c0,local_488,local_410,local_3c8);

                          _objc_storeStrong(&local_410,0);

                        }

                      }

                      local_668 = local_668 + 1;

                    } while (local_668 < local_660);

                    local_660 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                          (uVar4,local_488,auStack_408,auStack_228,0x10);

                    local_668 = 0;

                  } while (local_660 != 0);

                }

                (*(code *)PTR__objc_release_00110458)(uVar4);

                _objc_msgSend_dataWithJSONObject_options_error_

                          (&_OBJC_CLASS___NSJSONSerialization,local_488,local_3c0,0,0);

                local_458 = _objc_retainAutoreleasedReturnValue();

                uVar4 = _objc_alloc(&_OBJC_CLASS___NSString);

                local_460 = _objc_msgSend_initWithData_encoding_(uVar4,local_488,local_458,4);

                _objc_msgSend_web(local_240,local_488);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_stringWithFormat_

                          (&_OBJC_CLASS___NSString,local_488,&cf_installEmoji____);

                uVar6 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_evaluateJavaScript_completionHandler_(uVar4,local_488);

                (*(code *)PTR__objc_release_00110458)(uVar6);

                (*(code *)PTR__objc_release_00110458)(uVar4);

                _objc_storeStrong(&local_460,0);

                _objc_storeStrong(&local_458,0);

                _objc_storeStrong(&local_3c0,0);

                _objc_storeStrong(&local_3b8,0);

                local_268 = 0;

              }

              _objc_storeStrong(&local_3b0,0);

              if (local_268 != 0) goto LAB_0005900c;

            }

          }

          else {

            _objc_msgSend_requestTimelineMore(local_240,local_488);

          }

        }

        else {

          _objc_msgSend_refreshHead(local_240,local_488);

        }

      }

      else {

        _objc_msgSend_host(local_240,local_488);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_wcm_toggleFeed(uVar4,local_488);

        (*(code *)PTR__objc_release_00110458)(uVar4);

      }

      goto LAB_00059004;

    }

    _objc_msgSend_body(local_258,local_488);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_ids);

    local_318 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar4);

    uVar4 = local_318;

    uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    uVar5 = _objc_opt_isKindOfClass(uVar4,uVar6);

    if (((uVar5 & 1) == 0) || (uVar5 = _objc_msgSend_count(local_318,local_488), 0x28 < uVar5)) {

      local_268 = 1;

    }

    else {

      local_320 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);

      _memset(auStack_368,0,0x40);

      uVar4 = (*(code *)PTR__objc_retain_00110460)(local_318);

      local_5c0 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar4,local_488,auStack_368,auStack_1a8,0x10);

      if (local_5c0 != 0) {

        lVar9 = *local_358;

        local_5c8 = 0;

        do {

          do {

            if (*local_358 - lVar9 != 0) {

              _objc_enumerationMutation(*local_358 - lVar9,uVar4);

            }

            uVar7 = *(undefined8 *)(local_360 + local_5c8 * 8);

            local_328 = uVar7;

            uVar6 = _objc_opt_class(&_OBJC_CLASS___NSString);

            uVar5 = _objc_opt_isKindOfClass(uVar7,uVar6);

            local_371 = 0;

            local_381 = 0;

            local_391 = 0;

            local_3a1 = 0;

            bVar2 = false;

            if ((uVar5 & 1) != 0) {

              _objc_msgSend_items(local_240,local_488);

              local_370 = _objc_retainAutoreleasedReturnValue();

              local_371 = 1;

              _objc_msgSend_objectForKeyedSubscript_(local_370,local_488,local_328);

              local_380 = _objc_retainAutoreleasedReturnValue();

              local_381 = 1;

              bVar2 = true;

              if (local_380 == 0) {

                _objc_msgSend_cachedRows(local_240,local_488);

                local_390 = _objc_retainAutoreleasedReturnValue();

                local_391 = 1;

                _objc_msgSend_objectForKeyedSubscript_(local_390,local_488,local_328);

                local_3a0 = _objc_retainAutoreleasedReturnValue();

                local_3a1 = 1;

                bVar2 = local_3a0 != 0;

              }

            }

            if ((local_3a1 & 1) != 0) {

              (*(code *)PTR__objc_release_00110458)(local_3a0);

            }

            if ((local_391 & 1) != 0) {

              (*(code *)PTR__objc_release_00110458)(local_390);

            }

            if ((local_381 & 1) != 0) {

              (*(code *)PTR__objc_release_00110458)(local_380);

            }

            if ((local_371 & 1) != 0) {

              (*(code *)PTR__objc_release_00110458)(local_370);

            }

            if (bVar2) {

              _objc_msgSend_addObject_(local_320,local_488,local_328);

            }

            local_5c8 = local_5c8 + 1;

          } while (local_5c8 < local_5c0);

          local_5c0 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                (uVar4,local_488,auStack_368,auStack_1a8,0x10);

          local_5c8 = 0;

        } while (local_5c0 != 0);

      }

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _objc_msgSend_visibleIDs(local_240,local_488);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      uVar3 = _objc_msgSend_isEqualToSet_(uVar4,local_488,local_320);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      if ((uVar3 & 1) == 0) {

        _objc_msgSend_setVisibleIDs_(local_240,local_488,local_320);

        _objc_msgSend_scheduleMediaReload(local_240,local_488);

      }

      _objc_storeStrong(&local_320,0);

      local_268 = 0;

    }

    _objc_storeStrong(&local_318,0);

    if (local_268 == 0) goto LAB_00059004;

  }

  else {

    _Trace(&cf_web_asset_error,PTR____NSDictionary0__struct_00110720);

    _objc_msgSend_body(local_258,local_488);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectForKeyedSubscript_(uVar4,local_488,&cf_id);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _Text();

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_stringByAppendingString_(uVar7,local_488,&cf__);

    local_278 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar7);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _memset(auStack_2c0,0,0x40);

    _objc_msgSend_renderKeys(local_240,local_488);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_allKeys(uVar4,local_488);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_4f8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                          (uVar6,local_488,auStack_2c0,auStack_a8,0x10);

    if (local_4f8 != 0) {

      lVar9 = *local_2b0;

      local_500 = 0;

      do {

        do {

          if (*local_2b0 - lVar9 != 0) {

            _objc_enumerationMutation(*local_2b0 - lVar9,uVar6);

          }

          local_280 = *(undefined8 *)(local_2b8 + local_500 * 8);

          uVar5 = _objc_msgSend_hasPrefix_(local_280,local_488,local_278);

          if ((uVar5 & 1) != 0) {

            _objc_msgSend_renderKeys(local_240,local_488);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_removeObjectForKey_(uVar4,local_488,local_280);

            (*(code *)PTR__objc_release_00110458)(uVar4);

          }

          local_500 = local_500 + 1;

        } while (local_500 < local_4f8);

        local_4f8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar6,local_488,auStack_2c0,auStack_a8,0x10);

        local_500 = 0;

      } while (local_4f8 != 0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar6);

    _memset(auStack_308,0,0x40);

    _objc_msgSend_renderQualities(local_240,local_488);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_allKeys(uVar4,local_488);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_548 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                          (uVar6,local_488,auStack_308,auStack_128,0x10);

    if (local_548 != 0) {

      lVar9 = *local_2f8;

      local_550 = 0;

      do {

        do {

          if (*local_2f8 - lVar9 != 0) {

            _objc_enumerationMutation(*local_2f8 - lVar9,uVar6);

          }

          local_2c8 = *(undefined8 *)(local_300 + local_550 * 8);

          uVar5 = _objc_msgSend_hasPrefix_(local_2c8,local_488,local_278);

          if ((uVar5 & 1) != 0) {

            _objc_msgSend_renderQualities(local_240,local_488);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_removeObjectForKey_(uVar4,local_488,local_2c8);

            (*(code *)PTR__objc_release_00110458)(uVar4);

          }

          local_550 = local_550 + 1;

        } while (local_550 < local_548);

        local_548 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar6,local_488,auStack_308,auStack_128,0x10);

        local_550 = 0;

      } while (local_548 != 0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar6);

    _objc_msgSend_images(local_240,local_488);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeAllObjects(uVar4,local_488);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_reloadFeed(local_240,local_488);

    _objc_storeStrong(&local_278,0);

LAB_00059004:

    local_268 = 0;

  }

LAB_0005900c:

  _objc_storeStrong(&local_270,0);

LAB_0005901c:

  _objc_storeStrong(&local_258);

  _objc_storeStrong(&local_250,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}




