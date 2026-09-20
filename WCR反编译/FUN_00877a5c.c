// FUN_00877a5c @ 00877a5c

void FUN_00877a5c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  undefined *local_398;
  undefined *local_390;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined8 local_208;
  undefined1 *local_200;
  undefined *local_1f8;
  undefined1 *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188 [3];
  uint local_16c;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = (undefined *)0x0;
  _objc_storeStrong(&local_168,param_1);
  puVar3 = local_168;
  if (local_168 == (undefined *)0x0) {
    local_160 = (undefined *)0x0;
    local_16c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_168;
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_188[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 == (undefined *)0x0) {
        puVar3 = local_188[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar3 == (undefined *)0x0) {
          local_16c = 0;
        }
        else {
          puVar3 = local_188[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_titleLabel_026caba0);
          _objc_retainAutoreleasedReturnValue();
          local_16c = 1;
          local_160 = puVar3;
        }
      }
      else {
        puVar3 = local_188[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_imageView_0269f230);
        _objc_retainAutoreleasedReturnValue();
        local_16c = 1;
        local_160 = puVar3;
      }
      _objc_storeStrong(local_188,0);
      if (local_16c != 0) goto LAB_00878520;
    }
    local_58 = &cf_imageView;
    local_50 = &cf__imageView;
    local_48 = &cf_iconView;
    local_40 = &cf__iconView;
    local_38 = &cf_titleLabel;
    local_30 = &cf__titleLabel;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar3;
    _memset(auStack_1d8,0,0x40);
    puVar3 = local_190;
    (*(code *)PTR__objc_retain_02578638)();
    local_2c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_d8,0x10);
    if (local_2c0 != (undefined *)0x0) {
      lVar8 = *local_1c8;
      local_2c8 = (undefined *)0x0;
      do {
        do {
          if (*local_1c8 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar8,puVar3);
          }
          local_198 = *(undefined8 *)(local_1d0 + (long)local_2c8 * 8);
          puVar4 = local_168;
          FUN_00876968(local_168,local_198);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_1e0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          puVar2 = local_1e0;
          bVar1 = ((ulong)puVar4 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_160 = puVar2;
          }
          local_16c = (uint)bVar1;
          _objc_storeStrong(&local_1e0,0);
          if (local_16c != 0) goto LAB_00877f2c;
          local_2c8 = local_2c8 + 1;
        } while (local_2c8 < local_2c0);
        local_2c0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_d8,
                   0x10);
        local_2c8 = (undefined *)0x0;
      } while (local_2c0 != (undefined *)0x0);
    }
    local_16c = 0;
LAB_00877f2c:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_16c == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_168
                );
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_1e8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithObject__0269d538);
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      do {
        puVar3 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
        if (puVar3 == (undefined *)0x0) {
          local_160 = (undefined *)0x0;
          iVar7 = 1;
          local_16c = 1;
          break;
        }
        puVar3 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_removeLastObject_0269e830);
        puVar5 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_200 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_removeLastObject_0269e830);
        if (((local_1f8 == local_168) ||
            ((undefined1 *)((long)&MACH_HEADER.magic + 1) < local_200 &&
             local_200 + -2 != (undefined1 *)0x0)) ||
           (puVar2 = local_1f8, FUN_00878580(local_200 + -2), puVar3 = local_1f8,
           ((ulong)puVar2 & 1) == 0)) {
          if (local_200 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
            _memset(auStack_248,0,0x40);
            puVar3 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_390 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_390 != (undefined *)0x0) {
              lVar8 = *local_238;
              local_398 = (undefined *)0x0;
              do {
                do {
                  if (*local_238 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_238 - lVar8,puVar3);
                  }
                  local_208 = *(undefined8 *)(local_240 + (long)local_398 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_addObject__0269d180,local_208);
                  puVar5 = local_1f0;
                  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,
                             PTR_s_numberWithUnsignedInteger__0269e4d0,local_200 + 1);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar2);
                  local_398 = local_398 + 1;
                } while (local_398 < local_390);
                local_390 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,
                           auStack_158,0x10);
                local_398 = (undefined *)0x0;
              } while (local_390 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_16c = 0;
          }
          else {
            local_16c = 4;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_160 = puVar3;
          local_16c = 1;
        }
        _objc_storeStrong(&local_1f8,0);
      } while ((local_16c == 0) || (iVar7 = local_16c - 4, iVar7 == 0));
      _objc_storeStrong(iVar7,&local_1f0);
      _objc_storeStrong(&local_1e8,0);
    }
    _objc_storeStrong(&local_190,0);
  }
LAB_00878520:
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

