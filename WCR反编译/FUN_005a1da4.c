// FUN_005a1da4 @ 005a1da4

byte FUN_005a1da4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong local_2d8;
  ulong local_2d0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  char *local_148;
  undefined *local_140;
  char *local_138;
  char *local_130;
  char *local_128;
  char *local_120;
  undefined4 local_118;
  long local_108;
  long local_100;
  ulong local_f8;
  byte local_e9;
  undefined1 auStack_e8 [128];
  char *local_68;
  char *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  char *local_40;
  undefined *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_1);
  local_100 = 0;
  _objc_storeStrong(&local_100,param_2);
  lVar6 = local_100;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  local_108 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if ((lVar6 == 0) ||
     (uVar1 = local_f8, (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_e9 = 0;
    local_118 = 1;
    goto LAB_005a2854;
  }
  local_120 = (char *)0x0;
  pcVar2 = "CContactMgr";
  _objc_getClass();
  FUN_005a5ba4();
  _objc_retainAutoreleasedReturnValue();
  local_128 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_getContactByName__0269d178,local_108);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_120;
    local_120 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_120 == (char *)0x0) {
    local_e9 = 0;
    local_118 = 1;
  }
  else {
    pcVar2 = "FavForwardLogicController";
    _objc_getClass();
    local_130 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_e9 = 0;
      local_118 = 1;
    }
    else {
      _objc_alloc_init();
      local_138 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_e9 = 0;
        local_118 = 1;
      }
      else {
        puVar4 = PTR_WCRefineFavForwardDelegateProxy_026ce7c0;
        _objc_alloc_init();
        local_140 = puVar4;
        FUN_005c1594();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setViewController__026a59c0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_58 = &cf_logic;
        local_40 = local_138;
        local_50 = &cf_delegate;
        local_38 = local_140;
        local_48 = &cf_wraps;
        local_30 = local_f8;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
        _objc_retainAutoreleasedReturnValue();
        FUN_005bfde4();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar2 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_setM_delegate__026a59c8);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setM_delegate__026a59c8,local_140);
        }
        local_148 = (char *)0x0;
        pcVar3 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_valueForKey__0269d128,&cf_m_messageWrapList);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_148;
        local_148 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_148;
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)pcVar2 & 1) == 0) {
LAB_005a255c:
          pcVar2 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_respondsToSelector__026ca818,
                     PTR_s_forwardMessage_toUser_delegate__026a59e0);
          if (((ulong)pcVar2 & 1) == 0) {
            local_e9 = 0;
          }
          else {
            _memset(auStack_198,0,0x40);
            uVar1 = local_f8;
            (*(code *)PTR__objc_retain_02578638)();
            local_2d0 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_e8,
                       0x10);
            if (local_2d0 != 0) {
              lVar6 = *local_188;
              local_2d8 = 0;
              do {
                do {
                  if (*local_188 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_188 - lVar6,uVar1);
                  }
                  local_158 = *(undefined8 *)(local_190 + local_2d8 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_forwardMessage_toUser_delegate__026a59e0,local_158,
                             local_120,local_140);
                  local_2d8 = local_2d8 + 1;
                } while (local_2d8 < local_2d0);
                local_2d0 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,
                           auStack_e8,0x10);
                local_2d8 = 0;
              } while (local_2d0 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar1);
            local_e9 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_removeAllObjects_0269d508);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_addObjectsFromArray__0269d540,local_f8);
          pcVar3 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_respondsToSelector__026ca818,
                     PTR_s_forMessage_showConfirmView__026a59d0);
          pcVar2 = local_138;
          puVar4 = PTR_s_forMessage_showConfirmView__026a59d0;
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_forMessage__026a59d8);
            pcVar2 = local_138;
            puVar4 = PTR_s_forMessage__026a59d8;
            if (((ulong)pcVar3 & 1) == 0) goto LAB_005a255c;
            local_68 = local_120;
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_68,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_e9 = 1;
          }
          else {
            local_60 = local_120;
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar4,puVar5,0);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_e9 = 1;
          }
        }
        local_118 = 1;
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_140,0);
      }
      _objc_storeStrong(&local_138,0);
    }
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_120,0);
LAB_005a2854:
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_e9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

