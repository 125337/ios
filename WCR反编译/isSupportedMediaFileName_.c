// isSupportedMediaFileName: @ 01aebdf4

/* Function Stack Size: 0x18 bytes */

bool WCRefineHomeAvatarStripSettingsViewController::isSupportedMediaFileName_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  SEL local_78;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = (cfstringStruct *)0x0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  pcVar1 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_a0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_68 = &cf_mp4;
  local_60 = &cf_mov;
  local_58 = &cf_m4v;
  local_50 = &cf_gif;
  local_48 = &cf_png;
  local_40 = &cf_jpg;
  local_38 = &cf_jpeg;
  local_30 = &cf_webp;
  local_28 = &cf_bmp;
  local_20 = &cf_heic;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,10)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return (bool)puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

