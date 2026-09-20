// FUN_0081de20 @ 0081de20

void FUN_0081de20(void)

{
  undefined *puVar1;
  undefined *puVar2;
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
  if (DAT_028cd0c8 == (undefined *)0x0) {
    local_68 = &cf_icons_outlined_colorful_favorites_dark;
    local_60 = &cf_icons_outlined_colorful_favorites;
    local_58 = &cf_WeChat_Lab_Logo_light_small;
    local_50 = &cf_WeChat_Lab_Logo_light_small_dark;
    local_48 = &cf_icons_outlined_colorful_cards_dark;
    local_40 = &cf_icons_outlined_colorful_cards;
    local_38 = &cf_dt_icon;
    local_30 = &cf_dt_icon_dark;
    local_28 = &cf_y_icon;
    local_20 = &cf_y_icon_dark;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,
               10);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028cd0c8;
    DAT_028cd0c8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

