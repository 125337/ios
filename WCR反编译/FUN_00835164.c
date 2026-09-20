// FUN_00835164 @ 00835164

void FUN_00835164(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined8 local_200;
  undefined8 local_1f8;
  long local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  ulong local_1d0;
  cfstringStruct *local_1c8;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  uint local_174;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  long local_100;
  cfstringStruct *local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  cfstringStruct *local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  bool local_91;
  cfstringStruct *local_90;
  bool local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [3];
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_b8 = param_3;
  local_b0 = param_4;
  local_a8 = param_1;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = local_b8;
  local_40 = local_b0;
  local_48 = local_a8;
  lVar2 = *(long *)(local_a8 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_indexPathForCell__0269e208,local_30);
  local_a0 = lVar2;
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_50 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundView_026a0320);
  local_c0 = pcVar3;
  _objc_retainAutoreleasedReturnValue();
  local_e0 = *(undefined8 *)(local_a8 + 0x28);
  local_d8 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d0 = *(undefined8 *)(local_a8 + 0x30);
  local_c8 = *(undefined8 *)(local_a8 + 0x38);
  local_68[0] = pcVar3;
  if (local_50 == 0) {
    local_f0 = local_38;
  }
  else {
    lVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_row_0269e210);
    local_f0 = lVar2;
    local_e8 = lVar2;
  }
  local_100 = local_f0;
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundColor_026ca518);
  local_f8 = pcVar3;
  _objc_retainAutoreleasedReturnValue();
  local_110 = pcVar3;
  FUN_00824b80();
  local_108 = pcVar3;
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_30;
  local_120 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
  local_118 = pcVar4;
  _objc_retainAutoreleasedReturnValue();
  local_130 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_128 = pcVar4;
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_140 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
  local_138 = pcVar3;
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_140;
  local_150 = pcVar3;
  FUN_00824b80();
  local_148 = pcVar4;
  _objc_retainAutoreleasedReturnValue();
  local_71 = 0;
  local_81 = false;
  bVar1 = local_68[0] == (cfstringStruct *)0x0;
  local_158 = pcVar4;
  if (bVar1) {
    local_170 = &cf_none;
  }
  else {
    pcVar3 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_backgroundColor_026ca518);
    local_160 = pcVar3;
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = pcVar3;
    FUN_00824b80();
    local_168 = pcVar3;
    _objc_retainAutoreleasedReturnValue();
    local_170 = pcVar3;
    local_80 = pcVar3;
  }
  local_81 = !bVar1;
  local_180 = local_170;
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isOpaque_0269f438);
  local_174 = (uint)pcVar3;
  local_91 = false;
  bVar1 = local_68[0] == (cfstringStruct *)0x0;
  if (bVar1) {
    local_198 = &cf_none;
  }
  else {
    pcVar3 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_class_0269cd60);
    local_188 = pcVar3;
    _NSStringFromClass();
    local_190 = pcVar3;
    _objc_retainAutoreleasedReturnValue();
    local_198 = pcVar3;
    local_90 = pcVar3;
  }
  local_91 = !bVar1;
  local_200 = local_d0;
  local_1f8 = local_c8;
  local_1f0 = local_100;
  local_1e8 = local_120;
  local_1e0 = local_158;
  local_1d8 = local_180;
  local_1d0 = (ulong)local_174 & 1;
  local_1c8 = local_198;
  puVar5 = local_d8;
  local_1a8 = (undefined1 *)&local_200;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_stringWithFormat__0269cca8,
             &
             cf_event_cell_probevc___table___row__ldcellA___contentA___bgViewA___cellOpaque__dbgViewClass___
            );
  local_1a0 = puVar5;
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(local_1b0);
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(local_158);
  (*(code *)PTR__objc_release_02578630)(local_150);
  (*(code *)PTR__objc_release_02578630)(local_140);
  (*(code *)PTR__objc_release_02578630)(local_130);
  (*(code *)PTR__objc_release_02578630)(local_120);
  (*(code *)PTR__objc_release_02578630)(local_110);
  local_1b8 = 0;
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_50,local_1b8);
  _objc_storeStrong(&local_30,local_1b8);
  return;
}

