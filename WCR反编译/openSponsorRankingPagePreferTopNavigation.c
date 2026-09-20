// openSponsorRankingPagePreferTopNavigation @ 00fc0e44

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::openSponsorRankingPagePreferTopNavigation(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  char *local_88;
  char *local_80;
  ID local_78;
  ID local_70;
  uint local_68;
  byte local_61;
  undefined *local_60;
  bool local_51;
  undefined *local_50;
  undefined *local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_39 = 0;
  local_28 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_a0 = &::cf___;
  }
  else {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_39 = 1;
    local_98 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_98 = &::cf___;
    }
    local_a0 = local_98;
    local_38 = pcVar3;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_a0;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_51 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_b0 = (undefined *)0x0;
  }
  else {
    local_b0 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_b0;
  }
  local_51 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b0;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  local_61 = 0;
  bVar1 = true;
  if (local_48 != (undefined *)0x0) {
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_scheme_026a1dd8);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar2 == (undefined *)0x0;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_68 = 1;
    goto LAB_00fc1318;
  }
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "MMWebViewController";
  local_78 = IVar4;
  _objc_getClass();
  local_80 = pcVar5;
  if ((local_78 == 0) || (pcVar5 == (char *)0x0)) {
LAB_00fc1204:
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar6 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_68 = 0;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = pcVar5;
    if (pcVar5 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_PushViewController_animated__0269cd40,pcVar5,1);
    }
    local_68 = (uint)(pcVar5 != (char *)0x0);
    _objc_storeStrong(&local_88,0);
    if (local_68 == 0) goto LAB_00fc1204;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
LAB_00fc1318:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

