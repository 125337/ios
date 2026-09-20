// FUN_004efb14 @ 004efb14

void FUN_004efb14(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_58;
  undefined *local_38;
  cfstringStruct *local_30;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (undefined *)0x0;
  if (local_24 == 1) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_58 = &cf___;
    }
    else {
      local_58 = local_30;
    }
    _objc_storeStrong(&local_38,local_58);
  }
  else if (local_24 == 3) {
    _objc_storeStrong(0,&local_38,&cf__);
  }
  else if (local_24 == 0x22) {
    _objc_storeStrong(0,&local_38,&cf__);
  }
  else if (local_24 == 0x2a) {
    _objc_storeStrong(0,&local_38,&cf__);
  }
  else if (local_24 == 0x2b) {
    _objc_storeStrong(0,&local_38,&cf__);
  }
  else if (local_24 == 0x2f) {
    _objc_storeStrong(0,&local_38,&cf__);
  }
  else if (local_24 == 0x30) {
    _objc_storeStrong(0,&local_38,&cf__);
  }
  else if (local_24 == 0x31) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_<refermsg);
    if (((ulong)pcVar2 & 1) == 0) {
      _objc_storeStrong(&local_38,&cf__);
    }
    else {
      _objc_storeStrong(&local_38,&cf__);
    }
  }
  else if (local_24 == 0x32) {
    _objc_storeStrong(0,&local_38,&cf__);
  }
  else if (local_24 == 0x3e) {
    _objc_storeStrong(0,&local_38,&cf__);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

