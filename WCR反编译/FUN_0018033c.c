// FUN_0018033c @ 0018033c

void FUN_0018033c(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  double dVar8;
  cfstringStruct *local_260;
  byte local_240;
  cfstringStruct *local_238;
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [55];
  byte local_119;
  cfstringStruct *local_118;
  byte local_109;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [52];
  undefined4 local_8c;
  int local_88 [2];
  long local_80;
  double local_58;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028c8901);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  _CFAbsoluteTimeGetCurrent();
  pcVar2 = local_40;
  puVar3 = PTR_WCRAddedSectionCache_026ce370;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRAddedSectionCache_026ce370,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar5 = (cfstringStruct *)PTR_WCRAddedSectionCache_026ce370;
    _objc_alloc_init();
    pcVar2 = local_40;
    local_40 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_setAssociatedObject(local_30,&DAT_028c8901,local_40,1);
  }
  else {
    if (local_40 == (cfstringStruct *)0x0) {
      _memset(local_88,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,local_40,PTR_s_signature_0269fa68);
    }
    pcVar2 = local_30;
    FUN_00180ae0();
    if (((local_88[0] == (int)pcVar2) &&
        (lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
        dVar1 = local_58, local_80 == lVar4)) &&
       (dVar8 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastValidation_0269fa70),
       local_28 = local_40, dVar1 - dVar8 < 1.0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_8c = 1;
      goto LAB_00180a6c;
    }
  }
  FUN_00180bc8(auStack_c0,local_58,local_30,local_38);
  if (local_40 == (cfstringStruct *)0x0) {
    _memset(auStack_f0,0,0x30);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(auStack_f0,local_40,PTR_s_signature_0269fa68);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,local_40,PTR_s_setLastValidation__0269fa48);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_contactsRecentAddedSectionTitle_0269fa78);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_f8;
  local_100 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_contactsEarliestAddedSectionTitl_0269fa80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_100;
  local_119 = 0;
  pcVar2 = local_40;
  local_108 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_recentTitle_0269fa58);
  _objc_retainAutoreleasedReturnValue();
  local_238 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_238 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8,local_238);
  puVar6 = local_108;
  local_240 = 0;
  if (((ulong)puVar3 & 1) != 0) {
    pcVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_earliestTitle_0269fa60);
    _objc_retainAutoreleasedReturnValue();
    local_119 = 1;
    local_260 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_260 = &cf___;
    }
    local_118 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isEqualToString__0269ccc8,local_260);
    local_240 = (byte)puVar6;
  }
  if ((local_119 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_109 = local_240 & 1;
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentValid_0269fa88);
  if ((((ulong)pcVar2 & 1) == 0) || ((local_109 & 1) == 0)) {
LAB_0018093c:
    _memcpy(auStack_150,auStack_c0,0x30);
    pcVar2 = local_40;
    _memcpy(auStack_180,auStack_150,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setSignature__0269fa90,auStack_180);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setRecentTitle__0269fa98,local_100);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setEarliestTitle__0269faa0,local_108);
    FUN_00180f90(local_58,local_40,local_30,local_38);
    pcVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
  }
  else {
    puVar7 = auStack_c0;
    FUN_00180e40(puVar7,auStack_f0);
    pcVar2 = local_40;
    if (((ulong)puVar7 & 1) == 0) goto LAB_0018093c;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
  }
  local_8c = 1;
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
LAB_00180a6c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

