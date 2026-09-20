// FUN_006be7cc @ 006be7cc

long FUN_006be7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_298;
  undefined *local_290;
  undefined *local_1e0;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  long local_128;
  undefined *local_120;
  undefined1 local_112;
  byte local_111;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (undefined *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  puVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = local_b8;
  if ((((ulong)puVar3 & 1) == 0) || (local_c0 == (undefined *)0x0)) {
    local_b0 = 0;
  }
  else {
    local_e0 = 0;
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    puVar3 = local_b8;
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = puVar3;
      _objc_getAssociatedObject(puVar3,&DAT_028cc1ba);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_101 = 0;
        local_111 = 0;
        puVar3 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          local_1e0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
          _objc_retainAutoreleasedReturnValue();
          local_111 = 1;
          local_110 = local_1e0;
        }
        else {
          local_1e0 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          local_101 = 1;
          local_100 = local_1e0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = local_1e0;
        if ((local_111 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_110);
        }
        if ((local_101 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_100);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_setAssociatedObject(local_e8,&DAT_028cc1ba,local_f8,1);
        _objc_storeStrong(&local_f8,0);
      }
      _objc_setAssociatedObject(local_e8,&DAT_028cc1bb,local_c8,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_e8,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setContentMode__026ca8e0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setClipsToBounds__026ca8c8,1);
      puVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = puVar3 != local_c0;
      (*(code *)PTR__objc_release_02578630)();
      local_112 = bVar1;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setImage__026ca978,local_c0);
        local_e0 = local_e0 + 1;
      }
      puVar3 = local_c0;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGImage_0269e0e8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_e8;
      local_120 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_120;
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (puVar4 != puVar3) {
        puVar3 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
    }
    _memset(auStack_168,0,0x40);
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_290 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_290 != (undefined *)0x0) {
      lVar5 = *local_158;
      local_298 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar5 != 0) {
            _objc_enumerationMutation(*local_158 - lVar5,puVar3);
          }
          lVar6 = *(long *)(local_160 + (long)local_298 * 8);
          local_128 = lVar6;
          FUN_006be7cc(lVar6,local_c0,local_c8);
          local_e0 = local_e0 + lVar6;
          local_298 = local_298 + 1;
        } while (local_298 < local_290);
        local_290 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                   0x10);
        local_298 = (undefined *)0x0;
      } while (local_290 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_b0 = local_e0;
  }
  local_d8 = 1;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

