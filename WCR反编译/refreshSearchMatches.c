// refreshSearchMatches @ 0196857c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::refreshSearchMatches(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  dispatch_queue_t pdVar5;
  cfstringStruct *local_100;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined1 auStack_68 [8];
  cfstringStruct *local_60;
  undefined1 auStack_58 [8];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_39;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchField_026ad308);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    pcVar1 = local_28;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchGeneration_026b9d38);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setSearchGeneration__026b9d40,
                 (undefined1 *)((long)&pcVar2->field0_0x0 + 1));
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchHighlightRanges_026ba090);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      local_39 = pcVar2 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchMatchRanges__026b9e00,
                 *(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchMatchIndex__026b9e10,0xffffffffffffffff);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchMatchTotal__026b9e18,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchMatchTruncated__026b9e20,0);
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchCountLabel_026ba0a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if ((local_39 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_replaceSearchHighlightOverla_026ba0b0,
                   *(undefined8 *)PTR____NSArray0___02578280,0xffffffffffffffff);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setSearchHighlightRanges__026b9e08,
                   *(undefined8 *)PTR____NSArray0___02578280);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recolorEditor_026b9e38);
      }
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_100 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_100 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_100;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchGeneration_026b9d38);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setSearchGeneration__026b9d40,
                 (undefined1 *)((long)&pcVar2->field0_0x0 + 1));
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchGeneration_026b9d38);
      local_50 = pcVar1;
      _objc_initWeak(auStack_58,local_28);
      pdVar5 = _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_48;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_01968b20;
      local_80 = &DAT_02583088;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar2 = local_38;
      local_78 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = pcVar2;
      _objc_copyWeak(auStack_68,auStack_58);
      local_60 = local_50;
      _dispatch_async(pdVar5,&local_98);
      (*(code *)PTR__objc_release_02578630)(pdVar5);
      _objc_destroyWeak(auStack_68);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
      _objc_destroyWeak(auStack_58);
      _objc_storeStrong(&local_48,0);
      local_40 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

