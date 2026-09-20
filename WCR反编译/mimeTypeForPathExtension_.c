// mimeTypeForPathExtension: @ 01e98104

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoCardView::mimeTypeForPathExtension_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
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
  local_f0 = (cfstringStruct *)0x0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  pcVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_110 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_110 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_110;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_d8 = &cf_png;
  local_80 = &cf_image_png;
  local_d0 = &cf_jpg;
  local_78 = &cf_image_jpeg;
  local_c8 = &cf_jpeg;
  local_70 = &cf_image_jpeg;
  local_c0 = &cf_gif;
  local_68 = &cf_image_gif;
  local_b8 = &cf_webp;
  local_60 = &cf_image_webp;
  local_b0 = &cf_mp4;
  local_58 = &cf_video_mp4;
  local_a8 = &cf_mov;
  local_50 = &cf_video_quicktime;
  local_a0 = &cf_m4v;
  local_48 = &cf_video_x_m4v;
  local_98 = &cf_mp3;
  local_40 = &cf_audio_mpeg;
  local_90 = &cf_m4a;
  local_38 = &cf_audio_mp4;
  local_88 = &cf_wav;
  local_30 = &cf_audio_wav;
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_80,&local_d8,0xb);
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
  _objc_retainAutoreleasedReturnValue();
  local_128 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_128 = &cf_application_octet_stream;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_128;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

