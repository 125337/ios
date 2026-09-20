// FUN_002d9774 @ 002d9774

/* WARNING: Removing unreachable block (ram,0x002d9a20) */

void FUN_002d9774(long param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_38;
  
  FUN_002d9114(*(undefined8 *)(param_1 + 0x20),1);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isHidden_026ca768);
  if ((uVar3 & 1) == 0) {
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
    FUN_002b83f8();
    if ((uVar2 & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
      FUN_002c73bc();
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__026ca860);
        FUN_002d9298();
        local_38 = 1;
        goto LAB_002d99f8;
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_reveal_apply___);
    _objc_retainAutoreleasedReturnValue();
    FUN_002c007c(uVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__026ca860);
    FUN_002bb194(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                 *(byte *)(param_1 + 0x38) & 1);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_selectedIndex_0269e580);
    FUN_002a1a50(uVar6,uVar5,*(byte *)(param_1 + 0x38) & 1);
    local_38 = 0;
  }
  else {
    FUN_002d9298();
    local_38 = 1;
  }
LAB_002d99f8:
  FUN_002d9114(*(undefined8 *)(param_1 + 0x20),0);
  if (local_38 < 2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2d9adc);
  (*pcVar1)();
}

