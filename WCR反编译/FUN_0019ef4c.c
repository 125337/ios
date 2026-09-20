// FUN_0019ef4c @ 0019ef4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019ef4c(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint local_2c8;
  cfstringStruct *local_230;
  cfstringStruct *local_1f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  byte local_d1;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  ulong local_68;
  uint local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40 [4];
  
  local_40[3] = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  pcVar5 = local_50;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar5 & 1) == 0) {
    local_48 = (cfstringStruct *)0x0;
    local_60 = 1;
  }
  else {
    local_40[1] = _UNK_0257ab18;
    local_40[0] = _DAT_0257ab10;
    for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
      pcVar5 = local_50;
      FUN_0019131c(local_50,local_40[local_68]);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,
                   local_40[local_68]);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_50;
        local_78 = puVar4;
        _NSSelectorFromString();
        FUN_0019143c(pcVar6,puVar4);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_70;
        local_70 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        _objc_storeStrong(&local_78,0);
      }
      pcVar5 = local_70;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      pcVar6 = local_70;
      if (((ulong)pcVar5 & 1) == 0) {
LAB_0019f474:
        local_60 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_1f0 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_1f0;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_containsString__0269d0b0,&cf_MMHeadImageView);
        pcVar5 = local_80;
        if (((ulong)pcVar6 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_230 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_230 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = local_230;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar6 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_containsString__0269d0b0,&cf_MMHeadImageView);
          pcVar5 = local_90;
          bVar1 = ((ulong)pcVar6 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_48 = pcVar5;
          }
          local_60 = (uint)bVar1;
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_90,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_48 = pcVar5;
          local_60 = 1;
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
        if (local_60 == 0) goto LAB_0019f474;
      }
      _objc_storeStrong(&local_70,0);
      if (local_60 != 0) goto LAB_0019fce8;
    }
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = (cfstringStruct *)0x0;
    dStack_c8 = *(double *)(PTR__CGRectNull_025782e8 + 8);
    local_d0 = *(double *)PTR__CGRectNull_025782e8;
    dStack_b8 = *(double *)(PTR__CGRectNull_025782e8 + 0x18);
    local_c0 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
    local_d1 = 0;
    dVar8 = local_c0;
    local_a0 = pcVar5;
    do {
      pcVar6 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
      pcVar5 = local_a8;
      if (pcVar6 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = pcVar5;
        iVar7 = 1;
        local_60 = 1;
        break;
      }
      pcVar5 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_removeObjectAtIndex__0269d530,0);
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_a0;
      if (pcVar6 != (cfstringStruct *)0x0) {
        pcVar6 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      if (local_e0 == local_50) {
        local_60 = 5;
        dVar10 = dVar8;
      }
      else {
        pcVar6 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_containsString__0269d0b0,&cf_MMHeadImageView);
        pcVar5 = local_e0;
        if (((ulong)pcVar6 & 1) == 0) {
          pcVar5 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_containsString__0269d0b0,&cf_HeadImage);
          local_2c8 = 1;
          dVar11 = param_2;
          dVar12 = param_3;
          dVar13 = param_4;
          if (((ulong)pcVar5 & 1) == 0) {
            pcVar5 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_containsString__0269d0b0,&cf_HeadImg);
            local_2c8 = 1;
            dVar11 = param_2;
            dVar12 = param_3;
            dVar13 = param_4;
            if (((ulong)pcVar5 & 1) == 0) {
              pcVar5 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_containsString__0269d0b0,&cf_Avatar);
              local_2c8 = (uint)pcVar5;
              dVar11 = param_2;
              dVar12 = param_3;
              dVar13 = param_4;
            }
          }
          pcVar5 = local_e0;
          bVar2 = (byte)local_2c8 & 1;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_convertRect_toView__0269ded8,local_50);
          uVar3 = (uint)pcVar5;
          dVar10 = dVar8;
          param_2 = dVar11;
          param_3 = dVar12;
          param_4 = dVar13;
          FUN_001a01e0();
          pcVar5 = local_e0;
          if ((uVar3 & 1) == 0) {
            local_60 = 5;
          }
          else {
            dVar10 = dVar12;
            if ((100.0 < dVar12) || (dVar10 = dVar13, 100.0 < dVar13)) {
              param_2 = 100.0;
              local_60 = 5;
            }
            else {
              dVar9 = dVar12 - dVar13;
              if (dVar9 < 0.0) {
                dVar9 = -dVar9;
              }
              puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              dVar10 = dVar9;
              param_2 = dVar13;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
              bVar1 = ((ulong)pcVar5 & 1) != 0;
              if (bVar1) {
                param_2 = 6.0;
                dVar10 = dVar9;
              }
              if (((local_2c8 & 1) != 0) || (bVar1 && dVar9 <= 6.0)) {
                if (local_a8 == (cfstringStruct *)0x0) {
                  _objc_storeStrong(&local_a8,local_e0);
                  local_60 = 5;
                  dVar10 = dVar12;
                  local_d1 = bVar2;
                  local_d0 = dVar8;
                  dStack_c8 = dVar11;
                  local_c0 = dVar12;
                  dStack_b8 = dVar13;
                }
                else if (bVar2 == (local_d1 & 1)) {
                  bVar1 = false;
                  param_2 = local_d0 - 0.5;
                  if (param_2 <= dVar8) {
                    param_2 = local_d0 + 0.5;
                    dVar10 = dVar8;
                    if (dVar8 <= param_2) {
                      param_2 = dStack_c8 - 0.5;
                      dVar10 = dVar11;
                      if (param_2 <= dVar11) {
                        param_2 = dStack_c8 + 0.5;
                        if (dVar11 <= param_2) {
                          dVar10 = dVar12 * dVar13;
                          param_2 = local_c0 * dStack_b8;
                          bVar1 = param_2 < dVar10;
                        }
                      }
                      else {
                        bVar1 = true;
                      }
                    }
                  }
                  else {
                    bVar1 = true;
                    dVar10 = dVar8;
                  }
                  param_3 = 0.5;
                  if (bVar1) {
                    _objc_storeStrong(&local_a8,local_e0);
                    dVar10 = dVar12;
                    local_d1 = bVar2;
                    local_d0 = dVar8;
                    dStack_c8 = dVar11;
                    local_c0 = dVar12;
                    dStack_b8 = dVar13;
                  }
                  local_60 = 0;
                }
                else {
                  if ((local_2c8 & 1) != 0) {
                    _objc_storeStrong(&local_a8,local_e0);
                    local_d1 = 1;
                    dVar10 = dVar12;
                    local_d0 = dVar8;
                    dStack_c8 = dVar11;
                    local_c0 = dVar12;
                    dStack_b8 = dVar13;
                  }
                  local_60 = 5;
                }
              }
              else {
                local_60 = 5;
              }
            }
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_48 = pcVar5;
          local_60 = 1;
          dVar10 = dVar8;
        }
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_e0,0);
      dVar8 = dVar10;
    } while ((local_60 == 0) || (iVar7 = local_60 - 5, iVar7 == 0));
    _objc_storeStrong(iVar7,&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
LAB_0019fce8:
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_40[3]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_48);
  return;
}

