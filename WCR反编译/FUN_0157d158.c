// FUN_0157d158 @ 0157d158

void FUN_0157d158(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined8 uStack_d8;
  cfstringStruct *local_d0;
  undefined *puStack_c8;
  cfstringStruct *local_c0;
  undefined *puStack_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined4 local_9c;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  
  local_88 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_88,param_1);
  pcVar1 = local_88;
  FUN_0157d604();
  _objc_retainAutoreleasedReturnValue();
  local_90 = pcVar1;
  FUN_0157b838();
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_9c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = &cf___;
    pcVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_b0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) != 0) {
        _objc_storeStrong(&local_a8,local_b0);
      }
      _objc_storeStrong(&local_b0,0);
    }
    pcVar1 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    local_40 = 0;
    local_28 = 0;
    puStack_b8 = (undefined *)0x0;
    pcVar3 = local_98;
    local_c0 = pcVar1;
    local_38 = pcVar1;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_selectedRange_026a43a0);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar1 = local_98;
      puVar2 = PTR_s_selectedRange_026a43a0;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_d0 = pcVar1;
      puStack_c8 = puVar2;
      local_c0 = pcVar1;
      puStack_b8 = puVar2;
    }
    pcVar1 = local_c0;
    if ((local_c0 == (cfstringStruct *)0x7fffffffffffffff) ||
       (pcVar3 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0),
       pcVar3 < pcVar1)) {
      pcVar1 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
      local_60 = 0;
      local_48 = 0;
      uStack_d8 = 0;
      puStack_b8 = (undefined *)0x0;
      local_e0 = pcVar1;
      local_c0 = pcVar1;
      local_58 = pcVar1;
      local_50 = pcVar1;
    }
    pcVar1 = (cfstringStruct *)(puStack_b8 + (long)&local_c0->field0_0x0);
    pcVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (pcVar3 < pcVar1) {
      pcVar1 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
      puStack_b8 = (undefined *)((long)pcVar1 - (long)local_c0);
    }
    pcVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_setSelectedRange__026a0d48,local_c0,puStack_b8);
    }
    pcVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_insertText__026a43a8);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_stringByReplacingCharactersInRan_026a43b0,local_c0,puStack_b8,
                   &cf_space_s_);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setText__026caa88,pcVar1);
        pcVar1 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48);
        if (((ulong)pcVar1 & 1) != 0) {
          local_78 = (undefined *)((long)&local_c0->field0_0x0 + 1);
          local_80 = 0;
          local_68 = 0;
          local_70 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_setSelectedRange__026a0d48,local_78,0);
        }
        _objc_storeStrong(&local_e8,0);
      }
      local_9c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_insertText__026a43a8,&cf_space_s_);
      local_9c = 1;
    }
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  return;
}

