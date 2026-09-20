// FUN_0052fba8 @ 0052fba8

void FUN_0052fba8(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_1a0;
  cfstringStruct *local_180;
  cfstringStruct *local_160;
  cfstringStruct *local_140;
  cfstringStruct *local_120;
  cfstringStruct *local_100;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar2 = local_38;
    FUN_00530230();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_50 = pcVar2;
    FUN_005303a0();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_58 = pcVar1;
    FUN_005306f4();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_60 = pcVar2;
    FUN_0052b368();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_00530928();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_38;
    FUN_0052e30c();
    pcVar2 = (cfstringStruct *)((ulong)pcVar2 & 0xffffffff);
    FUN_00530ac4();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_70 = pcVar2;
    FUN_00530c58();
    _objc_retainAutoreleasedReturnValue();
    if (local_50 == (cfstringStruct *)0x0) {
      local_100 = &cf___;
    }
    else {
      local_100 = local_50;
    }
    pcVar2 = local_30;
    local_78 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__remark_,local_100);
    _objc_retainAutoreleasedReturnValue();
    if (local_58 == (cfstringStruct *)0x0) {
      local_120 = &cf___;
    }
    else {
      local_120 = local_58;
    }
    local_80 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__nickname_,local_120);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_80;
    local_80 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_60 == (cfstringStruct *)0x0) {
      local_140 = &cf___;
    }
    else {
      local_140 = local_60;
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__name_,local_140);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_80;
    local_80 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_68 == (cfstringStruct *)0x0) {
      local_160 = &cf___;
    }
    else {
      local_160 = local_68;
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__username_,local_160);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_80;
    local_80 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_70 == (cfstringStruct *)0x0) {
      local_180 = &cf___;
    }
    else {
      local_180 = local_70;
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__time_,local_180);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_80;
    local_80 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_78 == (cfstringStruct *)0x0) {
      local_1a0 = &cf___;
    }
    else {
      local_1a0 = local_78;
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__content_,local_1a0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_80;
    local_80 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_80;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_48 = 1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

