// FUN_006816d8 @ 006816d8

void FUN_006816d8(undefined8 param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  cfstringStruct *local_78;
  undefined1 *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  int local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar3 = local_30;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar3 = local_38;
    FUN_0067e628();
    bVar2 = false;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_38;
      puVar5 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf__);
      bVar2 = pcVar3 == (cfstringStruct *)0x7fffffffffffffff;
      local_58 = pcVar3;
      local_50 = puVar5;
    }
    pcVar3 = local_38;
    if (bVar2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
      local_48 = 1;
    }
    else {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_count_0269cfe0);
      pcVar3 = local_38;
      if (pcVar4 < (cfstringStruct *)0x3) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_48 = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_decimalDigitCharacterSet_026a5190
                  );
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        for (local_70 = (undefined1 *)((long)&pcVar3[-1].field3_0x18 + 6); 0 < (long)local_70;
            local_70 = local_70 + -1) {
          pcVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
          _objc_retainAutoreleasedReturnValue();
          local_78 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_48 = 4;
          }
          else {
            pcVar3 = local_78;
            FUN_0067e628();
            if ((((ulong)pcVar3 & 1) == 0) &&
               (pcVar3 = local_78,
               (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_hasPrefix__0269d320,&cf__),
               ((ulong)pcVar3 & 1) == 0)) {
              pcVar3 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78,PTR_s_rangeOfCharacterFromSet__0269db68,local_68);
              puVar1 = (undefined1 *)((long)&pcVar3[-0x400000000000000].field0_0x0 + 1);
              if (puVar1 == (undefined1 *)0x0) {
                local_48 = 4;
              }
              else {
                pcVar3 = local_78;
                FUN_0067d82c(puVar1);
                _objc_retainAutoreleasedReturnValue();
                local_48 = 1;
                local_28 = pcVar3;
              }
            }
            else {
              local_48 = 4;
            }
          }
          _objc_storeStrong(&local_78,0);
          iVar7 = local_48 + -4;
          if (iVar7 != 0) goto LAB_00681bec;
        }
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_0067d82c();
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        iVar7 = 1;
        local_48 = 1;
LAB_00681bec:
        _objc_storeStrong(iVar7,&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

