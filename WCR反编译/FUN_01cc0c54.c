// FUN_01cc0c54 @ 01cc0c54

void FUN_01cc0c54(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  cfstringStruct *local_b8;
  cfstringStruct *local_a8;
  undefined8 local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_a8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_b8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    local_a8 = local_b8;
    local_40 = pcVar4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a8;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  while (pcVar2 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__),
        ((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_38;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByDeletingLastPathComponen_0269fb90);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_host_0269dc50);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_61 = 0;
  bVar1 = false;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathComponents_026ae478);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (cfstringStruct *)0x1 < pcVar3;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (bVar1) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathComponents_026ae478);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_58 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathComponents_026ae478);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    local_50 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pathComponents_026ae478);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    if ((cfstringStruct *)0x1 < pcVar2) {
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectAtIndexedSubscript__0269cc78);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObjectAtIndex__0269d530,0);
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_componentsJoinedByString__0269d140,&cf__)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_70,0);
  }
  uVar5 = local_28;
  _WCRefineProfileBgHTMLWorkDirectory();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_58;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_78 = uVar7;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  uVar5 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_stringByAppendingPathComponent__026cab30,local_50);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_80 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar8);
  return;
}

