// FUN_0032f548 @ 0032f548

void FUN_0032f548(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong *local_100;
  ulong local_78;
  undefined4 local_70;
  ulong local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  long *local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  uVar3 = local_60;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &cf___;
    local_70 = 1;
  }
  else {
    local_48 = &DAT_028c9e18;
    local_50 = 0;
    _objc_storeStrong(&local_50,&PTR___NSConcreteGlobalBlock_0257c328);
    if (*local_48 + 1 != 0) {
      _dispatch_once(*local_48 + 1,local_48,local_50);
    }
    _objc_storeStrong(&local_50,0);
    uVar1 = local_60;
    uVar3 = DAT_028c9e10;
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_40 = uVar4;
    local_28 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_stringByReplacingMatchesInString_0269ef30,uVar1,0,0,uVar4,&cf___);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_78 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_78;
    local_78 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_100 = &local_60;
    }
    else {
      local_100 = &local_78;
    }
    pcVar5 = (cfstringStruct *)*local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = 1;
    local_58 = pcVar5;
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue(local_58);
  return;
}

