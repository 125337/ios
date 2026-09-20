// FUN_007c7098 @ 007c7098

void FUN_007c7098(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  byte local_164;
  byte local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_118;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  
  DAT_026f46b8 = 1;
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_topTitleNameCustomEnabled_026a8438);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_myPageNameCustomEnabled_026a5d18);
  pcVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contactsTopNameCustomEnabled_0269fcc8);
  pcVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bottomTabNameCustomEnabled_026a8440);
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_c0 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
  }
  else {
    local_c0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_customMenuNames_026a5d20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_c0;
  }
  _objc_storeStrong(&DAT_028cccb0,local_c0);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (DAT_028cccb0 == 0) {
    _objc_storeStrong(&DAT_028cccb0,*(undefined8 *)PTR____NSDictionary0___02578288);
  }
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_d0 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
  }
  else {
    local_d0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_customContactsTopNames_0269fcd0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_d0;
  }
  _objc_storeStrong(&DAT_028cccb8,local_d0);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  uVar7 = DAT_028cccb8;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
  if ((uVar7 & 1) == 0) {
    _objc_storeStrong(&DAT_028cccb8,*(undefined8 *)PTR____NSDictionary0___02578288);
  }
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_f8 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
  }
  else {
    local_f8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_customTabNames_026a8448);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_f8;
  }
  _objc_storeStrong(&DAT_028cccc0,local_f8);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if (DAT_028cccc0 == 0) {
    _objc_storeStrong(&DAT_028cccc0,*(undefined8 *)PTR____NSDictionary0___02578288);
  }
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_108 = &cf___;
  }
  else {
    local_108 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainTitleReplacement_026a8450);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_108;
  }
  _objc_storeStrong(&DAT_028cccc8,local_108);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_118 = &cf___;
  }
  else {
    local_118 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contactsReplacement_026a8458);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_118;
  }
  _objc_storeStrong(&DAT_028cccd0,local_118);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_128 = &cf___;
  }
  else {
    local_128 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_discoverReplacement_026a8460);
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_128;
  }
  _objc_storeStrong(&DAT_028cccd8,local_128);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  uVar8 = DAT_028cccd0;
  FUN_007cc908();
  DAT_028cce48 = (undefined1)uVar8;
  local_130 = 0;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeNavTabTitleColorEnabled_026a8468);
    local_130 = (byte)pcVar2;
  }
  DAT_028cce20 = local_130 & 1;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeNavTabTitleColorLight_026a8470);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = DAT_028ccce8;
  DAT_028ccce8 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeNavTabTitleColorDark_026a8478);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = DAT_028cccf0;
  DAT_028cccf0 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = DAT_028ccce0;
  DAT_028ccce0 = puVar9;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  _WCRefineReloadCustomAmountRuntimeSettings();
  local_164 = 0;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuTextCenterEnabled_026a8488);
    local_164 = (byte)pcVar2;
  }
  DAT_028cce6a = local_164 & 1;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideMyPageRichTextRedDotEnabled_026a8490);
  DAT_028cce69 = SUB81(pcVar2,0);
  _objc_storeStrong(&local_28,0);
  return;
}

