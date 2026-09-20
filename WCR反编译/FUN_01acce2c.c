// FUN_01acce2c @ 01acce2c

void FUN_01acce2c(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_190;
  undefined *local_188;
  char *local_158 [2];
  uint local_148;
  char *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  uVar8 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  FUN_01a9eff8();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar8 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_avatarUrl_026be170);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  FUN_01a9eff8();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  pcVar3 = "MMHeadImageHelper";
  _objc_getClass();
  local_e0 = pcVar3;
  _memset(auStack_128,0,0x40);
  local_b8 = &cf_getProfileHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  local_b0 = &cf_getMainFrameHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_188 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_188 != (undefined *)0x0) {
    lVar7 = *local_118;
    local_190 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar7 != 0) {
          _objc_enumerationMutation(*local_118 - lVar7,puVar4);
        }
        uVar8 = *(undefined8 *)(local_120 + (long)local_190 * 8);
        local_e8 = uVar8;
        _NSSelectorFromString();
        pcVar3 = local_e0;
        local_130 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,uVar8);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar5 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_130,local_d0,local_d8,1,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_138 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
          pcVar3 = local_138;
          bVar1 = ((ulong)pcVar5 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = pcVar3;
          }
          local_148 = (uint)bVar1;
          _objc_storeStrong(&local_138,0);
          if (local_148 != 0) goto LAB_01acd190;
        }
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_190 = (undefined *)0x0;
    } while (local_188 != (undefined *)0x0);
  }
  local_148 = 0;
LAB_01acd190:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_148 == 0) {
    pcVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_158[0] = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_setClipsToBounds__026ca8c8,1);
    pcVar3 = local_158[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = pcVar3;
    local_148 = 1;
    _objc_storeStrong(local_158,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

