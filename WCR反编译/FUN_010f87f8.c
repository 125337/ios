// FUN_010f87f8 @ 010f87f8

void FUN_010f87f8(void)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  undefined *puVar11;
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
  pcVar2 = &cf_drawer_search;
  FUN_010f6448(&cf_drawer_search,&cf_d__cN,&cf_icons_outlined_search,2,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_drawer_setting;
  local_60 = pcVar2;
  FUN_010f6448(&cf_drawer_setting,&cf_WCRefine,&cf_favorites_filled,2,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_drawer_file_manager;
  local_58 = pcVar3;
  FUN_010f6448(&cf_drawer_file_manager,&cf_eN_t,&cf_icons_filled_folder,2,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_drawer_theme_exchange;
  local_50 = pcVar4;
  FUN_010f6448(&cf_drawer_theme_exchange,&cf__NQQbc,&cf_smile_regular,2,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = &cf_drawer_themebox_redeem;
  local_48 = pcVar5;
  FUN_010f6448(&cf_drawer_themebox_redeem,&cf_vP_QQbc,&cf_gift_filled_icon,2,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = &cf_drawer_avatar_frame;
  local_40 = pcVar6;
  FUN_010f6448(&cf_drawer_avatar_frame,&cf_OS4YPFh,&cf_icons_filled_album,2,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = &cf_drawer_banner;
  local_38 = pcVar7;
  FUN_010f6448(&cf_drawer_banner,&cf_OS_jE_,&cf_icons_filled_chats,2,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = &cf_drawer_frame;
  local_30 = pcVar8;
  FUN_010f6448(&cf_drawer_frame,&cf_VGrWYX,&cf_picture_filled,2,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar10 = &cf_drawer_icon_capture;
  local_28 = pcVar9;
  FUN_010f6448(&cf_drawer_icon_capture,&cf_OSVhbS,&cf_icons_filled_gesture,2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = pcVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e34d0;
  DAT_028e34d0 = puVar11;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar10);
  (*(code *)PTR__objc_release_02578630)(pcVar9);
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

