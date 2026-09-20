// FUN_003d87bc @ 003d87bc

/* WARNING: Removing unreachable block (ram,0x003d8bc8) */

void FUN_003d87bc(double param_1,byte param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined *local_1a0;
  cfstringStruct *local_188;
  double local_178;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined *local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = (undefined *)0x0;
  local_51 = param_2;
  _objc_storeStrong(&local_60);
  local_78 = 0x4028000000000000;
  local_178 = param_1;
  if (param_1 <= 12.0) {
    local_178 = 12.0;
  }
  local_88 = local_178;
  local_70 = local_178;
  pcVar2 = (cfstringStruct *)(ulong)(local_51 & 1);
  local_80 = param_1;
  local_68 = param_1;
  FUN_003dba8c();
  _objc_retainAutoreleasedReturnValue();
  local_188 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_188 = &cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_188;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_90;
  FUN_003dbddc(local_70);
  _objc_retainAutoreleasedReturnValue();
  local_a9 = 0;
  bVar1 = local_60 == (undefined *)0x0;
  local_98 = pcVar2;
  if (bVar1) {
    local_1a0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c98,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_1a0;
  }
  else {
    local_1a0 = local_60;
  }
  local_a9 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_1a0;
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648,PTR_s_defaultFormat_026ca5e8);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setOpaque__026ca9f8,0);
  puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setScale__026caa28);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_026ce650;
  _objc_alloc();
  dVar5 = local_70;
  dVar6 = local_70;
  FUN_003ae5d4();
  local_d0 = dVar5;
  local_c8 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,dVar6,puVar4,PTR_s_initWithSize_format__026ca700,local_b8);
  pcVar2 = local_98;
  local_110 = PTR___NSConcreteGlobalBlock_02578658;
  local_108 = 0xd0800000;
  local_104 = 0;
  local_100 = FUN_003dc1e8;
  local_f8 = &DAT_0257cdb8;
  local_c0 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_a0;
  local_f0 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_90;
  local_e8 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = pcVar2;
  local_d8 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_imageWithActions__026ca688,&local_110);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar4;
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

