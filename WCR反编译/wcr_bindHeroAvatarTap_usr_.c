// wcr_bindHeroAvatarTap:usr: @ 01d99b34

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsBoardView::wcr_bindHeroAvatarTap_usr_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_260;
  ulong local_258;
  ulong local_218;
  ulong local_210;
  undefined *local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  undefined4 local_14c;
  long local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
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
  if (((local_140 == 0) ||
      (lVar4 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
      lVar4 == 0)) ||
     (IVar1 = local_130, (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_privacyOn_026c4ea0),
     (IVar1 & 1) != 0)) {
    local_14c = 1;
  }
  else {
    _memset(auStack_198,0,0x40);
    uVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_210 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_210 != 0) {
      lVar4 = *local_188;
      local_218 = 0;
      do {
        do {
          if (*local_188 - lVar4 != 0) {
            _objc_enumerationMutation(*local_188 - lVar4,uVar5);
          }
          local_158 = *(undefined8 *)(local_190 + local_218 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_setUserInteractionEnabled__026caad8,0);
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_218 = 0;
      } while (local_210 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setUserInteractionEnabled__026caad8,1);
    _memset(auStack_1e0,0,0x40);
    uVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_258 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10);
    if (local_258 != 0) {
      lVar4 = *local_1d0;
      local_260 = 0;
      do {
        do {
          if (*local_1d0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_1d8 + local_260 * 8);
          puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
          local_1a0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_removeGestureRecognizer__026ca808,local_1a0);
          }
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                   0x10);
        local_260 = 0;
      } while (local_258 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addGestureRecognizer__026ca4a8,puVar3);
    _objc_setAssociatedObject(local_140,DAT_028c69a8,local_148,3);
    _objc_storeStrong(&local_1e8,0);
    local_14c = 0;
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

