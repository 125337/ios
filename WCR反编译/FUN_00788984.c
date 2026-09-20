// FUN_00788984 @ 00788984

void FUN_00788984(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_350;
  undefined *local_348;
  undefined *local_2f8;
  undefined *local_2f0;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  undefined *local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  ulong local_188;
  undefined *local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168 [3];
  undefined *local_150;
  undefined4 local_144;
  ulong local_140;
  undefined *local_138;
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [128];
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  _objc_storeStrong(&local_140,param_1);
  if (local_140 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_144 = 1;
    local_138 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = local_140;
    local_150 = puVar1;
    FUN_00789dc8();
    _objc_retainAutoreleasedReturnValue();
    local_168[0] = uVar8;
    if (uVar8 == 0) {
      local_30 = local_140;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_144 = 1;
      local_138 = puVar1;
    }
    else {
      uVar8 = local_140;
      FUN_00789f4c();
      _objc_retainAutoreleasedReturnValue();
      local_170 = uVar8;
      if (uVar8 == 0) {
        uVar8 = local_168[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_168[0],PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        FUN_0078a1e0();
        (*(code *)PTR__objc_release_02578630)(uVar8);
        puVar1 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
        if ((puVar1 == (undefined *)0x0) ||
           (puVar1 = local_150,
           (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,local_140)
           , ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_140);
        }
        puVar1 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
        local_144 = 1;
        local_138 = puVar1;
      }
      else {
        uVar8 = local_168[0];
        FUN_0078a6b8();
        _objc_retainAutoreleasedReturnValue();
        local_178 = uVar8;
        if (uVar8 == 0) {
          uVar8 = local_168[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_168[0],PTR_s_contentView_026ca5a8);
          _objc_retainAutoreleasedReturnValue();
          FUN_0078a1e0();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          puVar1 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
          if ((puVar1 == (undefined *)0x0) ||
             (puVar1 = local_150,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_150,PTR_s_containsObject__0269cbb8,local_140),
             ((ulong)puVar1 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_140);
          }
          puVar1 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
          local_144 = 1;
          local_138 = puVar1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_188 = 0;
          uVar8 = local_178;
          local_180 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_respondsToSelector__026ca818,PTR_s_visibleCells_0269fc48);
          if ((uVar8 & 1) != 0) {
            uVar2 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_visibleCells_0269fc48);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = local_188;
            local_188 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar8);
          }
          uVar8 = local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
          if (uVar8 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_addObjectsFromArray__0269d540,local_188);
          }
          puVar1 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_180,PTR_s_containsObject__0269cbb8,local_168[0]);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_addObject__0269d180,local_168[0]);
          }
          _memset(auStack_1d0,0,0x40);
          puVar1 = local_180;
          (*(code *)PTR__objc_retain_02578638)();
          local_2f0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_b0,
                     0x10);
          if (local_2f0 != (undefined *)0x0) {
            lVar6 = *local_1c0;
            local_2f8 = (undefined *)0x0;
            do {
              do {
                if (*local_1c0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1c0 - lVar6,puVar1);
                }
                local_190 = *(undefined8 *)(local_1c8 + (long)local_2f8 * 8);
                puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = local_190;
                local_1d8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_contentView_026ca5a8);
                _objc_retainAutoreleasedReturnValue();
                FUN_0078a1e0();
                (*(code *)PTR__objc_release_02578630)(uVar4);
                _memset(auStack_220,0,0x40);
                puVar3 = local_1d8;
                (*(code *)PTR__objc_retain_02578638)();
                local_348 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                           auStack_130,0x10);
                if (local_348 != (undefined *)0x0) {
                  lVar7 = *local_210;
                  local_350 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_210 - lVar7 != 0) {
                        _objc_enumerationMutation(*local_210 - lVar7,puVar3);
                      }
                      uVar8 = *(ulong *)(local_218 + (long)local_350 * 8);
                      local_1e0 = uVar8;
                      FUN_00789f4c();
                      _objc_retainAutoreleasedReturnValue();
                      local_228 = uVar8;
                      if (uVar8 == 0) {
                        local_144 = 5;
                      }
                      else {
                        if (((uVar8 == local_170) ||
                            ((*(code *)PTR__objc_msgSend_02578628)
                                       (uVar8,PTR_s_isEqual__0269e9a8,local_170), (uVar8 & 1) != 0))
                           && (puVar5 = local_150,
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_150,PTR_s_containsObject__0269cbb8,local_1e0),
                              ((ulong)puVar5 & 1) == 0)) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_150,PTR_s_addObject__0269d180,local_1e0);
                        }
                        local_144 = 0;
                      }
                      _objc_storeStrong(&local_228,0);
                      local_350 = local_350 + 1;
                    } while (local_350 < local_348);
                    local_348 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                               auStack_130,0x10);
                    local_350 = (undefined *)0x0;
                  } while (local_348 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar3);
                _objc_storeStrong(&local_1d8,0);
                local_2f8 = local_2f8 + 1;
              } while (local_2f8 < local_2f0);
              local_2f0 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,
                         auStack_b0,0x10);
              local_2f8 = (undefined *)0x0;
            } while (local_2f0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
          if ((puVar1 == (undefined *)0x0) ||
             (puVar1 = local_150,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_150,PTR_s_containsObject__0269cbb8,local_140),
             ((ulong)puVar1 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_140);
          }
          puVar1 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
          local_144 = 1;
          local_138 = puVar1;
          _objc_storeStrong(&local_188);
          _objc_storeStrong(&local_180,0);
        }
        _objc_storeStrong(&local_178,0);
      }
      _objc_storeStrong(&local_170,0);
    }
    _objc_storeStrong(local_168);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_138);
  return;
}

