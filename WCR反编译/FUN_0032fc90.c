// FUN_0032fc90 @ 0032fc90

void FUN_0032fc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_160;
  uint local_114;
  cfstringStruct *local_100;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_48 = 1;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar4;
    while (pcVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
          pcVar4 != (cfstringStruct *)0x0) {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectAtIndex__0269d530,0);
      pcVar4 = local_58;
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      pcVar5 = local_58;
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = pcVar5;
        FUN_00330430();
        if (((ulong)pcVar5 & 1) != 0) {
          pcVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          local_100 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_100 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = local_100;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
          local_114 = 0;
          if (pcVar4 == (cfstringStruct *)0x0) {
            pcVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_attributedText_0269fcf8);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
            pcVar5 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            local_114 = (uint)pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if ((local_114 & 1) != 0) {
            pcVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_attributedText_0269fcf8);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_160 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_160 = &cf___;
            }
            _objc_storeStrong(&local_68,local_160);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          pcVar4 = local_68;
          FUN_00330820(local_68,local_30);
          if ((((ulong)pcVar4 & 1) != 0) &&
             (pcVar4 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_68,PTR_s_isEqualToString__0269ccc8,local_38), ((ulong)pcVar4 & 1) == 0
             )) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setText__026caa88,local_38);
          }
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_50;
      if (pcVar5 != (cfstringStruct *)0x0) {
        pcVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(0,&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

