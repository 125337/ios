// douyinImageIdentityKey: @ 01033ca4

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinImageIdentityKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *local_c0;
  undefined1 *local_a8;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_68;
  bool local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 local_34;
  undefined *local_30;
  SEL local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  
  local_30 = (undefined1 *)0x0;
  local_28 = param_2;
  local_20 = (undefined1 *)param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 == (undefined1 *)0x0) {
    local_18 = (undefined1 *)0x0;
    local_34 = 1;
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_unescapeJSONString__026adcb8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_a8 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_a8;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_59 = false;
    if (puVar2 == (undefined1 *)0x0) {
      local_c0 = local_40;
    }
    else {
      local_c0 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_c0;
    }
    local_59 = puVar2 != (undefined1 *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_c0;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_50;
    puVar1 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&cf__);
    local_70 = puVar2;
    local_68 = puVar1;
    if (puVar2 != (undefined1 *)0x7fffffffffffffff) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_50;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_rangeOfString_options__0269d118,&cf__tplv_,1);
    local_80 = puVar2;
    local_78 = puVar1;
    if (puVar2 != (undefined1 *)0x7fffffffffffffff) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_50;
    puVar1 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&::cf__);
    local_90 = puVar2;
    local_88 = puVar1;
    if (puVar2 != (undefined1 *)0x7fffffffffffffff) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
    if ((((((ulong)puVar2 & 1) != 0) ||
         (puVar2 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_jpeg),
         ((ulong)puVar2 & 1) != 0)) ||
        (puVar2 = local_98,
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_png),
        ((ulong)puVar2 & 1) != 0)) ||
       (((puVar2 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_webp),
         ((ulong)puVar2 & 1) != 0 ||
         (puVar2 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_heic),
         ((ulong)puVar2 & 1) != 0)) ||
        (puVar2 = local_98,
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_gif),
        ((ulong)puVar2 & 1) != 0)))) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_stringByDeletingPathExtension_0269fd18);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__obj_);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__);
      if (((ulong)puVar2 & 1) != 0) {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_50;
        local_50 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    else {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,5);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_obj_);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_18 = local_50;
    if ((undefined1 *)((long)&MACH_HEADER.cputype + 3) < puVar2) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      local_18 = (undefined1 *)0x0;
    }
    local_34 = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

