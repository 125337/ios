// FUN_0027cf88 @ 0027cf88

void FUN_0027cf88(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68 [2];
  ulong local_58;
  ulong local_50 [3];
  int local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
    goto LAB_0027d45c;
  }
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_mediaUrlWithToken_026a16a8);
  if ((uVar4 & 1) != 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mediaUrlWithToken_026a16a8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = uVar1 & 0xffffffff;
    if ((uVar1 & 1) == 0) {
LAB_0027d108:
      local_34 = 0;
    }
    else {
      uVar3 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
      uVar1 = local_50[0];
      uVar4 = 0;
      if (uVar3 == 0) goto LAB_0027d108;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar1;
      uVar4 = 1;
      local_34 = 1;
    }
    _objc_storeStrong(uVar4,local_50,0);
    if (local_34 != 0) goto LAB_0027d45c;
  }
  local_58 = 0;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_mediaURL);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_58;
  local_58 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_68[0] = 0;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_urlToken);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_68[0];
  local_68[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_58;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar4 & 1) == 0) ||
     (uVar1 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     uVar4 = local_68[0], uVar1 == 0)) {
    local_28 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_68[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_length_0269cca0), uVar4 == 0)) {
      uVar4 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
    }
    else {
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_stringByAppendingString__0269d398,local_68[0]);
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar4;
    }
  }
  local_34 = 1;
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_58,0);
LAB_0027d45c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

