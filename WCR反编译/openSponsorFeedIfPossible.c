// openSponsorFeedIfPossible @ 0188ffb0

/* Function Stack Size: 0x10 bytes */

void WCRefineChatAvatarProfileCardViewController::openSponsorFeedIfPossible(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  ulong local_160;
  ulong local_158;
  ID local_130;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_130 = IVar2;
  if (IVar2 == 0) {
    local_130 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_130;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_c8 = PTR_s_openFeed_026b7240;
  _memset(auStack_110,0,0x40);
  IVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_reverseObjectEnumerator_0269d220);
  _objc_retainAutoreleasedReturnValue();
  local_158 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_158 != 0) {
    lVar3 = *local_100;
    local_160 = 0;
    do {
      do {
        if (*local_100 - lVar3 != 0) {
          _objc_enumerationMutation(*local_100 - lVar3,IVar2);
        }
        uVar4 = *(ulong *)(local_108 + local_160 * 8);
        local_d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_respondsToSelector__026ca818,local_c8);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_performSelector__026ca7b8,local_c8);
          bVar1 = true;
          goto LAB_01890208;
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  bVar1 = false;
LAB_01890208:
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VcNupQ0bU);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

