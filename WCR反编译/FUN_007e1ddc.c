// FUN_007e1ddc @ 007e1ddc

void FUN_007e1ddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_150;
  uint local_104;
  cfstringStruct *local_f0;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_40 = 1;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    while (pcVar4 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0),
          pcVar4 != (cfstringStruct *)0x0) {
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectAtIndex__0269d530,0);
      pcVar4 = local_50;
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      pcVar5 = local_50;
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_f0 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = local_f0;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        local_104 = 0;
        if (pcVar4 == (cfstringStruct *)0x0) {
          pcVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_attributedText_0269fcf8);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          local_104 = (uint)pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        if ((local_104 & 1) != 0) {
          pcVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_attributedText_0269fcf8);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_150 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_150 = &cf___;
          }
          _objc_storeStrong(&local_60,local_150);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        pcVar4 = local_60;
        FUN_007e252c();
        if ((((ulong)pcVar4 & 1) != 0) &&
           (pcVar4 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_30),
           ((ulong)pcVar4 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setText__026caa88,local_30);
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_48;
      if (pcVar5 != (cfstringStruct *)0x0) {
        pcVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(0,&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

