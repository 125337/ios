// FUN_00784350 @ 00784350

byte FUN_00784350(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_c0;
  undefined4 local_b4;
  long local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
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
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_a1 = 0;
    local_b4 = 1;
  }
  else {
    lVar1 = local_b0;
    FUN_00784bac();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = &cf_imagemessagecellview;
    local_98 = &cf_videomessagecellview;
    local_90 = &cf_sightmessagecellview;
    local_88 = &cf_voicemessagecellview;
    local_80 = &cf_emoticonmessagecellview;
    local_78 = &cf_appfilemessagecellview;
    local_70 = &cf_appimagemessagecellview;
    local_68 = &cf_appvideomessagecellview;
    local_60 = &cf_appemoticonmessagecellview;
    local_58 = &cf_appdefaultmessagecellview;
    local_50 = &cf_appurlmessagecellview;
    local_48 = &cf_appmusicmessagecellview;
    local_40 = &cf_locationmessagecellview;
    local_38 = &cf_appmessagecellview;
    local_30 = &cf_readermessagecellview;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c0 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a0,
               0xf);
    _objc_retainAutoreleasedReturnValue();
    FUN_00784ccc();
    local_a1 = (byte)lVar1 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_b4 = 1;
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a1 & 1;
}

