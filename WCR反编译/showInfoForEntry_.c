// showInfoForEntry: @ 0199b680

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::showInfoForEntry_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  byte local_89;
  long local_88;
  byte local_79;
  long local_78;
  byte local_69;
  long local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  byte local_41;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_isDir);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  local_41 = (byte)lVar1;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_attributesOfItemAtPath_error__0269db08,local_40,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_38;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendFormat__0269d148,&cf_Ty_);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = local_60;
  local_69 = 0;
  local_79 = 0;
  local_89 = 0;
  if ((local_41 & 1) == 0) {
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (lVar1 != 0) {
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = lVar1;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf___W_);
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar3 = local_60;
  if ((local_41 & 1) == 0) {
    puVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_fileSize_026a1640);
    FUN_0198a97c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf__Y__);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_60;
    local_98 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_S_T_);
    _objc_storeStrong(&local_98,0);
  }
  puVar3 = local_60;
  puVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_objectForKeyedSubscript__0269d098,
             *(undefined8 *)PTR__NSFileModificationDate_02578020);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_0198ab0c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_O9e_);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_60;
  puVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_objectForKeyedSubscript__0269d098,
             *(undefined8 *)PTR__NSFileCreationDate_02578018);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_0198ab0c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_R__);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
  lVar1 = local_40;
  puVar4 = local_60;
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_0199bd8c;
  local_a8 = &DAT_0257a770;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_____,puVar4,&cf_Y6R_,
             &local_c0,&cf__b,&PTR___NSConcreteGlobalBlock_0258a788,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

