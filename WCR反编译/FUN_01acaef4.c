// FUN_01acaef4 @ 01acaef4

void FUN_01acaef4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  local_118 = &cf_Contact_Chatonlyfriends;
  local_110 = &cf_add_friend_icon_addgroup;
  local_108 = &cf_Contact_icon_ContactTag;
  local_100 = &cf_icons_outlined_tag;
  local_f8 = &cf_add_friend_icon_offical;
  local_f0 = &cf_icons_filled_news;
  local_e8 = &cf_ReadVerified_icon;
  local_e0 = &cf_DefaultProfileHead;
  local_d8 = &cf_icons_filled_group_detail;
  local_d0 = &cf_icons_filled_group;
  local_c8 = &cf_icons_filled_makeup_new;
  local_c0 = &cf_icons_outlined_fans;
  local_b8 = &cf_add_friend_icon_contacts;
  local_b0 = &cf_add_friend_icon_reda;
  local_a8 = &cf_icons_outlined_search;
  local_a0 = &cf_favorites_filled;
  local_98 = &cf_fileicon_unknown_icon;
  local_90 = &cf_smile_regular;
  local_88 = &cf_gift_filled_icon;
  local_80 = &cf_icons_filled_album;
  local_78 = &cf_icons_filled_chats;
  local_70 = &cf_picture_filled;
  local_68 = &cf_icons_filled_heart;
  local_60 = &cf_icons_filled_fire;
  local_58 = &cf_icons_outlined_colorful_moment;
  local_50 = &cf_icons_outlined_finder;
  local_48 = &cf_icons_outlined_setting;
  local_40 = &cf_icons_filled_like;
  local_38 = &cf_bell_on_filled;
  local_30 = &cf_icons_outlined_live;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_118,
             0x1e);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e4518;
  DAT_028e4518 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

