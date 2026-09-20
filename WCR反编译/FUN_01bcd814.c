// FUN_01bcd814 @ 01bcd814

void FUN_01bcd814(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  char *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_01bc758c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_01be3704();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  FUN_01be3454(uVar1,&cf_m_nsHeadImgUrl);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01be33a4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  pcVar3 = "MMHeadImageView";
  _objc_getClass();
  pcVar4 = &cf_initWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  local_40 = pcVar3;
  _NSSelectorFromString();
  local_48 = pcVar4;
  if (local_40 != (char *)0x0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_instancesRespondToSelector__0269da90,pcVar4);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_40;
      _objc_alloc();
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_4c = 1;
      goto LAB_01bcda68;
    }
  }
  pcVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
             &cf_person_crop_square_fill);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithImage__0269e558);
  local_58 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTintColor__026caab0);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setContentMode__026ca8e0,1);
  pcVar3 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar3;
  local_4c = 1;
  _objc_storeStrong(&local_58,0);
LAB_01bcda68:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

