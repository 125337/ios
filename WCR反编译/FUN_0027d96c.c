// FUN_0027d96c @ 0027d96c

void FUN_0027d96c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_50 [4];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0027dccc;
  }
  local_30 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_tid);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_30;
  local_30 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = uVar1 & 0xffffffff;
  if ((uVar1 & 1) == 0) {
LAB_0027db10:
    uVar1 = local_20;
    FUN_0027b0fc(uVar4);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_tid_026a15d8);
    if ((uVar1 & 1) == 0) {
LAB_0027dc7c:
      local_18 = 0;
    }
    else {
      uVar1 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_tid_026a15d8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      local_30 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_30;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
         local_18 = local_30, uVar4 == 0)) goto LAB_0027dc7c;
      (*(code *)PTR__objc_retain_02578638)();
    }
    local_24 = 1;
    _objc_storeStrong(local_50,0);
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    uVar1 = local_30;
    uVar4 = 0;
    if (uVar3 == 0) goto LAB_0027db10;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_24 = 1;
  }
  _objc_storeStrong(&local_30,0);
LAB_0027dccc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

