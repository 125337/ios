// syncFullPageBackgroundImage @ 01784fd8

/* Function Stack Size: 0x10 bytes */

void WCPluginsViewControllerBehavior::syncFullPageBackgroundImage(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_350;
  ulong local_348;
  ulong local_290;
  ulong local_288;
  ID local_250;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined8 local_208;
  ID local_1c0 [5];
  undefined *local_198;
  undefined4 local_18c;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_globalPageBackgroundManaged_026b4578);
  if ((param_1 & 1) == 0) {
    local_140 = 0;
    _memset(auStack_188,0,0x40);
    IVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pageManagers_026b4550);
    _objc_retainAutoreleasedReturnValue();
    local_288 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_288 != 0) {
      lVar5 = *local_178;
      local_290 = 0;
      do {
        do {
          if (*local_178 - lVar5 != 0) {
            _objc_enumerationMutation(*local_178 - lVar5,IVar1);
          }
          IVar2 = local_130;
          uVar6 = *(undefined8 *)(local_180 + local_290 * 8);
          local_148 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_tableView_0269e378);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_backgroundImageViewForTableView__026b4638);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_140;
          local_140 = IVar2;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (local_140 != 0) {
            local_18c = 4;
            goto LAB_0178528c;
          }
          local_290 = local_290 + 1;
        } while (local_290 < local_288);
        local_288 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10
                  );
        local_290 = 0;
      } while (local_288 != 0);
    }
    local_18c = 0;
LAB_0178528c:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_140 == 0) {
      IVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_fullPageBackgroundImageView_026b4538);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_18c = 1;
    }
    else {
      IVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_fullPageBackgroundImageView_026b4538);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar1 == 0) {
        puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        _objc_alloc();
        IVar1 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithFrame__026ca6e8);
        local_198 = puVar3;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setAutoresizingMask__026ca878,0x12);
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setUserInteractionEnabled__026caad8,0)
        ;
        IVar1 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_setFullPageBackgroundImageView__026b4640,local_198);
        _objc_storeStrong(&local_198,0);
      }
      IVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_fullPageBackgroundImageView_026b4538);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_130;
      local_1c0[0] = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,local_1c0[0],PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setImage__026ca978);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_highlightedImage_0269dee0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setHighlightedImage__026b4648);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_animationImages_026b4650);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setAnimationImages__026a04d0);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_highlightedAnimationImages_026b4658);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0[0],PTR_s_setHighlightedAnimationImages__026b4660);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_animationDuration_026b4668);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setAnimationDuration__026a04d8);
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_animationRepeatCount_026b4670);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0[0],PTR_s_setAnimationRepeatCount__026a04e0,IVar1);
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_contentMode_026ca598);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setContentMode__026ca8e0,IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_alpha_026ca4d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setAlpha__026ca860);
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_tintColor_026a2e28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setTintColor__026caab0);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setHidden__026ca970,0);
      IVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isAnimating_026a8e78);
      if (((IVar1 & 1) == 0) ||
         (IVar1 = local_1c0[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_isAnimating_026a8e78),
         (IVar1 & 1) != 0)) {
        IVar1 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isAnimating_026a8e78);
        if (((IVar1 & 1) == 0) &&
           (IVar1 = local_1c0[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_isAnimating_026a8e78),
           (IVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_stopAnimating_026cab28);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_startAnimating_026cab18);
      }
      _memset(auStack_248,0,0x40);
      IVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pageManagers_026b4550);
      _objc_retainAutoreleasedReturnValue();
      local_348 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_348 != 0) {
        lVar5 = *local_238;
        local_350 = 0;
        do {
          do {
            if (*local_238 - lVar5 != 0) {
              _objc_enumerationMutation(*local_238 - lVar5,IVar1);
            }
            IVar4 = local_130;
            uVar6 = *(undefined8 *)(local_240 + local_350 * 8);
            local_208 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_tableView_0269e378);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_backgroundImageViewForTableView__026b4638);
            _objc_retainAutoreleasedReturnValue();
            local_250 = IVar4;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            if (local_250 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_setHidden__026ca970,1);
            }
            _objc_storeStrong(&local_250,0);
            local_350 = local_350 + 1;
          } while (local_350 < local_348);
          local_348 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_128,
                     0x10);
          local_350 = 0;
        } while (local_348 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      _objc_storeStrong(local_1c0,0);
      local_18c = 0;
    }
    _objc_storeStrong(&local_140,0);
  }
  else {
    IVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_fullPageBackgroundImageView_026b4538);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_fullPageBackgroundImageView_026b4538);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

