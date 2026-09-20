// FUN_01c2d02c @ 01c2d02c

double FUN_01c2d02c(undefined8 param_1,long param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  float fVar4;
  double dVar5;
  double local_98;
  cfstringStruct *local_80;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  local_20 = param_2;
  _objc_getAssociatedObject(local_18,DAT_028c6850);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  _objc_setAssociatedObject(local_18,DAT_028c6850,0,1);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &cf___;
  if ((local_28 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    if ((pcVar2 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_80 = &cf___;
      }
      _objc_storeStrong(&local_30,local_80);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_38,0);
  }
  pcVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  fVar4 = 1.0;
  if (local_20 != 3) {
    fVar4 = 0.0;
  }
  local_98 = (double)fVar4;
  pcVar2 = local_30;
  dVar5 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    local_98 = dVar5;
  }
  FUN_01c34c18(local_20);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return local_98;
}

