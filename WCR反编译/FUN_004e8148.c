// FUN_004e8148 @ 004e8148

void FUN_004e8148(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *puStack_c8;
  cfstringStruct *local_c0;
  undefined *puStack_b8;
  cfstringStruct *local_b0;
  undefined *puStack_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined4 local_8c;
  cfstringStruct *local_88 [3];
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,param_1);
  pcVar1 = local_68;
  FUN_004e8c94();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar1;
  FUN_004e8db0();
  _objc_retainAutoreleasedReturnValue();
  local_88[0] = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_8c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = &cf___;
    pcVar1 = local_88[0];
    FUN_004e3288(local_88[0],PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_a0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      _objc_storeStrong(&local_98,local_a0);
    }
    pcVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    local_40 = 0;
    local_28 = 0;
    puStack_a8 = (undefined *)0x0;
    pcVar3 = local_88[0];
    local_b0 = pcVar1;
    local_38 = pcVar1;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88[0],PTR_s_respondsToSelector__026ca818,PTR_s_selectedRange_026a43a0);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar1 = local_88[0];
      puVar2 = PTR_s_selectedRange_026a43a0;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c0 = pcVar1;
      puStack_b8 = puVar2;
      local_b0 = pcVar1;
      puStack_a8 = puVar2;
    }
    pcVar1 = local_b0;
    if ((local_b0 == (cfstringStruct *)0x7fffffffffffffff) ||
       (pcVar3 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
       pcVar3 < pcVar1)) {
      pcVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      puStack_a8 = (undefined *)0x0;
      local_b0 = pcVar1;
    }
    pcVar1 = (cfstringStruct *)(puStack_a8 + (long)&local_b0->field0_0x0);
    pcVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if (pcVar3 < pcVar1) {
      pcVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      puStack_a8 = (undefined *)((long)pcVar1 - (long)local_b0);
    }
    pcVar1 = local_88[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88[0],PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48);
    if (((ulong)pcVar1 & 1) != 0) {
      puStack_c8 = puStack_a8;
      local_d0 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88[0],PTR_s_setSelectedRange__026a0d48,local_b0,puStack_a8);
    }
    pcVar1 = local_88[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88[0],PTR_s_respondsToSelector__026ca818,PTR_s_insertText__026a43a8);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88[0],PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_stringByReplacingCharactersInRan_026a43b0,local_b0,puStack_a8,
                   &cf_space_s_);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_setText__026caa88,pcVar1);
        pcVar1 = local_88[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88[0],PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48);
        if (((ulong)pcVar1 & 1) != 0) {
          local_58 = (undefined *)((long)&local_b0->field0_0x0 + 1);
          local_60 = 0;
          local_48 = 0;
          local_50 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88[0],PTR_s_setSelectedRange__026a0d48,local_58,0);
        }
        _objc_storeStrong(&local_d8,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_insertText__026a43a8,&cf_space_s_);
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    local_8c = 0;
  }
  _objc_storeStrong(local_88);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  return;
}

