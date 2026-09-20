// describeHTTPError:status:body: @ 00f0afbc

/* Function Stack Size: 0x28 bytes */

ID WCRefineCloudBackupService::describeHTTPError_status_body_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_70;
  undefined1 *local_50;
  undefined4 local_44;
  undefined8 local_40;
  long_long local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_40 = 0;
  local_38 = param_4;
  _objc_storeStrong(&local_40,param_5);
  if (local_30 == (cfstringStruct *)0x0) {
    if (local_38 == 0x191) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_1Y_hg_Sb;
      local_44 = 1;
    }
    else if (local_38 == 0x193) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Nvb_;
      local_44 = 1;
    }
    else if (local_38 == 0x194) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Nzlg_b0RYNeN;
      local_44 = 1;
    }
    else if (local_38 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_lg6e0RgRhVT_;
      local_44 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      if (&segment_command_00000020.filesize < puVar1) {
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,0x50);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_50;
        local_50 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (puVar3 == (undefined1 *)0x0) {
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_HTTP_ld)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar4;
      }
      else {
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_H);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar4;
      }
      local_44 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  else {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_70 = &cf_Q__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_44 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

