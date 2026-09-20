// FUN_0106c5c0 @ 0106c5c0

void FUN_0106c5c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1a8;
  cfstringStruct *local_198;
  long local_168;
  cfstringStruct *local_158;
  cfstringStruct *local_138;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  bool local_d1;
  long local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  undefined1 *local_b8;
  undefined *local_b0;
  long local_a8 [2];
  cfstringStruct *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_50 = 0;
  local_48 = param_1;
  _objc_storeStrong(&local_50);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  lVar3 = local_50;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_79 = false;
  if (lVar3 == 0) {
    local_138 = (cfstringStruct *)0x0;
  }
  else {
    local_138 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = local_138;
  }
  local_79 = lVar3 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_138;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,
             &cf_window__INIT_STATE_s___s______s_S_______s_<_script>,1,0);
  _objc_retainAutoreleasedReturnValue();
  if (local_70 == (cfstringStruct *)0x0) {
    local_158 = &cf___;
  }
  else {
    local_158 = local_70;
  }
  pcVar5 = local_70;
  local_88 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  local_38 = 0;
  local_30 = 0;
  local_a8[1] = 0;
  local_98 = pcVar5;
  local_40 = pcVar5;
  local_28 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_firstMatchInString_options_range_0269ef48,local_158,0,0,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberOfRanges_0269ef18);
  pcVar5 = local_70;
  local_c1 = 0;
  local_d1 = false;
  bVar1 = puVar4 < (undefined1 *)((long)&MACH_HEADER.magic + 2);
  if (bVar1) {
    local_168 = 0;
  }
  else {
    local_168 = *(long *)(param_1 + 0x38);
    puVar6 = local_90;
    puVar4 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_rangeAtIndex__0269ef20,1);
    local_b8 = puVar6;
    local_b0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_substringWithRange__0269d138,puVar6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_c0 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_JSONObjectFromString__026adcc0);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = local_168;
  }
  local_d1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8[0] = local_168;
  if ((local_d1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  puVar4 = PTR_WCRefineLinkParseResult_026cecb0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
  local_e0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setPlatform__026adde8,7);
  local_198 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_198 == (cfstringStruct *)0x0) {
    local_198 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setSourceURL__026addf0,local_198);
  local_1a8 = *(cfstringStruct **)(param_1 + 0x28);
  if (local_1a8 == (cfstringStruct *)0x0) {
    local_1b8 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_1b8 == (cfstringStruct *)0x0) {
      local_1b8 = &cf___;
    }
    local_1a8 = local_1b8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setResolvedURL__026addf8,local_1a8);
  if (local_a8[0] != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_fillKuaishouResult_fromJSON__026ae120,local_e0,
               local_a8[0]);
  }
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = local_60;
  local_118 = PTR___NSConcreteStackBlock_02578660;
  local_110 = 0xc2000000;
  local_10c = 0;
  local_108 = FUN_0106cbf8;
  local_100 = &DAT_0257cb48;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_e0;
  local_e8 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = puVar2;
  _dispatch_async(puVar4,&local_118);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(local_a8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  return;
}

