// FUN_01afc134 @ 01afc134

void FUN_01afc134(undefined8 param_1,undefined8 param_2,int *param_3,long param_4,
                 undefined8 *param_5)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_230;
  undefined *local_228;
  int local_18c;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined *local_128 [4];
  cfstringStruct *local_108;
  undefined *local_100;
  undefined *local_f8;
  byte local_ed;
  int local_ec;
  undefined8 *local_e8;
  long local_e0;
  int *local_d8;
  undefined *local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = (undefined *)0x0;
  _objc_storeStrong(&local_d0,param_2);
  local_ec = 0;
  local_ed = 0;
  local_f8 = (undefined *)0x0;
  local_100 = (undefined *)0x0;
  local_e8 = param_5;
  local_e0 = param_4;
  local_d8 = param_3;
  if (local_d0 != (undefined *)0x0) {
    pcVar1 = &cf_GetSessionByUserName_;
    _NSSelectorFromString();
    puVar2 = local_d0;
    local_108 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,pcVar1);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_108,local_c8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_100;
      local_100 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  if (local_100 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_128[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_128[0] != (undefined *)0x0) {
      puVar3 = local_128[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128[0],PTR_s_valueForKey__0269d128,&cf_m_sessionInfo);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_100;
      local_100 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_100 == (undefined *)0x0) &&
         (puVar2 = local_128[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_128[0],PTR_s_respondsToSelector__026ca818,PTR_s_m_sessionInfo_026a6320),
         ((ulong)puVar2 & 1) != 0)) {
        puVar3 = local_128[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_m_sessionInfo_026a6320);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_100;
        local_100 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    _objc_storeStrong(local_128,0);
  }
  if (local_100 != (undefined *)0x0) {
    puVar2 = local_100;
    FUN_01b03388();
    local_ec = (int)puVar2;
    puVar2 = local_100;
    FUN_01b035b0();
    local_ed = (byte)puVar2;
    _memset(auStack_180,0,0x40);
    local_c0 = &cf_m_uLastTime;
    local_b8 = &cf_m_uiLastMsgTime;
    local_b0 = &cf_m_uCreateTime;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_228 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_228 != (undefined *)0x0) {
      lVar4 = *local_170;
      local_230 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar4 != 0) {
            _objc_enumerationMutation(*local_170 - lVar4,puVar2);
          }
          local_140 = *(undefined8 *)(local_178 + (long)local_230 * 8);
          puVar3 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_valueForKey__0269d128,local_140);
          _objc_retainAutoreleasedReturnValue();
          local_188 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8)
          ;
          uVar5 = (ulong)puVar3 & 0xffffffff;
          if (((ulong)puVar3 & 1) == 0) {
LAB_01afc688:
            local_18c = 0;
          }
          else {
            puVar3 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_unsignedLongLongValue_0269d6b8);
            local_f8 = puVar3;
            if (puVar3 == (undefined *)0x0) {
              uVar5 = 0;
              goto LAB_01afc688;
            }
            uVar5 = 5;
            local_18c = 5;
          }
          _objc_storeStrong(uVar5,&local_188,0);
          if (local_18c != 0) goto LAB_01afc714;
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                   0x10);
        local_230 = (undefined *)0x0;
      } while (local_228 != (undefined *)0x0);
    }
LAB_01afc714:
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_ec == 0) && (local_d0 != (undefined *)0x0)) {
    pcVar1 = &cf_GetUnReadCount_;
    _NSSelectorFromString();
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,pcVar1);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,pcVar1,local_c8);
      local_ec = (int)puVar2;
    }
  }
  if (((local_ec != 0) && ((local_ed & 1) == 0)) &&
     (uVar5 = local_c8, FUN_01b0380c(), (uVar5 & 1) != 0)) {
    local_ed = 1;
  }
  if (local_d8 != (int *)0x0) {
    *local_d8 = local_ec;
  }
  if (local_e0 != 0) {
    *(bool *)local_e0 = (local_ed & 1) != 0 && local_ec != 0;
  }
  if (local_e8 != (undefined8 *)0x0) {
    *local_e8 = local_f8;
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

