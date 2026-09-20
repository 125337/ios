// descriptionForObject: @ 0091d9d0

/* Function Stack Size: 0x18 bytes */

ID WCNavigationMonitor::descriptionForObject_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  long lVar5;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined *local_148;
  ID local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  undefined4 local_cc;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar2 = local_c8;
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (((*(byte *)(local_b8 + 8) & 1) == 0) || (*(long *)(local_b8 + 0x28) == 0)) {
    if (local_c8 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf_nil;
      local_cc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_cc = 1;
    }
  }
  else if (local_c8 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_nil;
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    pcVar3 = local_c8;
    if (((ulong)pcVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      pcVar2 = local_c8;
      if (((ulong)pcVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        pcVar3 = local_c8;
        if (((ulong)pcVar2 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          pcVar2 = local_c8;
          local_b0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_stringWithFormat__0269cca8,&cf_<__:_p>);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            local_cc = 1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
            pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            if (pcVar2 < (cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 3)) {
              puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_c8;
              local_168 = PTR___NSConcreteGlobalBlock_02578658;
              local_160 = 0xd0800000;
              local_15c = 0;
              local_158 = FUN_0091e2f4;
              local_150 = &DAT_02581060;
              local_138 = puVar1;
              (*(code *)PTR__objc_retain_02578638)();
              IVar4 = local_b8;
              local_148 = puVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_140 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_168);
              pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              puVar1 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_componentsJoinedByString__0269d140,&cf__);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_____);
              _objc_retainAutoreleasedReturnValue();
              local_b0 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(puVar1);
              local_cc = 1;
              _objc_storeStrong(&local_140);
              _objc_storeStrong(&local_148,0);
              _objc_storeStrong(&local_138,0);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_<NSDictionary:_luitems>);
              _objc_retainAutoreleasedReturnValue();
              local_cc = 1;
              local_b0 = pcVar3;
            }
            _objc_storeStrong(&local_130,0);
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_d8 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
          pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          if (pcVar3 < (cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 3)) {
            puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = puVar1;
            _memset(auStack_128,0,0x40);
            pcVar3 = local_c8;
            (*(code *)PTR__objc_retain_02578638)();
            local_1d0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8
                       ,0x10);
            if (local_1d0 != (cfstringStruct *)0x0) {
              lVar5 = *local_118;
              local_1d8 = (cfstringStruct *)0x0;
              do {
                do {
                  if (*local_118 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_118 - lVar5,pcVar3);
                  }
                  puVar1 = local_e0;
                  local_e8 = *(undefined8 *)(local_120 + (long)local_1d8 * 8);
                  IVar4 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b8,PTR_s_descriptionForObject__026aa4d8,local_e8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(IVar4);
                  local_1d8 = (cfstringStruct *)((long)&local_1d8->field0_0x0 + 1);
                } while (local_1d8 < local_1d0);
                local_1d0 = pcVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                           auStack_a8,0x10);
                local_1d8 = (cfstringStruct *)0x0;
              } while (local_1d0 != (cfstringStruct *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            puVar1 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_componentsJoinedByString__0269d140,&cf__);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_____);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            local_cc = 1;
            _objc_storeStrong(&local_e0,0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_<NSArray:_luitems>);
            _objc_retainAutoreleasedReturnValue();
            local_cc = 1;
            local_b0 = pcVar2;
          }
          _objc_storeStrong(&local_d8,0);
        }
      }
      else {
        pcVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringValue_0269ef08);
        _objc_retainAutoreleasedReturnValue();
        local_cc = 1;
        local_b0 = pcVar3;
      }
    }
    else {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      local_cc = 1;
      local_b0 = pcVar3;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

