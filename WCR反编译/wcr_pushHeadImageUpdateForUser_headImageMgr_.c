// wcr_pushHeadImageUpdateForUser:headImageMgr: @ 00ed62d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

unsigned_long_long
WCRefineChatRoomKickHelper::wcr_pushHeadImageUpdateForUser_headImageMgr_
          (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_228;
  undefined *local_220;
  undefined *local_1d0;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  unsigned_long_long local_168;
  undefined *local_160;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  undefined *local_128;
  byte local_119;
  undefined *local_118;
  byte local_109;
  undefined *local_108;
  undefined *local_100;
  undefined1 local_f5;
  undefined4 local_f4;
  ID local_f0;
  ulong local_e8;
  undefined8 local_e0;
  SEL local_d8;
  ID local_d0;
  unsigned_long_long local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_4);
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_trimmedString__0269ec98,local_e0);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if ((IVar1 == 0) || (local_e8 == 0)) {
    local_c8 = 0;
    local_f4 = 1;
  }
  else {
    IVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isChatRoomID__0269ec68,local_f0);
    local_f5 = (undefined1)IVar1;
    local_109 = 0;
    local_119 = 0;
    local_129 = 0;
    local_139 = 0;
    local_149 = 0;
    if ((IVar1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 1;
      local_1d0 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_138 = puVar3;
      local_40 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_149 = 1;
      local_148 = local_1d0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
      _objc_retainAutoreleasedReturnValue();
      local_109 = 1;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_108 = puVar3;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
      _objc_retainAutoreleasedReturnValue();
      local_119 = 1;
      local_1d0 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_118 = puVar2;
      local_30 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_129 = 1;
      local_128 = local_1d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_1d0;
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    if ((local_129 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    local_158 = PTR_s_updateUsrHeadImg_forCategory_isH_026ab698;
    local_160 = PTR_s_updateUsrHeadImg_forCategory__026ab6a0;
    local_168 = 0;
    _memset(auStack_1b0,0,0x40);
    puVar3 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_c0,0x10);
    if (local_220 != (undefined *)0x0) {
      lVar5 = *local_1a0;
      local_228 = (undefined *)0x0;
      do {
        do {
          if (*local_1a0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar5,puVar3);
          }
          uVar6 = *(ulong *)(local_1a8 + (long)local_228 * 8);
          local_170 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_unsignedCharValue_026a0a00);
          uVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_respondsToSelector__026ca818,local_158);
          if ((uVar4 & 1) == 0) {
            uVar4 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_respondsToSelector__026ca818,local_160);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_160,local_f0,uVar6 & 0xff);
              local_168 = local_168 + 1;
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_158,local_f0,uVar6 & 0xff,0);
            local_168 = local_168 + 1;
          }
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_c0,
                   0x10);
        local_228 = (undefined *)0x0;
      } while (local_220 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_c8 = local_168;
    local_f4 = 1;
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

