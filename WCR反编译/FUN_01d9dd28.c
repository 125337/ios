// FUN_01d9dd28 @ 01d9dd28

void FUN_01d9dd28(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  local_c8 = &cf_pat;
  local_70 = &cf_b;
  local_c0 = &cf_system;
  local_68 = &cf___;
  local_b8 = &cf_voip;
  local_60 = &cf_format_s_;
  local_b0 = &cf_miniprogram;
  local_58 = &cf__z_;
  local_a8 = &cf_finder;
  local_50 = &cf_S;
  local_a0 = &cf_note;
  local_48 = &cf__;
  local_98 = &cf_notice;
  local_40 = &cf__lQJT;
  local_90 = &cf_music;
  local_38 = &cf_pLk;
  local_88 = &cf_redpacket;
  local_30 = &cf__S;
  local_80 = &cf_transfer;
  local_28 = &cf_l_;
  local_78 = &cf_chatrecord;
  local_20 = &cf_J_YU_;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_70,&local_c8,0xb);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e4758;
  DAT_028e4758 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

