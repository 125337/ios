// mergedProfile: @ 0160992c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRSuperFloatProfileStore::mergedProfile_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ID local_2b0;
  undefined *local_250;
  undefined *local_248;
  bool local_199;
  ID local_198;
  ID local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  byte local_12c;
  byte local_12b;
  byte local_12a;
  byte local_129;
  ID local_128;
  byte local_119;
  ID local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  ID local_f0;
  ID local_e8;
  ulong local_e0;
  SEL local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  IVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_defaultProfileDictionary_026b1840);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e8 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar5 = local_e0;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar7 = local_e0;
  IVar2 = local_e8;
  if ((uVar5 & 1) != 0) {
    local_110 = PTR___NSConcreteGlobalBlock_02578658;
    local_108 = 0xd0800000;
    local_104 = 0;
    local_100 = FUN_0160a614;
    local_f8 = &DAT_02579a30;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_110);
    _objc_storeStrong(&local_f0,0);
  }
  IVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_119 = 0;
  bVar1 = true;
  if ((IVar3 & 1) != 0) {
    IVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_119 = 1;
    local_118 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 0;
  }
  if ((local_119 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,&cf_id);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  IVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_129 = 0;
  bVar1 = true;
  if ((IVar3 & 1) != 0) {
    IVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_129 = 1;
    local_128 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 0;
  }
  if ((local_129 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,&cf__g_TT,&cf_name);
  }
  IVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_ballAppearance);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_12b = IVar3 != 0;
  local_12c = 0;
  local_12a = IVar3 == 0;
  _memset(auStack_178,0,0x40);
  local_c8 = &cf_ballGestureSwipeUp;
  local_c0 = &cf_ballGestureSwipeDown;
  local_b8 = &cf_ballGestureSwipeLeft;
  local_b0 = &cf_ballGestureSwipeRight;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_248 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_248 != (undefined *)0x0) {
    lVar8 = *local_168;
    local_250 = (undefined *)0x0;
    do {
      do {
        if (*local_168 - lVar8 != 0) {
          _objc_enumerationMutation(*local_168 - lVar8,puVar4);
        }
        local_138 = *(undefined8 *)(local_170 + (long)local_250 * 8);
        IVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,local_138);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_180 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar6);
        if (((IVar2 & 1) == 0) ||
           (IVar2 = local_180,
           (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0), IVar2 == 0)) {
          bVar1 = false;
        }
        else {
          local_12c = 1;
          bVar1 = true;
        }
        _objc_storeStrong(&local_180,0);
        if (bVar1) goto LAB_0160a09c;
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10)
      ;
      local_250 = (undefined *)0x0;
    } while (local_248 != (undefined *)0x0);
  }
LAB_0160a09c:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar5 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuOpenTrigger);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar5);
  if ((((local_12b & 1) != 0) && ((local_12c & 1) != 0)) && ((uVar7 & 1) == 0)) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_menuOpenTrigger);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_wcr_sf_drag_ball,
               &cf_ballGestureLongPress);
  }
  if ((local_12a & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_triggerMode);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_wcr_sf_drag_ball,
               &cf_ballGestureLongPress);
    IVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuOpenTrigger);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_199 = (IVar3 & 1) == 0;
    if (local_199) {
      local_2b0 = 2;
    }
    else {
      local_198 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuOpenTrigger);
      _objc_retainAutoreleasedReturnValue();
      local_2b0 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_199 = !local_199;
    if (local_199) {
      (*(code *)PTR__objc_release_02578630)(local_198);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_2b0 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_menuOpenTrigger);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  IVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_actions);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,
               *(undefined8 *)PTR____NSArray0___02578280,&cf_actions);
  }
  IVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_urlSchemes);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,
               *(undefined8 *)PTR____NSArray0___02578280,&cf_urlSchemes);
  }
  IVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

