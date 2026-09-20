// FUN_004033f4 @ 004033f4

void FUN_004033f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_e8;
  ulong local_b8;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60 [3];
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_40;
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if ((uVar2 & 1) == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_38;
  local_48 = local_b8;
  local_69 = 0;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_e8 = 0;
  }
  else {
    local_e8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    local_69 = 1;
    local_68 = local_e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60[0] = local_e8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if (DAT_028ca6b8 != (code *)0x0) {
    (*DAT_028ca6b8)(local_28,local_30,local_38,local_40);
  }
  uVar2 = local_48;
  FUN_00423668(local_48,local_60[0],&cf_MMNewSessionMgr_OnAddMsg);
  _objc_retainAutoreleasedReturnValue();
  local_78 = uVar2;
  FUN_00423800(local_48);
  FUN_00423ba4(local_78);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

