// FUN_0028b2f8 @ 0028b2f8

void FUN_0028b2f8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint local_250;
  undefined *local_208;
  undefined *local_200;
  ulong local_1c8;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  ulong local_188;
  ulong local_180;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  ulong local_160;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  uint local_100;
  byte local_f9;
  ulong local_f8;
  ulong local_f0 [3];
  ulong local_d8;
  ulong local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  uVar1 = local_d0;
  FUN_0027b798();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_d0;
  local_d8 = uVar1;
  FUN_00276030();
  _objc_retainAutoreleasedReturnValue();
  local_f9 = 0;
  local_1c8 = uVar2;
  if (uVar2 == 0) {
    local_1c8 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_1c8;
  }
  local_f9 = uVar2 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0[0] = local_1c8;
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_f0[0] == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R_b);
    local_100 = 1;
  }
  else {
    FUN_00276920();
    local_48 = &cf_coverPath;
    local_40 = &cf_fullCoverPath;
    local_38 = &cf_thumbPath;
    local_30 = &cf_fullScreenThumbPath;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar3;
    _memset(auStack_150,0,0x40);
    puVar3 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_200 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_c8,0x10);
    if (local_200 != (undefined *)0x0) {
      lVar5 = *local_140;
      local_208 = (undefined *)0x0;
      do {
        do {
          if (*local_140 - lVar5 != 0) {
            _objc_enumerationMutation(*local_140 - lVar5,puVar3);
          }
          uVar6 = *(undefined8 *)(local_148 + (long)local_208 * 8);
          local_110 = uVar6;
          _NSSelectorFromString();
          uVar1 = local_f0[0];
          local_158 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0[0],PTR_s_respondsToSelector__026ca818,uVar6);
          if ((uVar1 & 1) != 0) {
            uVar1 = local_f0[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],local_158);
            _objc_retainAutoreleasedReturnValue();
            local_169 = 0;
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_160 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
            local_250 = 1;
            if ((uVar1 & 1) != 0) {
              puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              local_169 = 1;
              local_168 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_250 = (uint)puVar4 ^ 1;
            }
            if ((local_169 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_168);
            }
            if ((local_250 & 1) == 0) {
              puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                         local_160);
              _objc_retainAutoreleasedReturnValue();
              local_178 = puVar4;
              if (puVar4 == (undefined *)0x0) {
                local_100 = 3;
              }
              else {
                FUN_00294e24(puVar4,local_160);
                local_100 = 1;
              }
              _objc_storeStrong(&local_178,0);
            }
            else {
              local_100 = 3;
            }
            _objc_storeStrong(&local_160,0);
            if (local_100 != 3) goto LAB_0028b91c;
          }
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_c8,
                   0x10);
        local_208 = (undefined *)0x0;
      } while (local_200 != (undefined *)0x0);
    }
    local_100 = 0;
LAB_0028b91c:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_100 == 0) {
      uVar2 = local_f0[0];
      FUN_0028717c();
      _objc_retainAutoreleasedReturnValue();
      local_180 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      uVar1 = local_180;
      if (uVar2 != 0) {
        local_1a8 = PTR___NSConcreteStackBlock_02578660;
        local_1a0 = 0xc2000000;
        local_19c = 0;
        local_198 = FUN_00295528;
        local_190 = &DAT_0257b6f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_188 = uVar1;
        FUN_00294fd4(uVar1,&local_1a8);
        _objc_storeStrong(&local_188,0);
      }
      else {
        FUN_0028e9e4(&cf__g_b0R_b0W_W);
      }
      local_100 = (uint)(uVar2 == 0);
      _objc_storeStrong(&local_180,0);
    }
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(local_f0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

