// appFilePathFromMessageWrap:cell: @ 00f41a8c

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::appFilePathFromMessageWrap_cell_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID local_d8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  SEL local_a0;
  ID local_98;
  ID local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = 0;
  local_a0 = param_2;
  local_98 = param_1;
  _objc_storeStrong(&local_a8,param_3);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_4);
  local_b8 = 0;
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_b8;
  local_b8 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  IVar4 = local_98;
  uVar1 = local_b8;
  local_58 = &cf_filePath;
  local_50 = &cf_path;
  local_48 = &cf_localPath;
  local_40 = &cf_downloadPath;
  local_38 = &cf_m_nsFilePath;
  local_30 = &cf_m_nsPath;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_existingBytesPathFromObject_sele_026ac200,uVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_d8[0] = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar5 = local_d8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_length_0269cca0);
  IVar6 = local_98;
  uVar1 = local_a8;
  IVar4 = local_d8[0];
  if (IVar5 == 0) {
    local_80 = &cf_GetAppAttachmentPath;
    local_78 = &cf_getFilePath;
    local_70 = &cf_m_nsFilePath;
    local_68 = &cf_m_nsMsgFilePath;
    local_60 = &cf_m_nsPath;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_existingBytesPathFromObject_sele_026ac200,uVar1);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_d8[0];
    local_d8[0] = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar6 = local_d8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_length_0269cca0);
    local_90 = local_98;
    uVar1 = local_a8;
    IVar4 = local_d8[0];
    if (IVar6 == 0) {
      local_88 = &cf_GetPathOfAppData_;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_existingBytesClassPathForWrap_se_026ac220,uVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = IVar4;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = IVar4;
  }
  _objc_storeStrong(local_d8);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_90;
}

