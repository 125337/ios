// applyDurationFromValue:toResult:millisecondThreshold: @ 01024ae4

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkParser::applyDurationFromValue_toResult_millisecondThreshold_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined1 *local_70;
  undefined1 *local_68;
  double local_60;
  undefined4 local_58;
  char local_51;
  undefined1 *local_50;
  long_long local_48;
  long local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined1 *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_40;
  local_48 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_durationSeconds_026ada90);
  puVar4 = local_38;
  local_51 = '\0';
  bVar1 = true;
  if ((lVar2 == 0) && (bVar1 = true, local_38 != (undefined1 *)0x0)) {
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_51 = '\x01';
    bVar1 = puVar4 == puVar3;
    local_50 = puVar3;
  }
  if (local_51 != '\0') {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  puVar4 = local_38;
  if (bVar1) {
    local_58 = 1;
  }
  else {
    dVar8 = 0.0;
    local_60 = 0.0;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    puVar3 = local_38;
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
        local_60 = dVar8;
      }
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,&cf__);
      if (((ulong)puVar5 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_doubleValue_026ca608);
        local_60 = dVar8;
      }
      else {
        puVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0);
        if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
          puVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectAtIndexedSubscript__0269cc78,0)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar6 = local_70;
          dVar9 = dVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectAtIndexedSubscript__0269cc78,1)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_60 = dVar9 + dVar8 * 60.0;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        else {
          puVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
          if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
            puVar5 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_objectAtIndexedSubscript__0269cc78,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            puVar6 = local_70;
            dVar9 = dVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_objectAtIndexedSubscript__0269cc78,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar9 = dVar9 * 60.0 + dVar8 * 3600.0;
            puVar7 = local_70;
            dVar8 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_objectAtIndexedSubscript__0269cc78,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_60 = dVar9 + dVar8;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_doubleValue_026ca608);
            local_60 = dVar8;
          }
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    if (0.0 < local_60) {
      bVar1 = true;
      if ((-1 < (long)local_48) && (bVar1 = false, 0 < (long)local_48)) {
        bVar1 = (double)(long)local_48 <= local_60;
      }
      if (bVar1) {
        local_60 = local_60 / 1000.0;
      }
      if ((local_60 <= 0.0) || (86400.0 < local_60)) {
        local_58 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_setDurationSeconds__026add90,(long)local_60);
        local_58 = 0;
      }
    }
    else {
      local_58 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

