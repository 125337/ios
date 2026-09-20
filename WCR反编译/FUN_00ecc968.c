// FUN_00ecc968 @ 00ecc968

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ecc968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_418;
  ulong local_410;
  undefined *local_368;
  undefined *local_360;
  undefined *local_338;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  ulong local_200 [3];
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  byte local_181;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  undefined *local_168;
  ulong local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  int local_144;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_138 = param_5;
  local_130 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_140 == (undefined *)0x0) {
    local_144 = 1;
  }
  else {
    puVar1 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_BaseMsgContentViewController;
    local_150 = puVar1;
    _NSClassFromString();
    local_160 = 0;
    local_171 = 0;
    local_181 = 0;
    local_338 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_158 = pcVar4;
    if (local_150 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_181 = 1;
      local_180 = local_338;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_150
                );
      _objc_retainAutoreleasedReturnValue();
      local_171 = 1;
      local_170 = local_338;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = local_338;
    if ((local_181 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_180);
    }
    if ((local_171 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_170);
    }
    do {
      puVar1 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) break;
      puVar1 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_190 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_removeLastObject_0269e830);
      if ((local_158 == (cfstringStruct *)0x0) ||
         (puVar1 = local_190,
         (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_isKindOfClass__0269cd68,local_158),
         ((ulong)puVar1 & 1) == 0)) {
        _memset(auStack_1d8,0,0x40);
        puVar1 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_childViewControllers_0269d618);
        _objc_retainAutoreleasedReturnValue();
        local_360 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_360 != (undefined *)0x0) {
          lVar7 = *local_1c8;
          local_368 = (undefined *)0x0;
          do {
            do {
              if (*local_1c8 - lVar7 != 0) {
                _objc_enumerationMutation(*local_1c8 - lVar7,puVar1);
              }
              local_198 = *(undefined8 *)(local_1d0 + (long)local_368 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_198);
              local_368 = local_368 + 1;
            } while (local_368 < local_360);
            local_360 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8
                       ,0x10);
            local_368 = (undefined *)0x0;
          } while (local_360 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar2 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        puVar1 = local_168;
        if (puVar2 != (undefined *)0x0) {
          puVar2 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        local_144 = 0;
      }
      else {
        _objc_storeStrong(&local_160,local_190);
        local_144 = 3;
      }
      _objc_storeStrong(&local_190,0);
    } while (local_144 == 0);
    if (local_160 == 0) {
      local_144 = 1;
    }
    else {
      local_1e0 = 0;
      uVar5 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_class_0269cd60);
      _class_getInstanceVariable(uVar5,"m_tableView");
      local_1e8 = uVar5;
      if (uVar5 != 0) {
        uVar6 = local_160;
        _object_getIvar(local_160,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_1e0;
        local_1e0 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar5 = local_1e0;
      puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar6 = local_1e0;
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_200[0] = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_frame_026ca640);
        local_220 = param_1;
        uStack_218 = param_2;
        local_210 = param_3;
        uStack_208 = param_4;
        local_240 = param_1;
        uStack_238 = param_2;
        local_230 = param_3;
        uStack_228 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(local_200[0],PTR_s_setFrame__026ca960);
        _memset(auStack_2a8,0,0x40);
        uVar5 = local_200[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_200[0],PTR_s_visibleCells_0269fc48);
        _objc_retainAutoreleasedReturnValue();
        local_410 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_410 != 0) {
          lVar7 = *local_298;
          local_418 = 0;
          do {
            do {
              if (*local_298 - lVar7 != 0) {
                _objc_enumerationMutation(*local_298 - lVar7,uVar5);
              }
              local_268 = *(undefined8 *)(local_2a0 + local_418 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_frame_026ca640);
              (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setFrame__026ca960);
              local_418 = local_418 + 1;
            } while (local_418 < local_410);
            local_410 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_128
                       ,0x10);
            local_418 = 0;
          } while (local_410 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar5);
        _objc_storeStrong(local_200,0);
      }
      _objc_storeStrong(&local_1e0,0);
      local_144 = 0;
    }
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

