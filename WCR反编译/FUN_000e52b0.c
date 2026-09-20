// FUN_000e52b0 @ 000e52b0

void FUN_000e52b0(undefined8 param_1)

{
  uint uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *local_190;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  FUN_000dc544();
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028c8379);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar2 = local_30;
      FUN_000dd52c();
      if (pcVar2 < (cfstringStruct *)0x14) {
        local_28 = (cfstringStruct *)0x0;
        local_40 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_goal;
        local_40 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_end;
      local_40 = 1;
    }
    goto LAB_000e5990;
  }
  pcVar2 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028c8399);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_wait_first;
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_boolValue_026ca540);
    uVar1 = (uint)pcVar2;
    if (((ulong)pcVar2 & 1) == 0) {
      FUN_000d8808();
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_off;
        local_40 = 1;
      }
      else {
        pcVar2 = local_30;
        FUN_000e3de4();
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_30;
          FUN_000d8d08(local_30,"m_arrMsg");
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_68 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)pcVar2 & 1) == 0) {
            local_190 = (cfstringStruct *)0x0;
          }
          else {
            local_190 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
          }
          pcVar2 = (cfstringStruct *)0x0;
          if ((cfstringStruct *)0x13 < local_190) {
            pcVar2 = &cf_prefetch_goal;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = 1;
          local_28 = pcVar2;
          _objc_storeStrong(&local_68,0);
        }
        else {
          FUN_000e4084(local_30);
          pcVar2 = local_30;
          _objc_getAssociatedObject(local_30,&DAT_028c8398);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_50 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          uVar5 = (ulong)pcVar2 & 0xffffffff;
          if (((ulong)pcVar2 & 1) == 0) {
LAB_000e5628:
            pcVar2 = local_30;
            FUN_000dd52c(uVar5);
            if (pcVar2 < (cfstringStruct *)0x14) {
              pcVar3 = local_30;
              _objc_getAssociatedObject
                        ((undefined1 *)((long)&pcVar2[-1].field1_0x8 + 4),local_30,&DAT_028c8396);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              local_58 = pcVar2;
              if (pcVar2 < (cfstringStruct *)0x2) {
                pcVar3 = local_30;
                _objc_getAssociatedObject
                          ((undefined1 *)((long)&pcVar2[-1].field3_0x18 + 6),local_30,&DAT_028c8397)
                ;
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = pcVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                local_60 = pcVar2;
                if (pcVar2 < (cfstringStruct *)0x6) {
                  local_28 = (cfstringStruct *)0x0;
                }
                else {
                  FUN_000e59c8((undefined1 *)((long)&pcVar2[-1].field3_0x18 + 2),local_30,&cf_pages)
                  ;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &cf_pages;
                }
              }
              else {
                FUN_000e59c8(local_30,&cf_empty);
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf_empty;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf_goal;
            }
          }
          else {
            pcVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
            pcVar2 = local_50;
            uVar5 = 0;
            if (pcVar3 == (cfstringStruct *)0x0) goto LAB_000e5628;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar2;
          }
          local_40 = 1;
          _objc_storeStrong(&local_50,0);
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_end;
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_48,0);
LAB_000e5990:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

