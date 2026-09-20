// FUN_000e2348 @ 000e2348

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000e2348(undefined8 param_1)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  uint local_31c;
  cfstringStruct *local_318;
  undefined *local_300;
  cfstringStruct *local_2a0;
  cfstringStruct *local_230;
  cfstringStruct *local_1e0;
  cfstringStruct *local_188;
  bool local_f1;
  cfstringStruct *local_f0;
  bool local_e1;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined4 local_7c;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_4a;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct **ppcVar2;
  
  ppcVar2 = &local_28;
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar2,param_1);
  uVar1 = (uint)ppcVar2;
  if ((local_28 == (cfstringStruct *)0x0) || (FUN_000d8808(), (uVar1 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    pcVar3 = local_28;
    FUN_000e07e8();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_28;
    local_40 = pcVar3;
    FUN_000dc670();
    _objc_retainAutoreleasedReturnValue();
    local_49 = (byte)local_28;
    local_48 = pcVar4;
    FUN_000e3de4();
    pcVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c8373);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_4a = (byte)pcVar4;
    FUN_000e4084(local_28);
    uVar1 = (uint)local_28;
    FUN_000dc544();
    if ((uVar1 & 1) == 0) {
      pcVar3 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028c8376);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar3 != (cfstringStruct *)0x0) {
        FUN_000e426c(local_28);
        _objc_setAssociatedObject(local_28,&DAT_028c8376,0,1);
      }
      if ((local_49 & 1) == 0) {
        _objc_setAssociatedObject(local_28,&DAT_028c8373,0,1);
        _objc_setAssociatedObject(local_28,&DAT_028c8374,0,1);
        if ((local_4a & 1) != 0) {
          FUN_000e10c4(local_28);
        }
        pcVar3 = local_28;
        FUN_000d8d08(local_28,"m_arrMsg");
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_28;
        local_58 = pcVar3;
        FUN_000d8d08(local_28,"m_dicMsgView");
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_58;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_60 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)pcVar3 & 1) == 0) {
          local_188 = (cfstringStruct *)0x0;
        }
        else {
          local_188 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
        }
        pcVar3 = local_60;
        local_68 = local_188;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        }
        _NSLog(&
               cf__wcr__chat_member_search_passthroughcontroller__pquery_filter_0all__luvisible__lucache__lu
              );
        local_38 = 1;
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      else {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectedSegmentIndex_0269e998);
        local_7c = 0;
        local_1e0 = pcVar3;
        if ((long)pcVar3 < 0) {
          local_1e0 = (cfstringStruct *)0x0;
        }
        local_88 = local_1e0;
        local_70 = local_1e0;
        pcVar4 = local_28;
        local_78 = pcVar3;
        FUN_000d8d08(local_28,"m_arrMsg");
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_90 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)pcVar4 & 1) == 0) {
          _objc_storeStrong(&local_90,*(undefined8 *)PTR____NSArray0___02578280);
        }
        pcVar3 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028c8374);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 0;
        local_b9 = 0;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_98 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((((ulong)pcVar3 & 1) == 0) || ((local_49 & 1) == 0)) {
          local_230 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_b9 = 1;
          local_b8 = local_230;
        }
        else {
          local_230 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_mutableCopy_0269d8a0);
          local_a9 = 1;
          local_a8 = local_230;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = local_230;
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        pcVar3 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028c8394);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_90;
        local_c8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
        if (pcVar3 < pcVar4) {
          local_c8 = (cfstringStruct *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_removeAllObjects_0269d508);
        }
        for (local_d0 = local_c8; pcVar3 = local_d0, pcVar6 = local_90,
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0), pcVar4 = local_28,
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038, pcVar3 < pcVar6;
            local_d0 = (cfstringStruct *)((long)&local_d0->field0_0x0 + 1)) {
          pcVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_objectAtIndexedSubscript__0269cc78,local_d0);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_40;
          local_d8 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          local_2a0 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_2a0 = &cf___;
          }
          FUN_000e0924(pcVar3,local_2a0);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if (((ulong)pcVar3 & 1) == 0) {
            local_38 = 6;
          }
          else {
            pcVar4 = local_d8;
            FUN_000e45bc(local_d8,local_70);
            pcVar3 = local_a0;
            if (((ulong)pcVar4 & 1) == 0) {
              local_38 = 6;
            }
            else {
              puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,
                         PTR_s_numberWithUnsignedInteger__0269e4d0,local_d0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              local_38 = 0;
            }
          }
          _objc_storeStrong(&local_d8,0);
        }
        pcVar3 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(pcVar4,&DAT_028c8394,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar3 = local_28;
        local_e1 = (local_49 & 1) == 0;
        if (local_e1) {
          local_300 = (undefined *)0x0;
        }
        else {
          local_300 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = local_300;
        }
        local_e1 = !local_e1;
        _objc_setAssociatedObject(pcVar3,&DAT_028c8373,local_300,1);
        if (local_e1) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
        }
        pcVar3 = local_28;
        local_f1 = (local_49 & 1) == 0;
        if (local_f1) {
          local_318 = (cfstringStruct *)0x0;
        }
        else {
          local_318 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_copy_0269d150);
          local_f0 = local_318;
        }
        local_f1 = !local_f1;
        _objc_setAssociatedObject(pcVar3,&DAT_028c8374,local_318,1);
        if (local_f1) {
          (*(code *)PTR__objc_release_02578630)(local_f0);
        }
        pcVar3 = local_98;
        local_31c = 0;
        if (((local_49 & 1) != 0) && (local_31c = 0, (local_4a & 1) != 0)) {
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          local_31c = 0;
          if (((ulong)pcVar3 & 1) != 0) {
            pcVar3 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToArray__0269e9b0,local_a0);
            local_31c = (uint)pcVar3;
          }
        }
        if ((local_31c & 1) == 0) {
          FUN_000e10c4(local_28);
        }
        FUN_000e4a4c(local_28,&cf_apply,(byte)local_31c & 1);
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_90,0);
        local_38 = 0;
      }
    }
    else {
      FUN_000dfeb0(local_28);
      local_38 = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

