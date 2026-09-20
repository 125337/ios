// FUN_0028ecf8 @ 0028ecf8

void FUN_0028ecf8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *local_180;
  cfstringStruct *local_168;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  undefined1 local_102;
  undefined1 local_101;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined **local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined **local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_80,param_1);
  pcVar3 = local_80;
  local_a1 = 0;
  pcVar1 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_168 = &cf_mp4;
  }
  else {
    local_168 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = local_168;
  }
  FUN_0028174c(pcVar3,local_168);
  _objc_retainAutoreleasedReturnValue();
  local_180 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_180 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_180;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  FUN_002813d8(&cf_sheet_export,local_88);
  pcVar3 = local_88;
  local_58 = &cf_title;
  local_48 = &cf_OX_0RvQ;
  local_50 = &cf_handler;
  ppuVar4 = &local_d8;
  local_d8 = PTR___NSConcreteStackBlock_02578660;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = FUN_0028f44c;
  local_c0 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = pcVar3;
  local_102 = 1;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_58,2);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_88;
  local_78 = &cf_title;
  local_68 = &cf_lS__YS;
  local_70 = &cf_handler;
  ppuVar6 = &local_100;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_0028f8c0;
  local_e8 = &DAT_02578c20;
  local_38 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = pcVar3;
  local_101 = 1;
  _objc_retainBlock();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_60 = ppuVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_68,&local_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_101 = 0;
  local_102 = 0;
  local_b0 = puVar9;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(ppuVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(ppuVar4);
  pcVar3 = local_88;
  puVar5 = local_b0;
  local_130 = PTR___NSConcreteStackBlock_02578660;
  local_128 = 0xc2000000;
  local_124 = 0;
  local_120 = FUN_002903f8;
  local_118 = &DAT_0257b608;
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = pcVar3;
  FUN_0028fd68(puVar5,&local_130);
  FUN_002906f8(&cf__N_,local_b0);
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

