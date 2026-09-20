// FUN_004d8380 @ 004d8380

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004d8380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_2a0;
  cfstringStruct *local_228;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c0;
  undefined *local_188;
  undefined *local_168;
  cfstringStruct *local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  byte local_65;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  FUN_004da3f0();
  local_65 = (byte)puVar1;
  local_79 = 0;
  local_89 = 0;
  local_168 = local_58;
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockNameColor_026a4208);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_168;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockNameDarkColor_026a4200);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_168;
  }
  FUN_004da4f0(local_168,&cf_1E90FF);
  _objc_retainAutoreleasedReturnValue();
  local_70 = local_168;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  local_a1 = 0;
  local_b1 = 0;
  local_188 = local_58;
  if ((local_65 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockTextColor_026a4218);
    _objc_retainAutoreleasedReturnValue();
    local_b1 = 1;
    local_b0 = local_188;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockTextDarkColor_026a4210);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = local_188;
  }
  FUN_004da4f0(local_188,&cf_66CD00);
  _objc_retainAutoreleasedReturnValue();
  local_98 = local_188;
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_1c0 = &cf__O__;
  }
  else {
    local_1c0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_1c0;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1d8 = &cf__e;
  }
  else {
    local_1d8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_1d8;
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1f0 = &cf_mo_;
  }
  else {
    local_1f0 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_1f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = &cf___;
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((pcVar2 != (cfstringStruct *)0x0) &&
     (puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_40),
     ((ulong)puVar1 & 1) == 0)) {
    pcVar3 = local_40;
    FUN_004da6d4();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d8;
    local_d8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  local_228 = local_48;
  if (local_48 == (cfstringStruct *)0x0) {
    local_228 = &cf___;
  }
  FUN_004da6d4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_e0 = local_228;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_WCRefineRevokeUser___user____session___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c8;
  local_e8 = puVar1;
  FUN_004da8f0(local_c8,local_70,puVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_d0;
  local_f0 = pcVar2;
  FUN_004da8f0(local_d0,local_98,&cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c0;
  local_f8 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = pcVar2;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_100;
  local_108 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_containsString__0269d0b0,&cf___S_);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___S_,local_108);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_100;
    local_100 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_containsString__0269d0b0,&cf__);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_108);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_100;
    local_100 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__S,local_f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_100;
  local_100 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__T,local_f8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_100;
  local_100 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_100;
  FUN_004dab2c(local_100,local_98);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_100;
  local_100 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_2a0 = &cf__O__;
    FUN_004da8f0(0,&cf__O__,local_98,&cf___);
    _objc_retainAutoreleasedReturnValue();
    local_110 = local_2a0;
  }
  else {
    local_2a0 = local_100;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_2a0;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

