// FUN_00530c58 @ 00530c58

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00530c58(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *local_330;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_168;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  byte local_10a;
  byte local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8 [3];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar1 = local_b8;
  FUN_00531f90(local_b8,&cf_contentDesc);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_00530928();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_b8;
  FUN_00531f90(local_b8,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c0;
  local_d8[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_d8[0];
    FUN_00531f90(local_d8[0],&cf_desc);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00530928();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_c0;
    local_c0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar1 = local_d8[0];
  FUN_00531f90(local_d8[0],&cf_type);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_d8[0];
  local_e0 = pcVar2;
  FUN_00531f90(local_d8[0],&cf_mediaList);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_d8[0];
  local_e8 = pcVar1;
  FUN_00531f90(local_d8[0],&cf_finderShareToMomentsItem);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  FUN_00531f90();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  FUN_00530928();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
  local_f1 = true;
  if (((pcVar1 == (cfstringStruct *)0x0) &&
      (local_f1 = true, local_e0 != (cfstringStruct *)(segment_command_00000020.segname + 3))) &&
     (local_f1 = true, local_e0 != (cfstringStruct *)(segment_command_00000020.segname + 10))) {
    local_f1 = local_e0 == (cfstringStruct *)((long)&segment_command_00000020.vmaddr + 3);
  }
  pcVar1 = local_b8;
  FUN_00531f90(local_b8,&cf_weappInfo);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_00531f90();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_00530928();
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar2 = local_b8;
    FUN_00531f90(local_b8,&cf_snsWeAppInfo);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00531f90();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_00530928();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_100;
    local_100 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_108 = pcVar1;
  if ((local_f1 & 1) == 0) {
    pcVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    pcVar1 = local_e8;
    if (pcVar2 == (cfstringStruct *)0x0) {
      if (local_e0 == (cfstringStruct *)((long)&MACH_HEADER.flags + 2)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,&cf__);
      }
      else {
        local_109 = 0;
        local_10a = 0;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)pcVar1 & 1) != 0) {
          _memset(auStack_158,0,0x40);
          pcVar1 = local_e8;
          (*(code *)PTR__objc_retain_02578638)();
          local_2b0 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          if (local_2b0 != (cfstringStruct *)0x0) {
            lVar7 = *local_148;
            local_2b8 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_148 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_148 - lVar7,pcVar1);
                }
                lVar8 = *(long *)(local_150 + (long)local_2b8 * 8);
                local_118 = lVar8;
                FUN_00531f90(lVar8,&cf_type);
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar8;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(lVar8);
                if (((lVar6 == 2) || (lVar6 == 3)) || (lVar6 == 5)) {
                  local_109 = 1;
                }
                else if (lVar6 == 1) {
                  local_10a = 1;
                }
                local_2b8 = (cfstringStruct *)((long)&local_2b8->field0_0x0 + 1);
                local_160 = lVar6;
              } while (local_2b8 < local_2b0);
              local_2b0 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                         auStack_a8,0x10);
              local_2b8 = (cfstringStruct *)0x0;
            } while (local_2b0 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        if (((local_109 & 1) == 0) &&
           (local_e0 != (cfstringStruct *)((long)&MACH_HEADER.filetype + 3))) {
          if ((local_10a & 1) == 0) {
            if ((((local_e0 == (cfstringStruct *)((long)&MACH_HEADER.magic + 3)) ||
                 (local_e0 == (cfstringStruct *)((long)&MACH_HEADER.cputype + 1))) ||
                (local_e0 == (cfstringStruct *)((long)&MACH_HEADER.cputype + 2))) ||
               ((local_e0 == (cfstringStruct *)&MACH_HEADER.flags ||
                (local_e0 == (cfstringStruct *)(segment_command_00000020.segname + 2))))) {
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,&cf__);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,&cf__);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,&cf__);
        }
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,&cf__);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_addObject__0269d180,&cf__);
  }
  pcVar1 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_componentsJoinedByString__0269d140,&cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c0;
  local_168 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_168, (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    pcVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
    pcVar1 = local_c0;
    if (pcVar2 == (cfstringStruct *)0x0) {
      if (local_168 == (cfstringStruct *)0x0) {
        local_330 = &cf___;
      }
      else {
        local_330 = local_168;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_330;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar1;
    }
  }
  else {
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar1;
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(local_d8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

