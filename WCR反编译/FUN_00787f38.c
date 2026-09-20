// FUN_00787f38 @ 00787f38

byte FUN_00787f38(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *local_1c0;
  undefined *local_1b8;
  ulong local_180;
  uint local_174;
  long local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  long local_128;
  undefined *local_110;
  long local_108;
  ulong local_100;
  ulong local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_1);
  uVar3 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = uVar3;
  local_108 = 0;
  local_48 = &cf_SystemMessageCellView;
  local_40 = &cf_AppPatMessageCellView;
  local_38 = &cf_RevokeMessageCellView;
  local_30 = &cf_ChatTimeCellView;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar2;
  do {
    if (local_100 == 0 || 5 < local_108) {
      local_e9 = 0;
      local_174 = 1;
      break;
    }
    _memset(auStack_168,0,0x40);
    puVar2 = local_110;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_c8,0x10);
    if (local_1b8 != (undefined *)0x0) {
      lVar5 = *local_158;
      local_1c0 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar5 != 0) {
            _objc_enumerationMutation(*local_158 - lVar5,puVar2);
          }
          lVar6 = *(long *)(local_160 + (long)local_1c0 * 8);
          local_128 = lVar6;
          _NSClassFromString();
          local_170 = lVar6;
          if ((lVar6 != 0) &&
             (uVar3 = local_100,
             (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isKindOfClass__0269cd68,lVar6),
             (uVar3 & 1) != 0)) {
            local_e9 = 1;
            local_174 = 1;
            goto LAB_00788208;
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_c8,
                   0x10);
        local_1c0 = (undefined *)0x0;
      } while (local_1b8 != (undefined *)0x0);
    }
    local_174 = 0;
LAB_00788208:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_174 != 0) break;
    uVar3 = local_100;
    FUN_00784bac();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = &cf_SystemMessage;
    local_e0 = &cf_AppPatMessage;
    local_d8 = &cf_RevokeMessage;
    local_d0 = &cf_ChatTimeCell;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_180 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e8,4
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00784ccc();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      uVar4 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_100;
      local_100 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_108 = local_108 + 1;
    }
    else {
      local_e9 = 1;
    }
    local_174 = (uint)!bVar1;
    _objc_storeStrong(&local_180,0);
  } while (local_174 == 0);
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_e9 & 1;
}

