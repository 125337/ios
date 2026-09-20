// FUN_0083141c @ 0083141c

long FUN_0083141c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_268;
  undefined *local_260;
  undefined *local_1f0;
  uint local_1b4;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  long local_128;
  byte local_119;
  undefined *local_118;
  byte local_109;
  long local_108;
  undefined4 local_100;
  char *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (undefined *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = (undefined *)0x0;
  _objc_storeStrong(&local_e0,param_2);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_3);
  pcVar1 = "WCOperateFloatView";
  _objc_getClass();
  local_f0 = pcVar1;
  if ((((local_d8 == (undefined *)0x0) || (local_d8 == local_e0)) ||
      (puVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_tag_026cab98),
      puVar2 == (undefined *)0x24f6e7)) ||
     (((local_f0 != (char *)0x0 &&
       (puVar2 = local_d8,
       (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isKindOfClass__0269cd68,local_f0),
       ((ulong)puVar2 & 1) != 0)) ||
      (puVar2 = local_d8, FUN_0082e90c(local_d8,local_e0), ((ulong)puVar2 & 1) != 0)))) {
    local_d0 = 0;
  }
  else {
    local_108 = 0;
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_00831c7c();
    local_1b4 = 1;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isOpaque_0269f438);
      local_1b4 = (uint)puVar3;
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_109 = (byte)local_1b4 & 1;
    if ((local_1b4 & 1) != 0) {
      lVar6 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKey__0269e048,local_d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      lVar5 = local_e8;
      if (lVar6 == 0) {
        local_48 = &cf_color;
        puVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        local_119 = 0;
        local_1f0 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_1f0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
          _objc_retainAutoreleasedReturnValue();
          local_118 = local_1f0;
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_38 = local_1f0;
        local_40 = &cf_opaque;
        puVar4 = local_d8;
        local_119 = puVar2 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isOpaque_0269f438);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_numberWithBool__0269ce60,(ulong)puVar4 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar5,PTR_s_setObject_forKey__026ca9e8,puVar4,local_d8);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((local_119 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_118);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setOpaque__026ca9f8,0);
      local_108 = local_108 + 1;
    }
    _memset(auStack_168,0,0x40);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_260 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_c8,0x10);
    if (local_260 != (undefined *)0x0) {
      lVar5 = *local_158;
      local_268 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar5 != 0) {
            _objc_enumerationMutation(*local_158 - lVar5,puVar3);
          }
          lVar6 = *(long *)(local_160 + (long)local_268 * 8);
          local_128 = lVar6;
          FUN_0083141c(lVar6,local_e0,local_e8);
          local_108 = local_108 + lVar6;
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_c8,
                   0x10);
        local_268 = (undefined *)0x0;
      } while (local_260 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_d0 = local_108;
  }
  local_100 = 1;
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

