// FUN_0171ae1c @ 0171ae1c

void FUN_0171ae1c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  dispatch_time_t dVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong local_2b8;
  ulong local_2b0;
  undefined *local_270;
  undefined *local_268;
  undefined *local_230;
  undefined4 local_228;
  undefined4 local_224;
  code *local_220;
  undefined *local_218;
  undefined8 local_210;
  undefined8 local_208;
  int local_1fc;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  ulong local_1b0 [3];
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  local_150 = 0;
  _memset(auStack_198,0,0x40);
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_268 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_268 != (undefined *)0x0) {
    lVar8 = *local_188;
    local_270 = (undefined *)0x0;
    do {
      do {
        if (*local_188 - lVar8 != 0) {
          _objc_enumerationMutation(*local_188 - lVar8,puVar4);
        }
        local_158 = *(undefined8 *)(local_190 + (long)local_270 * 8);
        uVar5 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_findNavigationControllersInView__026b39c0,local_158);
        _objc_retainAutoreleasedReturnValue();
        local_1b0[0] = uVar5;
        _memset(auStack_1f8,0,0x40);
        uVar5 = local_1b0[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_2b0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                   0x10);
        if (local_2b0 != 0) {
          lVar9 = *local_1e8;
          local_2b8 = 0;
          do {
            do {
              if (*local_1e8 - lVar9 != 0) {
                _objc_enumerationMutation(*local_1e8 - lVar9,uVar5);
              }
              uVar10 = *(ulong *)(local_1f0 + local_2b8 * 8);
              pcVar6 = "MMUINavigationController";
              local_1b8 = uVar10;
              _objc_getClass();
              (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,pcVar6);
              if ((uVar10 & 1) != 0) {
                _objc_storeStrong(&local_150,local_1b8);
                local_1fc = 4;
                goto LAB_0171b1dc;
              }
              local_2b8 = local_2b8 + 1;
            } while (local_2b8 < local_2b0);
            local_2b0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128
                       ,0x10);
            local_2b8 = 0;
          } while (local_2b0 != 0);
        }
        local_1fc = 0;
LAB_0171b1dc:
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if (local_150 == 0) {
          local_1fc = 0;
        }
        else {
          local_1fc = 2;
        }
        _objc_storeStrong(local_1b0,0);
        if (local_1fc != 0) goto LAB_0171b2ac;
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10)
      ;
      local_270 = (undefined *)0x0;
    } while (local_268 != (undefined *)0x0);
  }
  local_1fc = 0;
LAB_0171b2ac:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_150 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_PushViewController_animated__0269cd40,local_140,1);
    dVar7 = _dispatch_time(0,300000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_140;
    local_230 = PTR___NSConcreteStackBlock_02578660;
    local_228 = 0xc2000000;
    local_224 = 0;
    local_220 = FUN_0171cd8c;
    local_218 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_148;
    local_210 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = uVar1;
    _dispatch_after(dVar7,puVar3,&local_230);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_208);
    _objc_storeStrong(&local_210,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

