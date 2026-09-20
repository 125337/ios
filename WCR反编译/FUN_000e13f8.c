// FUN_000e13f8 @ 000e13f8

void FUN_000e13f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined8 local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  ulong local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  ulong local_250;
  undefined8 local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  undefined8 local_220;
  cfstringStruct *local_218;
  undefined1 *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  cfstringStruct *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  cfstringStruct *local_1a0;
  uint local_194;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  uint local_15c;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined8 local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined4 local_10c;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_89;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  byte local_31;
  undefined8 local_30;
  cfstringStruct *local_28;
  undefined8 *puVar2;
  
  local_28 = (cfstringStruct *)0x0;
  local_e8 = param_5;
  local_e0 = param_6;
  _objc_storeStrong(&local_28,param_5);
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,local_e0);
  uVar1 = SUB84(puVar2,0);
  FUN_000d8808();
  local_31 = (byte)uVar1;
  pcVar3 = local_28;
  local_d4 = uVar1;
  _objc_getAssociatedObject(local_28,&DAT_028c8391);
  local_f0 = pcVar3;
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_28;
  local_50[0] = pcVar3;
  FUN_000db77c();
  local_f8 = pcVar4;
  _objc_retainAutoreleasedReturnValue();
  local_108 = local_28;
  local_69 = 0;
  puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_58 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  pcVar3 = local_108;
  local_100 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_10c = SUB84(pcVar3,0);
  if (((ulong)pcVar3 & 1) == 0) {
    local_120 = (cfstringStruct *)0x0;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    local_118 = pcVar3;
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_120 = pcVar3;
    local_68 = pcVar3;
  }
  local_128 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_128;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  local_140 = local_30;
  local_138 = local_28;
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
  local_130 = pcVar3;
  _NSStringFromClass();
  local_148 = pcVar3;
  _objc_retainAutoreleasedReturnValue();
  local_15c = (uint)local_31;
  local_158 = local_50[0];
  local_79 = 0;
  local_89 = 0;
  pcVar4 = local_50[0];
  local_168 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_superview_026cab50);
  local_150 = pcVar4;
  _objc_retainAutoreleasedReturnValue();
  local_170 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_190 = &cf_nil;
  }
  else {
    pcVar3 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_superview_026cab50);
    local_178 = pcVar3;
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_180 = pcVar3;
    _NSStringFromClass();
    local_188 = pcVar3;
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_190 = pcVar3;
    local_88 = pcVar3;
  }
  local_1a0 = local_190;
  pcVar3 = local_50[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isHidden_026ca768);
  local_194 = (uint)pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_alpha_026ca4d8);
  pcVar3 = local_50[0];
  local_1a8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_frame_026ca640);
  local_1c8 = param_1;
  local_1c0 = param_2;
  local_1b8 = param_3;
  local_1b0 = param_4;
  local_b0 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  local_98 = param_4;
  _NSStringFromCGRect();
  local_1d0 = pcVar3;
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = local_58;
  pcVar4 = local_60;
  local_200 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
  local_1f0 = param_1;
  local_1e8 = param_2;
  local_1e0 = param_3;
  local_1d8 = param_4;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b8 = param_4;
  _NSStringFromCGRect(param_1,param_2,param_3,param_4);
  local_208 = pcVar4;
  _objc_retainAutoreleasedReturnValue();
  local_280 = local_140;
  local_278 = local_138;
  local_270 = local_168;
  local_268 = (ulong)local_15c & 1;
  local_260 = local_158;
  local_258 = local_1a0;
  local_250 = (ulong)local_194 & 1;
  local_248 = local_1a8;
  local_240 = local_200;
  local_238 = local_1f8;
  local_230 = pcVar4;
  local_218 = pcVar4;
  local_210 = (undefined1 *)&local_280;
  _NSLog(&
         cf__wcr__chat_member_search_uiphase___controller__pclass___enhanced__dheader__psuper___hidden__dalpha___2fframe___table__pview___
        );
  (*(code *)PTR__objc_release_02578630)(local_218);
  (*(code *)PTR__objc_release_02578630)(local_200);
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(local_170);
  (*(code *)PTR__objc_release_02578630)(local_168);
  local_220 = 0;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,local_220);
  _objc_storeStrong(local_50,local_220);
  _objc_storeStrong(&local_30,local_220);
  _objc_storeStrong(&local_28,local_220);
  return;
}

