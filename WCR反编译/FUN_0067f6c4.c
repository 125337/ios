// FUN_0067f6c4 @ 0067f6c4

void FUN_0067f6c4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  uint local_a4;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  FUN_006807d4();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  pcVar2 = local_28;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_44 = 1;
  }
  else {
    pcVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    while( true ) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      puVar3 = local_58;
      local_a4 = 0;
      if (pcVar2 != (cfstringStruct *)0x0) {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_characterAtIndex__0269fa18,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_characterIsMember__026a20a0,(ulong)pcVar2 & 0xffffffff);
        local_a4 = (uint)puVar3;
      }
      if ((local_a4 & 1) == 0) break;
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_50 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_50;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

