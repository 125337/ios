// wcr_secureCanvasCreateIfNeeded @ 015e39f0

/* Function Stack Size: 0x10 bytes */

ID WCRQuickChatWindow::wcr_secureCanvasCreateIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_250;
  undefined *local_248;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  undefined4 local_1cc;
  long local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  long local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  SEL local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = param_2;
  local_138 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_secureCanvas_026b1180);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    _objc_alloc();
    uVar8 = 0;
    uVar7 = 0;
    uVar9 = 0x4059000000000000;
    uVar10 = 0x4044000000000000;
    FUN_015dff84();
    local_168 = uVar7;
    local_160 = uVar8;
    local_158 = uVar9;
    local_150 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar8,uVar9,uVar10,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_148 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSecureTextEntry__026caa30,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_layoutIfNeeded_026ca790);
    local_170 = (undefined *)0x0;
    _memset(auStack_1b8,0,0x40);
    puVar1 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_248 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_248 != (undefined *)0x0) {
      lVar5 = *local_1a8;
      local_250 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar5,puVar1);
          }
          lVar6 = *(long *)(local_1b0 + (long)local_250 * 8);
          local_178 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar6;
          puVar3 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1c8 = lVar2;
          local_1c0 = puVar3;
          (*(code *)PTR__objc_release_02578630)(lVar6);
          if (lVar2 + -0x7fffffffffffffff != 0) {
            _objc_storeStrong(lVar2 + -0x7fffffffffffffff,&local_170,local_178);
            local_1cc = 2;
            goto LAB_015e3cec;
          }
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_250 = (undefined *)0x0;
      } while (local_248 != (undefined *)0x0);
    }
    local_1cc = 0;
LAB_015e3cec:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_170 == (undefined *)0x0) {
      puVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_170;
      local_170 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_170 == (undefined *)0x0) {
      local_130 = (undefined *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_removeFromSuperview_026ca800);
      _memset(auStack_218,0,0x40);
      puVar1 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_2b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,0x10
                );
      if (local_2b0 != (undefined *)0x0) {
        lVar5 = *local_208;
        local_2b8 = (undefined *)0x0;
        do {
          do {
            if (*local_208 - lVar5 != 0) {
              _objc_enumerationMutation(*local_208 - lVar5,puVar3);
            }
            local_1d8 = *(undefined8 *)(local_210 + (long)local_2b8 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_removeFromSuperview_026ca800);
            local_2b8 = local_2b8 + 1;
          } while (local_2b8 < local_2b0);
          local_2b0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,
                     0x10);
          local_2b8 = (undefined *)0x0;
        } while (local_2b0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setUserInteractionEnabled__026caad8,1);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setOpaque__026ca9f8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setClipsToBounds__026ca8c8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setSecureField__026b1188,local_148);
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setSecureCanvas__026b1190,local_170);
      puVar1 = local_170;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar1;
    }
    local_1cc = 1;
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_148,0);
  }
  else {
    puVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_secureCanvas_026b1180);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

