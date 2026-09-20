// FUN_00402c84 @ 00402c84

void FUN_00402c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_f8;
  ulong local_c8;
  ulong local_88;
  byte local_79;
  ulong local_78;
  ulong local_70 [3];
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
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
  local_48 = 0;
  local_50 = 0;
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if ((uVar2 & 1) == 0) {
    local_c8 = 0;
  }
  else {
    local_c8 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_38;
  local_58 = local_c8;
  local_79 = 0;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_f8 = 0;
  }
  else {
    local_f8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    local_79 = 1;
    local_78 = local_f8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70[0] = local_f8;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (DAT_028ca6a8 != (code *)0x0) {
    (*DAT_028ca6a8)(local_28,local_30,local_38,local_40);
  }
  FUN_0042f7bc(local_48,&cf_keyword_AddMsg_orig,local_28);
  uVar2 = local_58;
  FUN_00423668(local_58,local_70[0],&cf_AddMsg);
  _objc_retainAutoreleasedReturnValue();
  local_88 = uVar2;
  FUN_00423800(local_58);
  FUN_00423ba4(local_88);
  FUN_0042f7bc(local_50,&cf_keyword_AddMsg_after,local_28);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

