// FUN_008fe2e4 @ 008fe2e4

void FUN_008fe2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_140;
  cfstringStruct *local_110;
  long local_a8;
  long local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  long local_68 [3];
  long local_50;
  byte local_41;
  cfstringStruct *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  lVar2 = local_30;
  local_41 = param_4;
  FUN_008e5898();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_30;
  local_50 = lVar2;
  FUN_008e5e98();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_68[0] = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_110 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_110 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_110;
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  local_81 = 0;
  pcVar4 = local_40;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_140 = &cf_m4a;
  }
  else {
    local_140 = local_40;
    FUN_008e5574(pcVar5);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_140;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  local_91 = 0;
  bVar1 = false;
  if ((local_41 & 1) != 0) {
    pcVar4 = local_70;
    FUN_008e5574();
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar4 == (cfstringStruct *)0x0;
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if (bVar1) {
    lVar2 = local_50;
    FUN_008edb44(local_50,local_68[0],local_38);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_008ee758();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    bVar1 = lVar2 != 0;
    if (bVar1) {
      lVar2 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_stringByAppendingPathExtension__026a4580,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_28 = lVar2;
    }
    _objc_storeStrong(bVar1,&local_a8);
    _objc_storeStrong(&local_a0,0);
    if (bVar1) goto LAB_008fe888;
  }
  lVar2 = local_50;
  FUN_008ff4a8(local_50,local_70,local_78);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
LAB_008fe888:
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

