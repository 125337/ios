// FUN_0019ae70 @ 0019ae70

void FUN_0019ae70(void)

{
  uint uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_30 [3];
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)();
  uVar1 = (uint)pcVar2;
  local_30[0] = (cfstringStruct *)0x0;
  FUN_00199908();
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf__);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar3 = local_18;
      FUN_0019ab64(local_18,uVar1 & 1);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_0019a838();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30[0];
      local_30[0] = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    else {
      pcVar3 = local_18;
      FUN_00199ed4(local_18,uVar1 & 1);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_001999e0();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30[0];
      local_30[0] = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  if (local_30[0] == (cfstringStruct *)0x0) {
    pcVar2 = &cf_icons_filled_me;
    FUN_0019b744();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30[0];
    local_30[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  if (local_30[0] == (cfstringStruct *)0x0) {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,&cf_icons_filled_me);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30[0];
    local_30[0] = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_30[0] == (cfstringStruct *)0x0) {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,&cf_plugins_icon);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30[0];
    local_30[0] = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_30[0] == (cfstringStruct *)0x0) {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
               &cf_person_circle_fill);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30[0];
    local_30[0] = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_30[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_30);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

