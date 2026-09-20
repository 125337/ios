// FUN_005af628 @ 005af628

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005af628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  byte local_f2;
  byte local_f1;
  ulong local_f0;
  undefined4 local_e4;
  ulong local_e0;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_valueForKey__0269d128,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_e0 = uVar5;
  if (uVar5 == 0x1a) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_WCRefine_forwardNoteMoment__026a57f8,local_c0);
    local_e4 = 1;
  }
  else {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = (byte)local_c0;
    local_f0 = uVar2;
    FUN_005a305c();
    local_f2 = 0;
    _memset(auStack_140,0,0x40);
    uVar2 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1a8 != 0) {
      lVar4 = *local_130;
      local_1b0 = 0;
      do {
        do {
          if (*local_130 - lVar4 != 0) {
            _objc_enumerationMutation(*local_130 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_138 + local_1b0 * 8);
          local_100 = uVar5;
          FUN_005a71f0();
          if ((uVar5 & 1) == 0) {
            uVar5 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_valueForKey__0269d128,&cf_type);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if ((uVar3 == 2) || (uVar3 == 5)) {
              local_f2 = 1;
              local_e4 = 2;
              goto LAB_005afa38;
            }
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    local_e4 = 0;
LAB_005afa38:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    bVar1 = true;
    if ((((local_e0 != 3) && (bVar1 = true, local_e0 != 5)) && (bVar1 = true, local_e0 != 6)) &&
       ((bVar1 = true, local_e0 != 0x18 && (bVar1 = true, local_e0 != 0x2a)))) {
      bVar1 = local_e0 == 0x2b;
    }
    if (((local_f1 & 1) == 0) && (local_e0 != 1)) {
      if ((((local_f2 & 1) == 0) && (local_e0 != 0xf)) || (bVar1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_WCRefine_forwardImageMoment__026a5800,local_c0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_WCRefine_forwardVideoMoment__026a5808,local_c0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_WCRefine_forwardImageMoment__026a5800,local_c0);
    }
    _objc_storeStrong(&local_f0,0);
    local_e4 = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

