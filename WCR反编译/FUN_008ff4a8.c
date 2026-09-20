// FUN_008ff4a8 @ 008ff4a8

void FUN_008ff4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  cfstringStruct *local_120;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  ulong local_40;
  cfstringStruct *local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_30;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    _objc_storeStrong(&local_40,&cf__);
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsFromUsr_0269d088);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_008fa0bc();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsToUsr_0269d090);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_008fa0bc();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_58[0]);
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_60);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_68;
  local_68 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar4 = local_68;
  FUN_008fa634();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_68;
  local_68 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar4 = local_68;
  FUN_008ee758();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_68;
  local_68 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  pcVar5 = local_38;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_120 = &cf_m4a;
  }
  else {
    local_120 = local_38;
    FUN_008e5574(pcVar6);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_120;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_120;
  if (pcVar6 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  uVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar7 & 1) == 0) {
    uVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_stringByAppendingPathExtension__026a4580,local_70);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_68;
    local_68 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

