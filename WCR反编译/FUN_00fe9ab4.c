// FUN_00fe9ab4 @ 00fe9ab4

byte FUN_00fe9ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *local_230;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  cfstringStruct *local_1c8;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined8 uStack_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined8 uStack_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined8 uStack_108;
  cfstringStruct *local_100;
  undefined *puStack_f8;
  cfstringStruct *local_f0;
  undefined *puStack_e8;
  cfstringStruct *local_d8;
  undefined4 local_d0;
  byte local_c9;
  long local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  undefined8 local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined8 local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  lVar1 = local_c8;
  local_c9 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_a1 = 0;
    local_d0 = 1;
    goto LAB_00fea2c0;
  }
  pcVar2 = local_b0;
  FUN_00fe91d8(local_b0,local_b8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1c8 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_1c8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  local_40 = 0;
  local_28 = 0;
  puStack_e8 = (undefined *)0x0;
  local_f0 = pcVar2;
  local_38 = pcVar2;
  local_30 = pcVar2;
  if ((local_c0 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_c0,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_selectedRange_026a43a0),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_c0;
    puVar5 = PTR_s_selectedRange_026a43a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar3 = local_d8;
    local_100 = pcVar2;
    puStack_f8 = puVar5;
    local_f0 = pcVar2;
    puStack_e8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (pcVar3 < pcVar2) {
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      local_60 = 0;
      local_48 = 0;
      uStack_108 = 0;
      puStack_e8 = (undefined *)0x0;
      local_110 = pcVar2;
      local_f0 = pcVar2;
      local_58 = pcVar2;
      local_50 = pcVar2;
    }
    pcVar2 = (cfstringStruct *)(puStack_e8 + (long)&local_f0->field0_0x0);
    pcVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (pcVar3 < pcVar2) {
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      puStack_e8 = (undefined *)((long)pcVar2 - (long)local_f0);
    }
  }
  pcVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_stringByReplacingCharactersInRan_026a43b0,local_f0,puStack_e8,local_c8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_118 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if ((local_c9 & 1) != 0) {
    FUN_00feb7ec(local_b0,local_b8,local_c0,local_d8,local_f0);
  }
  if ((local_c0 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_c0,
     (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isFirstResponder_0269f488),
     ((ulong)pcVar2 & 1) != 0)) {
    if ((local_b0 != (cfstringStruct *)0x0) &&
       ((pcVar2 = local_b0,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108),
        ((ulong)pcVar2 & 1) != 0 &&
        (pcVar2 = local_b0,
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isFirstResponder_0269f488),
        ((ulong)pcVar2 & 1) == 0)))) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_becomeFirstResponder_0269d108);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_becomeFirstResponder_0269d108);
  }
  if ((local_b8 == 0) ||
     (uVar4 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_insertString__0269dc28),
     (uVar4 & 1) == 0)) {
    if ((local_b0 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_insertString__0269dc28),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_insertString__0269dc28,local_c8);
      goto LAB_00fea0c8;
    }
    if ((local_c0 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_insertText__026a43a8),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_insertText__026a43a8,local_c8);
      goto LAB_00fea0c8;
    }
    FUN_00feb504(local_b0,local_b8,local_c0,local_118);
    if ((local_c0 != (cfstringStruct *)0x0) &&
       (pcVar3 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48),
       pcVar2 = local_f0, ((ulong)pcVar3 & 1) != 0)) {
      lVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      local_130 = (cfstringStruct *)((long)&pcVar2->field0_0x0 + lVar1);
      pcVar2 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
      local_200 = pcVar2;
      if (local_130 < pcVar2) {
        local_200 = local_130;
      }
      local_140 = local_200;
      local_78 = local_200;
      local_80 = 0;
      local_70 = local_200;
      local_68 = 0;
      local_128 = local_200;
      uStack_120 = 0;
      uStack_148 = 0;
      local_150 = local_200;
      local_138 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setSelectedRange__026a0d48,local_200,0);
    }
    local_a1 = 1;
    local_d0 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_insertString__0269dc28,local_c8);
LAB_00fea0c8:
    pcVar2 = local_b0;
    FUN_00fe91d8(local_b0,local_b8,local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_210 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_210 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_210;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,local_d8);
    if (((((ulong)pcVar2 & 1) != 0) &&
        (FUN_00feb504(local_b0,local_b8,local_c0,local_118), local_c0 != (cfstringStruct *)0x0)) &&
       (pcVar3 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48),
       pcVar2 = local_f0, ((ulong)pcVar3 & 1) != 0)) {
      lVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      pcVar2 = (cfstringStruct *)((long)&pcVar2->field0_0x0 + lVar1);
      local_230 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
      if (pcVar2 < local_230) {
        local_230 = pcVar2;
      }
      local_98 = local_230;
      local_a0 = 0;
      local_90 = local_230;
      local_88 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setSelectedRange__026a0d48,local_230,0);
    }
    local_a1 = 1;
    local_d0 = 1;
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_d8,0);
LAB_00fea2c0:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  return local_a1 & 1;
}

