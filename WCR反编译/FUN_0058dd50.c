// FUN_0058dd50 @ 0058dd50

void FUN_0058dd50(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_140;
  ulong local_e8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_5a;
  byte local_59;
  ulong local_58;
  ulong local_50;
  ulong local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_content_026a4a90);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (0x18 < uVar1) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringToIndex__0269d6c0,0x18);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  local_59 = 0;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageArray_026a54a8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar2 & 1) == 0) {
    local_e8 = 0;
  }
  else {
    local_e8 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageArray_026a54a8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_50 = local_e8;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sightDraft_026a4d98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_5a = uVar1 != 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  local_68 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,local_38);
  }
  pcVar5 = local_68;
  if (local_50 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if ((local_5a & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,&cf__);
  }
  pcVar5 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_140 = &cf_gSWQ_;
  }
  else {
    local_140 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_componentsJoinedByString__0269d140,&cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_140;
  if (pcVar5 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

