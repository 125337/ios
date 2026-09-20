// preferredRawCardHeightForConfig:tableWidth: @ 01e73fa8

/* Function Stack Size: 0x20 bytes */

double WCRefineToDoCardView::preferredRawCardHeightForConfig_tableWidth_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double local_1b8;
  double local_1b0;
  mach_header *local_1a0;
  undefined1 *local_190;
  undefined1 *local_188;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined1 *local_c0;
  double local_50;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  double local_28;
  
  local_40 = (undefined1 *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_50 = param_4;
  if (local_40 == (undefined1 *)0x0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardContentVerticalInset_026c6de0);
  local_50 = local_50 * 2.0;
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardTitleEnabled_026c6de8);
  if (((ulong)puVar2 & 1) != 0) {
    local_158 = 25.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardTitleFontSize_026c6df0);
    local_158 = local_158 + 10.0;
    if (local_158 <= 25.0) {
      local_158 = 25.0;
    }
    local_50 = local_158;
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardDateEnabled_026c6df8);
    if (((ulong)puVar2 & 1) != 0) {
      local_160 = 13.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardTitleFontSize_026c6df0);
      local_160 = local_160 - 2.0;
      if (local_160 <= 13.0) {
        local_160 = 13.0;
      }
      local_50 = local_158 + local_160;
    }
  }
  local_168 = 22.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardLocalFontSize_026c6e00);
  dVar3 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardBulletSize_026c6e08);
  if (local_168 < dVar3) {
    local_168 = dVar3;
  }
  local_170 = local_168 + 8.0;
  if (local_170 <= 22.0) {
    local_170 = 22.0;
  }
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardSourceMode_026a8828);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardLocalItems_026a8980);
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((undefined1 *)((long)&MACH_HEADER.cputype + 3) <= local_188) {
      local_188 = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
    }
    if (local_188 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_190 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      local_190 = local_188;
    }
    local_c0 = local_190;
  }
  else {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardSourceMode_026a8828);
    if (puVar2 + -1 != (undefined1 *)0x0) {
      FUN_01e744f0(puVar2 + -1,local_40);
      local_28 = param_4;
      goto LAB_01e744d0;
    }
    local_c0 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
  }
  dVar3 = (double)NEON_ucvtf(local_c0);
  local_1a0 = (mach_header *)(local_c0 + -1);
  if ((long)local_1a0 < 1) {
    local_1a0 = (mach_header *)0x0;
  }
  dVar4 = (double)(long)local_1a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardContentItemSpacing_026c6e10);
  local_1b0 = local_50 + local_170 * dVar3 + dVar4 * (double)(long)local_1a0 + 14.0;
  if (local_1b0 < 76.0) {
    local_1b0 = 76.0;
  }
  if (888.0 <= local_1b0) {
    local_1b8 = 888.0;
  }
  else {
    local_1b8 = local_1b0;
  }
  local_28 = local_1b8;
LAB_01e744d0:
  _objc_storeStrong(&local_40,0);
  return local_28;
}

