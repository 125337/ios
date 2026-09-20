// wcr_selectedText @ 016981d4

/* Function Stack Size: 0x10 bytes */

ID WCRWordSegPickerController::wcr_selectedText(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ID local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined1 local_71;
  cfstringStruct *local_70 [3];
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIndexes_026b2a08);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &::cf___;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_38 = 0x4e00;
    local_40 = 0x9fff;
    local_30 = 0x4e00;
    local_28 = 0x9fff;
    local_90 = 0x4e00;
    local_88 = 0x9fff;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_70[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_characterSetWithRange__026b2a28,
               0x4e00,0x9fff);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_50;
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_selectedIndexes_026b2a08);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_50;
    local_d0 = PTR___NSConcreteGlobalBlock_02578658;
    local_c8 = 0xd0800000;
    local_c4 = 0;
    local_c0 = FUN_016985a8;
    local_b8 = &DAT_02587eb0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_80;
    local_b0 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_70[0];
    local_a8 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = pcVar2;
    local_98 = &local_71;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_enumerateIndexesUsingBlock__026a2090,&local_d0);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    pcVar2 = local_70[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_copy_0269d150);
    local_48 = pcVar2;
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(local_70,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

