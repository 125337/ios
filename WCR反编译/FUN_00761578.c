// FUN_00761578 @ 00761578

void FUN_00761578(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_titleForState__026a2208,0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar4 = local_30;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentTitle_026a2200);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      pcVar4 = local_30;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_30;
        local_30 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        pcVar4 = local_30;
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar4 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_attributedTitleForState__026a7d70,0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
          local_38 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
          bVar1 = false;
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_string_0269cc38);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = pcVar2 != (cfstringStruct *)0x0;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if (bVar1) {
            pcVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_string_0269cc38);
            _objc_retainAutoreleasedReturnValue();
            local_18 = pcVar4;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf___;
          }
          local_24 = 1;
          _objc_storeStrong(&local_38,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar4;
          local_24 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar4;
        local_24 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar4;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

