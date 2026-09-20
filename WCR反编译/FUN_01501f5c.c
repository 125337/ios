// FUN_01501f5c @ 01501f5c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01501f5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
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
  local_68 = &cf_url;
  local_60 = &cf_key;
  local_58 = &cf_id;
  local_50 = &cf_md5;
  local_48 = &cf_format;
  local_40 = &cf_length;
  local_38 = &cf_flag;
  local_30 = &cf_ver;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e37d0;
  DAT_028e37d0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_140 = &cf_voice;
  local_138 = &cf_msg;
  local_130 = &cf_app;
  local_128 = &cf_file;
  local_120 = &cf_attach;
  local_118 = &cf_user;
  local_110 = &cf_name;
  local_108 = &cf_http;
  local_100 = &cf_www;
  local_f8 = &cf_cdn;
  local_f0 = &cf_aes;
  local_e8 = &cf_thumb;
  local_e0 = &cf_img;
  local_d8 = &cf_video;
  local_d0 = &cf_silk;
  local_c8 = &cf_store;
  local_c0 = &cf_download;
  local_b8 = &cf_biz;
  local_b0 = &cf_live;
  local_a8 = &cf_duration;
  local_a0 = &cf_total;
  local_98 = &cf_size;
  local_90 = &cf_title;
  local_88 = &cf_from;
  local_80 = &cf_encrypt;
  local_78 = &cf_sdk;
  local_70 = &cf_com;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_140,
             0x1b);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e37d8;
  DAT_028e37d8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

