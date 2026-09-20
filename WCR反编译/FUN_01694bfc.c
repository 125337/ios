// FUN_01694bfc @ 01694bfc

void FUN_01694bfc(undefined8 param_1)

{
  undefined2 uVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  uint local_11c;
  cfstringStruct *local_b0;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar3 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar3 & 1) == 0) {
    local_b0 = &cf___;
  }
  else {
    local_b0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (local_b0 == (cfstringStruct *)0x0) {
    puVar4 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
    local_28 = puVar4;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_58 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_letterCharacterSet_026b2a30);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_60 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_decimalDigitCharacterSet_026a5190);
    _objc_retainAutoreleasedReturnValue();
    local_70 = (cfstringStruct *)0x0;
    local_68 = puVar5;
    while (pcVar3 = local_70, pcVar6 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0), local_70 < pcVar6)
    {
      pcVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,local_70);
      uVar1 = SUB82(pcVar6,0);
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_characterIsMember__026a20a0,uVar1);
      if (((ulong)puVar4 & 1) == 0) {
        uVar2 = (uint)pcVar6 & 0xffff;
        FUN_016a820c();
        if ((uVar2 & 1) == 0) {
          puVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_characterIsMember__026a20a0,uVar1);
          if ((((ulong)puVar4 & 1) == 0) &&
             (puVar4 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_characterIsMember__026a20a0,uVar1)
             , ((ulong)puVar4 & 1) == 0)) {
            FUN_016a8588(local_50,local_38,local_70,1);
            local_70 = (cfstringStruct *)((long)&local_70->field0_0x0 + 1);
          }
          else {
            for (; pcVar6 = local_38,
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
                local_70 < pcVar6; local_70 = (cfstringStruct *)((long)&local_70->field0_0x0 + 1)) {
              pcVar6 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_characterAtIndex__0269fa18,local_70);
              puVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_characterIsMember__026a20a0,(short)pcVar6);
              if ((((ulong)puVar4 & 1) == 0) &&
                 (puVar4 = local_68,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_68,PTR_s_characterIsMember__026a20a0,(short)pcVar6),
                 ((ulong)puVar4 & 1) == 0)) break;
            }
            FUN_016a8588(local_50,local_38,pcVar3,(long)local_70 - (long)pcVar3);
          }
        }
        else {
          while( true ) {
            pcVar6 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
            local_11c = 0;
            if (local_70 < pcVar6) {
              pcVar6 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_characterAtIndex__0269fa18,local_70);
              local_11c = (uint)pcVar6;
              FUN_016a820c();
            }
            if ((local_11c & 1) == 0) break;
            local_70 = (cfstringStruct *)((long)&local_70->field0_0x0 + 1);
          }
          FUN_016a8290(local_50,local_38,pcVar3,(long)local_70 - (long)pcVar3);
        }
      }
      else {
        local_70 = (cfstringStruct *)((long)&local_70->field0_0x0 + 1);
      }
    }
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    local_48 = 1;
    local_28 = puVar4;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

