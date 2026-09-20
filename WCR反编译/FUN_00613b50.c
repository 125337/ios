// FUN_00613b50 @ 00613b50

void FUN_00613b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_258;
  ulong local_250;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  undefined *local_118;
  ulong local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  char *local_f0;
  cfstringStruct *local_e8;
  char *local_e0 [3];
  char *local_c8;
  int local_c0;
  byte local_b9;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  local_b9 = param_7;
  if ((local_b0 == 0) || (local_b8 == 0)) {
    local_c0 = 1;
    goto LAB_006143c8;
  }
  if ((param_7 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_b8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_b0;
    local_108 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_c0 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = uVar4;
      local_118 = (undefined *)0x0;
      _memset(auStack_160,0,0x40);
      uVar4 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_250 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_250 != 0) {
        lVar6 = *local_150;
        local_258 = 0;
        do {
          do {
            if (*local_150 - lVar6 != 0) {
              _objc_enumerationMutation(*local_150 - lVar6,uVar4);
            }
            uVar7 = *(ulong *)(local_158 + local_258 * 8);
            puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            local_120 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar7 & 1) != 0) {
              _objc_storeStrong(&local_118,local_120);
              local_c0 = 3;
              goto LAB_00614104;
            }
            local_258 = local_258 + 1;
          } while (local_258 < local_250);
          local_250 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                     0x10);
          local_258 = 0;
        } while (local_250 != 0);
      }
      local_c0 = 0;
LAB_00614104:
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_118 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,param_3,param_4,puVar5,PTR_s_initWithFrame__026ca6e8);
        puVar3 = local_118;
        local_118 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setContentMode__026ca8e0,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setClipsToBounds__026ca8c8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setAutoresizingMask__026ca878,0x12);
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setImage__026ca978,local_108);
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addSubview__026ca4c0,local_118);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setImage__026ca978,local_108);
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,param_3,param_4,local_118,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setHidden__026ca970,0);
      }
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_110,0);
      local_c0 = 0;
    }
    _objc_storeStrong(&local_108,0);
  }
  else {
    pcVar1 = "CEmoticonWrap";
    _objc_getClass();
    local_c8 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_c0 = 1;
      goto LAB_006143c8;
    }
    _objc_alloc_init();
    pcVar2 = &cf_setM_imageData_;
    local_e0[0] = pcVar1;
    _NSSelectorFromString();
    pcVar1 = local_e0[0];
    local_e8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0[0],PTR_s_setValue_forKey__0269d300,local_b8,&cf_m_imageData);
      pcVar1 = local_e0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_valueForKey__0269d128,&cf_m_imageData)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0), pcVar1 == (char *)0x0
         )) {
        local_c0 = 1;
      }
      else {
        local_c0 = 0;
      }
      _objc_storeStrong(&local_f0,0);
      if (local_c0 == 0) goto LAB_00613da4;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],local_e8,local_b8);
LAB_00613da4:
      pcVar2 = &cf_setEmoticonWrap_PlayGif_;
      _NSSelectorFromString();
      uVar4 = local_b0;
      local_100 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_100,local_e0[0],1);
      }
      local_c0 = 0;
    }
    _objc_storeStrong(local_e0,0);
  }
  if (local_c0 == 0) {
    local_c0 = 0;
  }
LAB_006143c8:
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

