// writeTempBackupData:suggestedName: @ 00f0abe0

/* Function Stack Size: 0x20 bytes */

ID WCRefineCloudBackupService::writeTempBackupData_suggestedName_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct local_40;
  ID local_20;
  cfstringStruct *local_18;
  
  local_40.field2_0x10 = (undefined *)0x0;
  local_40.field3_0x18 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_40.field2_0x10,param_3);
  local_40.field1_0x8 = 0;
  _objc_storeStrong(&local_40.field1_0x8,param_4);
  pcVar1 = (cfstringStruct *)local_40.field1_0x8;
  (*(code *)PTR__objc_msgSend_02578628)(local_40.field1_0x8,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_49 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = &cf_WCRefineBackup_zip;
  }
  else {
    local_80 = (cfstringStruct *)local_40.field1_0x8;
    (*(code *)PTR__objc_msgSend_02578628)(local_40.field1_0x8,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_80;
  }
  local_49 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40.field0_0x0 = (qword)local_80;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = (cfstringStruct *)local_40.field0_0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_40.field0_0x0,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_zip);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_plist);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = &local_40;
      _objc_storeStrong(pcVar1,&cf_WCRefineBackup_zip);
    }
  }
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  _arc4random_uniform(0xffffffff);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_WCRefineCloud__u___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar3 = local_40.field2_0x10;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40.field2_0x10,PTR_s_writeToFile_atomically__0269f928,local_60,1);
  local_18 = local_60;
  if (((ulong)puVar3 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_40.field1_0x8,0);
  _objc_storeStrong(&local_40.field2_0x10,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

