// douyinImageURLsFromHTML: @ 01038414

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinImageURLsFromHTML_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1b8;
  undefined *local_1b0;
  ID local_190;
  ID local_168;
  ID local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  undefined *local_f8;
  ID local_f0;
  ID local_e8;
  undefined4 local_dc;
  ID local_d8;
  SEL local_d0;
  ID local_c8;
  ID local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  IVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    IVar1 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_c0 = IVar1;
  }
  else {
    IVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_stringByRemovingPercentEncoding_0269d840);
    _objc_retainAutoreleasedReturnValue();
    local_168 = IVar1;
    if (IVar1 == 0) {
      local_168 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_168;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_stringByRemovingPercentEncoding_0269d840);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
    IVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
    if (IVar2 <= IVar1 && IVar1 - IVar2 != 0) {
      _objc_storeStrong(IVar1 - IVar2,&local_e8,local_f0);
    }
    IVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_unescapeJSONString__026adcb8,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_190 = IVar1;
    if (IVar1 == 0) {
      local_190 = local_e8;
    }
    _objc_storeStrong(&local_e8,local_190);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_38 = &cf_https___________a_z0_9____douyinpic__com_____s<>__;
    local_30 = &cf_https___________a_z0_9____byteimg__com_____s<>__;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar4;
    _memset(auStack_148,0,0x40);
    puVar3 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_b8,0x10);
    if (local_1b0 != (undefined *)0x0) {
      lVar5 = *local_138;
      local_1b8 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar5 != 0) {
            _objc_enumerationMutation(*local_138 - lVar5,puVar3);
          }
          local_108 = *(undefined8 *)(local_140 + (long)local_1b8 * 8);
          IVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_stringsMatchingPattern_inText_ca_026adf58,local_108,local_e8,0);
          _objc_retainAutoreleasedReturnValue();
          local_150 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObjectsFromArray__0269d540,IVar1)
          ;
          _objc_storeStrong(&local_150,0);
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_b8,
                   0x10);
        local_1b8 = (undefined *)0x0;
      } while (local_1b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_compactedDouyinNoteImageURLs__026adf60,local_100);
    _objc_retainAutoreleasedReturnValue();
    local_dc = 1;
    local_c0 = IVar1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

