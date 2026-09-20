// confirmFloatingIconInput: @ 019b8e2c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarButtonActionViewController::confirmFloatingIconInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  uint local_fc;
  cfstringStruct *local_f0;
  cfstringStruct *local_d8;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined4 local_64;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_iconAlert_026baa00);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWcr_iconAlert__026ba9f8,0);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &::cf___;
  if ((local_40 != (cfstringStruct *)0x0) &&
     (pcVar5 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
     ((ulong)pcVar5 & 1) != 0)) {
    pcVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_performSelector__026ca7b8,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar5;
    if ((pcVar5 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar5 & 1) != 0)) {
      pcVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_d8 = &::cf___;
      }
      _objc_storeStrong(&local_48,local_d8);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    _objc_storeStrong(&local_50,0);
  }
  pcVar5 = local_48;
  puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = local_48;
  local_48 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_f0 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e442b);
  _objc_retainAutoreleasedReturnValue();
  local_58 = local_f0;
  if (local_f0 == (cfstringStruct *)0x0) {
    local_f0 = (cfstringStruct *)0xffffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_integerValue_026ca750);
  }
  local_60 = local_f0;
  _objc_setAssociatedObject(local_28,&DAT_028e442b,0,1);
  if (((long)local_60 < 0) || (3 < (long)local_60)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eHe);
    local_64 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = &::cf___;
    pcVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_svg_);
      if ((((ulong)pcVar5 & 1) == 0) &&
         (pcVar5 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_image_),
         ((ulong)pcVar5 & 1) == 0)) {
        pcVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
        local_fc = 1;
        if (((ulong)pcVar8 & 1) == 0) {
          local_78 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          bVar4 = true;
          local_88 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          bVar3 = true;
          pcVar8 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_fc = 1;
          if (((ulong)pcVar8 & 1) == 0) {
            local_98 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            local_a8 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            pcVar8 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_fc = (uint)pcVar8;
          }
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if (bVar3) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        if (bVar4) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        if ((local_fc & 1) == 0) {
          pcVar5 = &cf_svg_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_svg_,PTR_s_stringByAppendingString__0269d398,local_48);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_70;
          local_70 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
        }
        else {
          pcVar5 = &cf_image_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_image_,PTR_s_stringByAppendingString__0269d398,local_48);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_70;
          local_70 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
        }
      }
      else {
        _objc_storeStrong(&local_70,local_48);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setStoredIcon_forTabIndex__026ba9d8,local_70,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

