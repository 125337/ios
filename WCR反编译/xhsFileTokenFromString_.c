// xhsFileTokenFromString: @ 01020d54

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::xhsFileTokenFromString_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong local_a0;
  ulong local_78;
  ulong local_70;
  undefined *local_68;
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ulong local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  uVar2 = local_40;
  if (uVar1 == 0) {
    local_28 = 0;
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar2;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_rangeOfString__0269d838,&cf__);
    local_60 = uVar2;
    local_58 = puVar4;
    if (uVar2 != 0x7fffffffffffffff) {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf__);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar2;
      if (uVar2 == 0) {
        local_a0 = local_50;
      }
      _objc_storeStrong(&local_50,local_a0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_50;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&::cf__);
    local_70 = uVar2;
    local_68 = puVar4;
    if (uVar2 != 0x7fffffffffffffff) {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
    if (((((uVar2 & 1) != 0) ||
         (uVar2 = local_78,
         (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&cf_jpeg),
         (uVar2 & 1) != 0)) ||
        (uVar2 = local_78,
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&cf_png),
        (uVar2 & 1) != 0)) ||
       (uVar2 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&cf_webp),
       (uVar2 & 1) != 0)) {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_stringByDeletingPathExtension_0269fd18);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (uVar2 < 0x10) {
      local_28 = 0;
    }
    else {
      local_18 = &DAT_028e31b8;
      local_20 = 0;
      _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02584690);
      if (*local_18 + 1 != 0) {
        _dispatch_once(*local_18 + 1,local_18,local_20);
      }
      _objc_storeStrong(&local_20,0);
      uVar2 = local_50;
      uVar3 = DAT_028e31b0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e31b0,PTR_s_invertedSet_0269ef60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_28 = local_50;
      if (uVar2 == 0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        local_28 = 0;
      }
    }
    local_44 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

