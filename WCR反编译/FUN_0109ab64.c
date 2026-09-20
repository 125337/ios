// FUN_0109ab64 @ 0109ab64

void FUN_0109ab64(void)

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
  local_118 = &cf_text;
  local_a0 = &cf_e_g;
  local_110 = &cf_refer;
  local_98 = &cf___u;
  local_108 = &cf_image;
  local_90 = &cf_VGr;
  local_100 = &cf_voice;
  local_88 = &cf__;
  local_f8 = &cf_video;
  local_80 = &cf__;
  local_f0 = &cf_emoticon;
  local_78 = &cf_h_;
  local_e8 = &cf_file;
  local_70 = &cf_eN;
  local_e0 = &cf_contact;
  local_68 = &cf_TGr;
  local_d8 = &cf_location;
  local_60 = &cf_MOn_;
  local_d0 = &cf_chatrecord;
  local_58 = &cf_J_YU_;
  local_c8 = &cf_link;
  local_50 = &cf_caSGr;
  local_c0 = &cf_music;
  local_48 = &cf_PNaSGr;
  local_b8 = &cf_redpacket;
  local_40 = &cf__S;
  local_b0 = &cf_transfer;
  local_38 = &cf_l_;
  local_a8 = &cf_other;
  local_30 = &cf_vQN;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_a0,&local_118,0xf);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e32e0;
  DAT_028e32e0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

