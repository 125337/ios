// videoPathFromMessageWrap: @ 00f41ecc

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::videoPathFromMessageWrap_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID local_78;
  undefined8 local_70;
  SEL local_68;
  ID local_60;
  ID local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  IVar3 = local_60;
  uVar1 = local_70;
  local_38 = &cf_getFormatVideoPath;
  local_30 = &cf_getTempVideoPath;
  local_28 = &cf_GetCdnDownloadPathOfVideo;
  local_20 = &cf_getRawFormatPath;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_existingMediaPathFromObject_sele_026ac228,uVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  local_58 = local_60;
  uVar1 = local_70;
  IVar3 = local_78;
  if (IVar4 == 0) {
    local_50 = &cf_GetPathOfMesVideoWithMessageWrap_;
    local_48 = &cf_GetPathOfRawOrCompressVideo_;
    local_40 = &cf_GetTempPathOfMesVideoWithMessageWrap_;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_existingClassPathForWrap_selecto_026ac230,uVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = IVar3;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_58;
}

