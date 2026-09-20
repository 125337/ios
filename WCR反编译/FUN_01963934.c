// FUN_01963934 @ 01963934

void FUN_01963934(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_138;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
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
  local_100 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_100,param_1);
  pcVar1 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_138 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_138 = &cf___;
  }
  _objc_storeStrong(&local_100,local_138);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_70 = &cf_html;
  local_68 = &cf_htm;
  local_60 = &cf_xml;
  local_58 = &cf_svg;
  local_50 = &cf_plist;
  local_48 = &cf_xib;
  local_40 = &cf_storyboard;
  local_38 = &cf_xaml;
  local_30 = &cf_vue;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,9);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_88 = &cf_css;
  local_80 = &cf_scss;
  local_78 = &cf_less;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_f0 = &cf_py;
  local_e8 = &cf_rb;
  local_e0 = &cf_sh;
  local_d8 = &cf_bash;
  local_d0 = &cf_zsh;
  local_c8 = &cf_yaml;
  local_c0 = &cf_yml;
  local_b8 = &cf_toml;
  local_b0 = &cf_ini;
  local_a8 = &cf_conf;
  local_a0 = &cf_cfg;
  local_98 = &cf_properties;
  local_90 = &cf_gitignore;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f0,0xd
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_118 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_containsObject__0269cbb8,local_100);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_containsObject__0269cbb8,local_100);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_containsObject__0269cbb8,local_100);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = &cf_code;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = &cf_hash;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = &cf_style;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = &cf_markup;
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_f8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

