// FUN_002f9c48 @ 002f9c48

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002f9c48(undefined8 param_1,byte param_2,byte param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_2c0;
  undefined *local_2b0;
  int local_27c;
  undefined *local_248;
  undefined *local_240;
  undefined *local_200;
  undefined *local_1d8;
  undefined *local_198;
  undefined *local_190;
  byte local_181;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  undefined *local_c0;
  byte local_b2;
  byte local_b1;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (undefined *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_c0 = (undefined *)0x0;
  local_b2 = param_3;
  local_b1 = param_2;
  _objc_storeStrong(&local_c0,param_4);
  if (local_b0 == (undefined *)0x0) {
    local_c4 = 1;
  }
  else {
    puVar2 = local_b0;
    _objc_getAssociatedObject(local_b0,&DAT_026dfdc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 0;
      local_1d8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_1d8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_1d8;
      }
      local_d9 = puVar2 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = local_1d8;
      if ((local_d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_setAssociatedObject(local_b0,&DAT_026dfdc0,local_d0,1);
      _objc_storeStrong(&local_d0,0);
    }
    puVar3 = local_b0;
    FUN_002fbd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar4 = local_b0;
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_200 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_200 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8,local_200);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_f8 = (undefined *)0x0;
    puVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_f8;
    local_f8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_f8 != (undefined *)0x0) &&
       (puVar2 = local_f0,
       (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_containsObject__0269cbb8,local_f8),
       ((ulong)puVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
    }
    _memset(auStack_158,0,0x40);
    puVar2 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_240 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_240 != (undefined *)0x0) {
      lVar5 = *local_148;
      local_248 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar5 != 0) {
            _objc_enumerationMutation(*local_148 - lVar5,puVar2);
          }
          uVar6 = *(ulong *)(local_150 + (long)local_248 * 8);
          local_118 = uVar6;
          FUN_002faeac();
          if ((uVar6 & 1) != 0) {
            FUN_002fbe60(local_b0,local_118);
            if ((local_b1 & 1) == 0) {
              puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSValue_026ce1f0,
                         PTR_s_valueWithNonretainedObject__026a1fc0,local_118);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_e8;
              local_160 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,puVar3);
              _objc_retainAutoreleasedReturnValue();
              local_168 = puVar4;
              FUN_002fa9a0(local_118,0);
              puVar3 = local_168;
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
              if (((ulong)puVar3 & 1) == 0) {
                FUN_002fad14(local_118,0);
                FUN_002fade8(local_118);
              }
              else {
                puVar3 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_hidden);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_168;
                local_170 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_alpha);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = local_118;
                local_178 = puVar4;
                if (local_170 == (undefined *)0x0) {
                  local_27c = 0;
                }
                else {
                  puVar3 = local_170;
                  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_boolValue_026ca540);
                  local_27c = (int)puVar3;
                }
                FUN_002fad14(local_27c,uVar6,local_27c != 0);
                uVar6 = local_118;
                if (local_178 != (undefined *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_doubleValue_026ca608);
                }
                FUN_002fade8(uVar6);
                _objc_storeStrong(&local_178);
                _objc_storeStrong(&local_170,0);
              }
              _objc_storeStrong(&local_168);
              _objc_storeStrong(&local_160,0);
            }
            else {
              FUN_002fa9a0(local_118,1);
            }
          }
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        local_248 = (undefined *)0x0;
      } while (local_240 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_b2 & 1) == 0) {
      local_2c0 = local_b0;
      _objc_getAssociatedObject(local_b0,&DAT_026dfdc0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = local_2c0 == (undefined *)0x0;
      local_190 = local_2c0;
      if (bVar1) {
        local_198 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        local_2c0 = local_198;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888,local_2c0);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_198);
      }
      _objc_storeStrong(&local_190,0);
    }
    else {
      local_2b0 = local_c0;
      local_181 = 0;
      bVar1 = local_c0 == (undefined *)0x0;
      if (bVar1) {
        local_2b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        local_180 = local_2b0;
      }
      local_181 = bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888,local_2b0);
      if ((local_181 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_180);
      }
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

