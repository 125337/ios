// FUN_01cf6280 @ 01cf6280

undefined * FUN_01cf6280(void)

{
  undefined *puVar1;
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
  local_70 = &cf_jpg;
  local_68 = &cf_jpeg;
  local_60 = &cf_png;
  local_58 = &cf_gif;
  local_50 = &cf_bmp;
  local_48 = &cf_webp;
  local_40 = &cf_mp4;
  local_38 = &cf_mov;
  local_30 = &cf_m4v;
  local_28 = &cf_html;
  local_20 = &cf_htm;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,0xb
            );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return puVar1;
}

