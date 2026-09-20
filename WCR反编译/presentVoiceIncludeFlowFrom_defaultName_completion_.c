// presentVoiceIncludeFlowFrom:defaultName:completion: @ 01f6d588

/* Function Stack Size: 0x28 bytes */

void WCRefineVoicePackManagerViewController::presentVoiceIncludeFlowFrom_defaultName_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_108;
  cfstringStruct *local_f0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined1 auStack_a8 [8];
  ID local_a0;
  undefined *local_88;
  undefined1 auStack_80 [15];
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  long local_48;
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if ((local_38 == 0) || (local_48 == 0)) {
    local_4c = 1;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_f0 = &cf__eQ_;
    }
    else {
      local_f0 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    if (local_f0 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_60,&cf__eQ);
    }
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_71 = false;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_108 = &cf_silk;
    }
    else {
      local_108 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_108;
    }
    local_71 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_108;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_initWeak(auStack_80,local_38);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S9eTyT);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_58;
    pcVar2 = local_60;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01f6dca0;
    local_c0 = &DAT_0258cfc0;
    local_88 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = pcVar3;
    _objc_copyWeak(auStack_a8,auStack_80);
    lVar1 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = lVar1;
    local_a0 = local_28;
    FUN_01f6d9ac(&cf__eQS,puVar4,pcVar2,0x50,&cf_nx_,&local_d8);
    _objc_storeStrong(&local_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_88,0);
    _objc_destroyWeak(auStack_80);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

