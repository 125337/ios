// FUN_00269fd4 @ 00269fd4

void FUN_00269fd4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong local_60;
  ulong local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  ulong local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  FUN_0026a464();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_38 = uVar1;
  FUN_0026bbe0();
  local_48 = (int)uVar2;
  if (local_48 == 0) {
    uVar1 = local_38;
    FUN_0026bcec(local_38,PTR_s_favId_026a1428,0);
    local_50 = (int)uVar1;
    if (local_50 == 0) {
      uVar1 = local_38;
      FUN_0026b450(local_38,PTR_s_favCheckId_026a1430);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_58 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar1 & 1) == 0) ||
         (uVar1 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
         uVar1 == 0)) {
        uVar1 = local_38;
        FUN_0026b450(local_38,PTR_s_sourceId_026a1438);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_60 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((uVar1 & 1) == 0) ||
           (uVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
           uVar1 == 0)) {
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ptr__p
                    );
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar4;
        }
        else {
          pcVar4 = &cf_source_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_source_,PTR_s_stringByAppendingString__0269d398,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar4;
        }
        local_4c = 1;
        _objc_storeStrong(&local_60,0);
      }
      else {
        pcVar4 = &cf_check_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_check_,PTR_s_stringByAppendingString__0269d398,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_4c = 1;
        local_28 = pcVar4;
      }
      _objc_storeStrong(&local_58,0);
    }
    else {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_fav__u);
      _objc_retainAutoreleasedReturnValue();
      local_4c = 1;
      local_28 = pcVar4;
    }
  }
  else {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_local__u);
    _objc_retainAutoreleasedReturnValue();
    local_4c = 1;
    local_28 = pcVar4;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

