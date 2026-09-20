// FUN_01033564 @ 01033564

void FUN_01033564(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  local_120 = &cf_emoji;
  local_118 = &cf_sticker;
  local_110 = &cf_emotion;
  local_108 = &cf_emoticon;
  local_100 = &cf_aweme_emoji;
  local_f8 = &cf_webcast_emoji;
  local_f0 = &cf_avatar;
  local_e8 = &cf_aweme_avatar;
  local_e0 = &cf__poi_;
  local_d8 = &cf_poi_pic;
  local_d0 = &cf_poi_pic;
  local_c8 = &cf_favicon;
  local_c0 = &cf_sprite;
  local_b8 = &cf_tabbar;
  local_b0 = &cf_tab_bar;
  local_a8 = &cf_100x100;
  local_a0 = &cf_200x200;
  local_98 = &cf_48x48;
  local_90 = &cf_64x64;
  local_88 = &cf_72x72;
  local_80 = &cf_86x86;
  local_78 = &cf_132x132;
  local_70 = &cf_150x150;
  local_68 = &cf__c5_;
  local_60 = &cf_ies_fe_lab;
  local_58 = &cf_ecom_cdn;
  local_50 = &cf__48_48;
  local_48 = &cf__64_64;
  local_40 = &cf__72_72;
  local_38 = &cf__100_100;
  local_30 = &cf__132_132;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_120,
             0x1f);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e31c8;
  DAT_028e31c8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

