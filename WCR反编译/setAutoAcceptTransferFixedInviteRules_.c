// setAutoAcceptTransferFixedInviteRules: @ 01fd87b0

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineConfig::setAutoAcceptTransferFixedInviteRules_
          (WCRefineConfig *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  SEL SVar8;
  long lVar9;
  ulong uVar10;
  double in_d0;
  double local_1b0;
  ulong local_188;
  ulong local_180;
  undefined *local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  undefined *local_140;
  int local_134;
  double local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar4;
  _memset(auStack_120,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_180 != 0) {
    lVar9 = *local_110;
    local_188 = 0;
    do {
      do {
        local_1b0 = in_d0;
        if (*local_110 - lVar9 != 0) {
          _objc_enumerationMutation(*local_110 - lVar9,uVar1);
          local_1b0 = in_d0;
        }
        uVar10 = *(ulong *)(local_118 + local_188 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_e0 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar10 & 1) != 0) {
          uVar10 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectForKey__0269e048,&cf_amount);
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar10,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
          if ((uVar10 & 1) == 0) {
            local_1b0 = 0.0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_doubleValue_026ca608);
          }
          local_130 = local_1b0;
          if (0.0 < local_1b0) {
            local_1b0 = (double)(long)(local_1b0 * 100.0) / 100.0;
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_130 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f
                      );
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_d8;
            local_140 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,puVar3);
            if (((ulong)puVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_140);
              uVar10 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_objectForKey__0269e048,&cf_replyText);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar10;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_148 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar10);
              uVar10 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_objectForKey__0269e048,&cf_repositoryCode);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar10;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_150 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar10);
              uVar10 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_objectForKey__0269e048,&cf_inviteChatRoom);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar10;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_158 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar10);
              puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_1b0 = local_130;
              local_160 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_setObject_forKey__026ca9e8,puVar4,&cf_amount);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              uVar10 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
              if (uVar10 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_setObject_forKey__026ca9e8,local_148,&cf_replyText);
              }
              uVar10 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
              if (uVar10 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_setObject_forKey__026ca9e8,local_150,&cf_repositoryCode);
              }
              uVar10 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_hasSuffix__0269d018,&cf__chatroom);
              if ((uVar10 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_setObject_forKey__026ca9e8,local_158,&cf_inviteChatRoom);
              }
              puVar7 = local_d0;
              puVar3 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
              (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar6 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
              puVar7 = puVar6 + -0x32;
              if (puVar6 < segment_command_00000020.segname + 10) {
                local_134 = 0;
              }
              else {
                puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
                local_134 = 2;
              }
              _objc_storeStrong(puVar7,&local_160);
              _objc_storeStrong(&local_158,0);
              _objc_storeStrong(&local_150,0);
              _objc_storeStrong(&local_148,0);
            }
            else {
              local_134 = 3;
            }
            _objc_storeStrong(&local_140,0);
          }
          else {
            local_134 = 3;
          }
          _objc_storeStrong(&local_128,0);
          if ((local_134 != 0) && (local_134 != 3)) goto LAB_01fd8e94;
        }
        local_188 = local_188 + 1;
        in_d0 = local_1b0;
      } while (local_188 < local_180);
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_188 = 0;
      in_d0 = local_1b0;
    } while (local_180 != 0);
  }
  local_134 = 0;
LAB_01fd8e94:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar7 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  IVar2 = local_c8;
  if (puVar7 == (undefined1 *)0x0) {
    SVar8 = local_b8;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar8);
  }
  else {
    puVar7 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    SVar8 = local_b8;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar7);
    (*(code *)PTR__objc_release_02578630)(SVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_removeObjectForKey__0269d700,&cf_autoAcceptTransferFixedInviteAmount);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_removeObjectForKey__0269d700,&cf_autoAcceptTransferFixedInviteChatRoom);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

