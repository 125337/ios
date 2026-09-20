// FUN_0081e178 @ 0081e178

byte FUN_0081e178(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_e8;
  undefined *local_b8;
  ulong local_b0;
  undefined4 local_a8;
  ulong local_98;
  byte local_89;
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
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = 0;
  _objc_storeStrong(&local_98,param_1);
  if ((local_98 == 0) ||
     (uVar1 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_89 = 0;
    local_a8 = 1;
  }
  else {
    uVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_98;
    local_b0 = uVar1;
    FUN_0081df3c(local_98,DAT_028ccff0);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasPrefix__0269d320,&cf_fileicon_);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_b0,
         (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hasPrefix__0269d320,&cf_fileicon_),
         (uVar1 & 1) == 0)) {
        local_88 = &cf_icons_regular_voice_wave;
        local_80 = &cf_Miniprogram_Icon_DefaultDM;
        local_78 = &cf_Miniprogram_Icon_Default;
        local_70 = &cf_icon_filled_actionsheet_button;
        local_68 = &cf_photo_accounts_icon;
        local_60 = &cf_weapp_destop_3rd_running_flag;
        local_58 = &cf_use_other_app_darkmodeweapp_destop_3rd_running_flag;
        local_50 = &cf_icons_filled_chatbox;
        local_48 = &cf_ReadVerified_icon_new;
        local_40 = &cf_icons_filled_detail_skin_hb_mask_with_gradient_dark;
        local_38 = &cf_icons_filled_detail_skin_hb_mask_with_gradient;
        local_30 = &cf_add_friend_icon_brand_service;
        local_28 = &cf_ai_filled;
        local_20 = &cf_icons_finder_default_avatar;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_88,0xe);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8,local_98);
        local_e8 = 1;
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsObject__0269cbb8,local_b0);
          local_e8 = (byte)puVar3;
        }
        local_89 = local_e8 & 1;
        local_a8 = 1;
        _objc_storeStrong(&local_b8,0);
      }
      else {
        local_89 = 1;
        local_a8 = 1;
      }
    }
    else {
      local_89 = 1;
      local_a8 = 1;
    }
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_89 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

