// FUN_010ad198 @ 010ad198

void FUN_010ad198(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = &cf_text;
  local_78 = &cf_eW_;
  local_d0 = &cf_refer;
  local_70 = &cf___umo_;
  local_c8 = &cf_image;
  local_68 = &cf_VGr;
  local_c0 = &cf_voice;
  local_60 = &cf__;
  local_b8 = &cf_video;
  local_58 = &cf__;
  local_b0 = &cf_emoticon;
  local_50 = &cf_h_;
  local_a8 = &cf_file;
  local_48 = &cf_eN;
  local_a0 = &cf_contact;
  local_40 = &cf_TGr;
  local_98 = &cf_location;
  local_38 = &cf_MOn_;
  local_90 = &cf_chatrecord;
  local_30 = &cf_J_YU_;
  local_88 = &cf_link;
  local_28 = &cf_caSGr;
  local_80 = &cf_other;
  local_20 = &cf_vQN;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_78,&local_d8,0xc);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e3328;
  DAT_028e3328 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

