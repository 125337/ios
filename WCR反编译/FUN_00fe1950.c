// FUN_00fe1950 @ 00fe1950

void FUN_00fe1950(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  local_c0 = &cf_svgName;
  local_b8 = &cf_svgImageName;
  local_b0 = &cf_imageName;
  local_a8 = &cf_iconName;
  local_a0 = &cf_m_nsSvgName;
  local_98 = &cf_m_svgName;
  local_90 = &cf_m_nsImageName;
  local_88 = &cf_m_imageName;
  local_80 = &cf_m_nsIconName;
  local_78 = &cf_m_iconName;
  local_70 = &cf_resourceName;
  local_68 = &cf_imageResourceName;
  local_60 = &cf_iconResourceName;
  local_58 = &cf_m_nsResourceName;
  local_50 = &cf_assetName;
  local_48 = &cf_m_assetName;
  local_40 = &cf_iconImg;
  local_38 = &cf_m_iconImg;
  local_30 = &cf_iconImage;
  local_28 = &cf_m_iconImage;
  local_20 = &cf_name;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,
             0x15);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e3070;
  DAT_028e3070 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

