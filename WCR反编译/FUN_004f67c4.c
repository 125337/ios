// FUN_004f67c4 @ 004f67c4

void FUN_004f67c4(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_168;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,param_1);
  pcVar2 = local_68;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  while (pcVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
        (cfstringStruct *)((long)&MACH_HEADER.magic + 1) < pcVar2) {
    pcVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_characterAtIndex__0269fa18,0);
    pcVar2 = local_70;
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_characterAtIndex__0269fa18,
               (undefined1 *)((long)&pcVar4[-1].field3_0x18 + 7));
    pcVar4 = local_70;
    if (((short)pcVar3 == 0x22) && ((short)pcVar2 == 0x22)) {
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_40 = (undefined1 *)((long)&pcVar2[-1].field3_0x18 + 6);
      local_38 = 1;
      local_30 = 1;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_substringWithRange__0269d138,1,local_40);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_70;
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    else {
      if (((short)pcVar3 != 0x201c) || ((short)pcVar2 != 0x201d)) break;
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_60 = (undefined1 *)((long)&pcVar2[-1].field3_0x18 + 6);
      local_58 = 1;
      local_50 = 1;
      local_48 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_substringWithRange__0269d138,1,local_60);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_70;
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
  }
  if (local_70 == (cfstringStruct *)0x0) {
    local_168 = &cf___;
  }
  else {
    local_168 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_autoreleaseReturnValue(local_168);
  return;
}

