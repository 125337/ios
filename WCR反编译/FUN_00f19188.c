// FUN_00f19188 @ 00f19188

void FUN_00f19188(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  byte local_104;
  long local_f8;
  cfstringStruct *local_e8;
  ulong local_d0;
  ulong local_c0;
  ulong local_a8;
  ulong local_a0;
  undefined *local_98;
  uint local_8c;
  ulong local_88;
  byte local_7c;
  undefined1 local_7b;
  byte local_7a;
  bool local_79;
  long local_78;
  long local_70;
  cfstringStruct *local_68;
  int local_60;
  byte local_59;
  ulong local_58;
  bool local_49;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  cfstringStruct *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  uVar4 = local_28;
  _WCRefineClownMessageKey();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
  local_49 = false;
  if (uVar4 == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = DAT_028e2b68;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2b68,PTR_s_objectForKeyedSubscript__0269d098,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_c0;
  }
  local_49 = uVar4 != 0;
  local_59 = 0;
  if (local_c0 == 0) {
    local_d0 = local_28;
    FUN_00f16348(local_28,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_d0;
  }
  else {
    local_d0 = local_c0;
  }
  local_59 = local_c0 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_d0;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar4 = local_28;
  FUN_00f17624();
  pcVar6 = local_30;
  local_60 = (int)uVar4;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)pcVar6 & 1) == 0) {
    local_e8 = &cf___;
  }
  else {
    local_e8 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_e8;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_79 = false;
  if (uVar4 == 0) {
    local_f8 = 0;
  }
  else {
    local_f8 = DAT_028e2b48;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2b48,PTR_s_objectForKeyedSubscript__0269d098,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_f8;
  }
  local_79 = uVar4 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_f8;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  uVar4 = local_28;
  FUN_00f176c8();
  iVar3 = (int)uVar4 + -0x39;
  local_104 = 1;
  if (iVar3 != 0) {
    uVar4 = local_40;
    FUN_00f1d39c(iVar3);
    local_104 = (byte)uVar4;
  }
  local_7a = local_104 & 1;
  local_7b = 0;
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_referingMessageWrap_0269d110);
  if ((uVar4 & 1) != 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_referingMessageWrap_0269d110);
    _objc_retainAutoreleasedReturnValue();
    local_7b = uVar4 != 0;
    (*(code *)PTR__objc_release_02578630)();
  }
  bVar2 = 0;
  if (local_60 == 0x31) {
    bVar2 = local_7a ^ 1;
  }
  local_7c = bVar2 & 1;
  if ((bVar2 & 1) != 0) {
    FUN_00f18ae0(local_28,local_68);
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_UpdateContent__026a59b8);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_UpdateContent__026a59b8,0);
    }
    uVar4 = local_28;
    FUN_00f16348(local_28,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar4;
    FUN_00f1d4c4();
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      FUN_00f18ae0(local_28,local_68);
    }
    local_8c = (uint)bVar1;
    _objc_storeStrong(&local_88,0);
    if (local_8c != 0) goto LAB_00f19734;
  }
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_contentByReplacingDisplayText_qu_026abd98,local_68,
             local_70,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar5;
  FUN_00f18a28(local_28,PTR_s_setM_nsContent__0269ef88,puVar5);
  if (((local_7a & 1) != 0) &&
     (lVar7 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     lVar7 != 0)) {
    FUN_00f18ce8(lVar7,local_28,local_70);
  }
  FUN_00f18c04(local_28);
  if (local_60 == 0x31) {
    FUN_00f18ae0(0,local_28,local_68);
  }
  uVar4 = local_28;
  FUN_00f16348(local_28,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_28;
  local_a0 = uVar4;
  FUN_00f1d670();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = uVar8;
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  local_8c = 0;
LAB_00f19734:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

