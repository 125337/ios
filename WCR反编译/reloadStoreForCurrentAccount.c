// reloadStoreForCurrentAccount @ 0110d468

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::reloadStoreForCurrentAccount(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID local_560;
  undefined8 *local_508;
  undefined8 *local_4f0;
  ID local_498;
  ID local_488;
  undefined8 *local_478;
  undefined8 *local_468;
  undefined *local_458;
  undefined *local_448;
  undefined *local_438;
  undefined *local_428;
  undefined *local_418;
  undefined *local_408;
  undefined *local_3f8;
  undefined *local_3e8;
  undefined *local_3d8;
  undefined *local_3c8;
  undefined *local_3b8;
  undefined *local_3a8;
  undefined *local_398;
  undefined *local_388;
  undefined *local_378;
  undefined *local_368;
  undefined *local_358;
  undefined *local_348;
  undefined *local_338;
  undefined *local_328;
  undefined *local_318;
  undefined *local_308;
  undefined *local_2f8;
  undefined *local_2e8;
  undefined *local_2d8;
  undefined *local_2c8;
  undefined *local_2b8;
  undefined8 *local_2a8;
  bool local_299;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined8 *local_278;
  undefined *local_270;
  SEL local_268;
  ID local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_270 = (undefined *)0x0;
  puVar2 = &local_280;
  local_280 = 0;
  local_268 = param_2;
  local_260 = param_1;
  FUN_0110ec80();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_270,local_280);
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_278 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_288 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_288;
  (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    puVar4 = local_270;
    FUN_0110d24c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_288;
    local_288 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = local_288;
  (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    _objc_storeStrong(&local_288,&cf___pending_account__);
  }
  puVar2 = local_278;
  (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_objectForKeyedSubscript__0269d098,local_288)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar5 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_299 = ((ulong)puVar5 & 1) == 0;
  if (local_299) {
    local_4f0 = (undefined8 *)0x0;
  }
  else {
    local_4f0 = local_278;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_278,PTR_s_objectForKeyedSubscript__0269d098,local_288);
    _objc_retainAutoreleasedReturnValue();
    local_298 = local_4f0;
  }
  local_299 = !local_299;
  (*(code *)PTR__objc_retain_02578638)();
  local_290 = local_4f0;
  if (local_299) {
    (*(code *)PTR__objc_release_02578630)(local_298);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setOwnerWxid__026aeed0,local_288);
  bVar1 = local_290 == (undefined8 *)0x0;
  if (bVar1) {
    local_258 = &cf_enabled;
    local_2b8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_250 = &cf_locked;
    local_2c8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_140 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_248 = &cf_shake;
    local_2d8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_138 = local_2c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_240 = &cf_shakeToast;
    local_2e8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_130 = local_2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_238 = &cf_titleLongPress;
    local_2f8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_128 = local_2e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_230 = &cf_titleLongPressToast;
    local_308 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_120 = local_2f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_228 = &cf_titleLongPressNeedPassword;
    local_318 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_118 = local_308;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_220 = &cf_titleLongPressFaceID;
    local_328 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_110 = local_318;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_218 = &cf_titleLongPressProtectSec;
    local_338 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_108 = local_328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    local_210 = &cf_autoHideOnExit;
    local_348 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_100 = local_338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_208 = &cf_plusLongPress;
    local_358 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_f8 = local_348;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_200 = &cf_plusLongPressNeedPassword;
    local_368 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_f0 = local_358;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = &cf_plusLongPressFaceID;
    local_378 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_e8 = local_368;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = &cf_plusLongPressProtectSec;
    local_388 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_e0 = local_378;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xf);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = &cf_autoHangup;
    local_398 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_d8 = local_388;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = &cf_hangupAutoReply;
    local_3a8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_d0 = local_398;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = &cf_hangupAutoReplyText;
    local_c0 = &cf_feNeOc_TzTT__O0;
    local_1d0 = &cf_disguise;
    local_3b8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_c8 = local_3a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = &cf_foregroundDisguise;
    local_3c8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_b8 = local_3b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = &cf_messageHaptic;
    local_3d8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_b0 = local_3c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = &cf_messageHapticStyle;
    local_3e8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_a8 = local_3d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = &cf_yuanbaoAssist;
    local_3f8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_a0 = local_3e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = &cf_yuanbaoAssistText;
    local_90 = &cf_NeR;
    local_1a0 = &cf_unreadDot;
    local_408 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_98 = local_3f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_198 = &cf_unreadDotSize;
    local_418 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_88 = local_408;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,6);
    _objc_retainAutoreleasedReturnValue();
    local_190 = &cf_unreadDotShape;
    local_428 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_80 = local_418;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    local_188 = &cf_unreadDotColorLight;
    local_70 = &cf__000000;
    local_180 = &cf_unreadDotColorDark;
    local_68 = &cf__000000;
    local_178 = &cf_unreadDotPositionMode;
    local_438 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_78 = local_428;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    local_170 = &cf_unreadDotOffsetX;
    local_448 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = local_438;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    local_168 = &cf_unreadDotOffsetY;
    local_458 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = local_448;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    local_160 = &cf_disguiseTitle;
    local_48 = &cf__OR;
    local_158 = &cf_disguiseBody;
    local_40 = &cf__Og;
    local_150 = &cf_usernames;
    local_38 = *(undefined8 *)PTR____NSArray0___02578280;
    local_148 = &cf_displayNames;
    local_30 = *(undefined8 *)PTR____NSDictionary0___02578288;
    local_468 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = local_458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_140,&local_258,0x23);
    _objc_retainAutoreleasedReturnValue();
    local_508 = local_468;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_478 = local_508;
  }
  else {
    local_508 = local_290;
    (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_mutableCopy_0269d8a0);
    local_2a8 = local_508;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setStore__026aeed8,local_508);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_478);
    (*(code *)PTR__objc_release_02578630)(local_468);
    (*(code *)PTR__objc_release_02578630)(local_458);
    (*(code *)PTR__objc_release_02578630)(local_448);
    (*(code *)PTR__objc_release_02578630)(local_438);
    (*(code *)PTR__objc_release_02578630)(local_428);
    (*(code *)PTR__objc_release_02578630)(local_418);
    (*(code *)PTR__objc_release_02578630)(local_408);
    (*(code *)PTR__objc_release_02578630)(local_3f8);
    (*(code *)PTR__objc_release_02578630)(local_3e8);
    (*(code *)PTR__objc_release_02578630)(local_3d8);
    (*(code *)PTR__objc_release_02578630)(local_3c8);
    (*(code *)PTR__objc_release_02578630)(local_3b8);
    (*(code *)PTR__objc_release_02578630)(local_3a8);
    (*(code *)PTR__objc_release_02578630)(local_398);
    (*(code *)PTR__objc_release_02578630)(local_388);
    (*(code *)PTR__objc_release_02578630)(local_378);
    (*(code *)PTR__objc_release_02578630)(local_368);
    (*(code *)PTR__objc_release_02578630)(local_358);
    (*(code *)PTR__objc_release_02578630)(local_348);
    (*(code *)PTR__objc_release_02578630)(local_338);
    (*(code *)PTR__objc_release_02578630)(local_328);
    (*(code *)PTR__objc_release_02578630)(local_318);
    (*(code *)PTR__objc_release_02578630)(local_308);
    (*(code *)PTR__objc_release_02578630)(local_2f8);
    (*(code *)PTR__objc_release_02578630)(local_2e8);
    (*(code *)PTR__objc_release_02578630)(local_2d8);
    (*(code *)PTR__objc_release_02578630)(local_2c8);
    (*(code *)PTR__objc_release_02578630)(local_2b8);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_2a8);
  }
  IVar6 = local_260;
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  IVar8 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = (IVar8 & 1) == 0;
  if (bVar1) {
    local_560 = *(ID *)PTR____NSDictionary0___02578288;
  }
  else {
    local_488 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    local_560 = local_488;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_498 = local_560;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setSelectedDisplayNames__026aeee8,local_560)
  ;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_498);
    (*(code *)PTR__objc_release_02578630)(local_488);
  }
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar6 = local_260;
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar7 == 0) {
    IVar8 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar9 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar9);
    (*(code *)PTR__objc_release_02578630)(IVar8);
  }
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  if (bVar1) {
    IVar6 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar8 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar8);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  IVar6 = local_260;
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_publishRuntimeSnapshot_026aeef0);
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((((IVar6 & 1) == 0) && (FUN_0110f04c(), (IVar6 & 1) == 0)) &&
     (puVar2 = local_278, (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_count_0269cfe0),
     puVar2 != (undefined8 *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_persistStoreWithoutBroadcast_026aeef8);
  }
  _objc_storeStrong(&local_290);
  _objc_storeStrong(&local_288,0);
  _objc_storeStrong(&local_278,0);
  _objc_storeStrong(&local_270,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

