// _WCRChatAttachmentRefreshItems @ 00ebd94c

void _WCRChatAttachmentRefreshItems(cfstringStruct *param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_c0;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  byte local_31;
  cfstringStruct *local_30;
  byte local_21;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  FUN_00ebdc88();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  FUN_00ebdfa4(param_1,*(undefined8 *)PTR____NSArray0___02578280);
  _objc_retainAutoreleasedReturnValue();
  local_21 = 0;
  local_20 = param_1;
  FUN_00ebee14(param_1,&local_21);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
  local_31 = param_1 != pcVar2;
  if (!(bool)local_31) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    if (pcVar2 == pcVar3) {
      for (local_40 = (cfstringStruct *)0x0; pcVar2 = local_40, pcVar3 = local_30,
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0), pcVar2 < pcVar3;
          local_40 = (cfstringStruct *)((long)&local_40->field0_0x0 + 1)) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (local_50 == (cfstringStruct *)0x0) {
          local_c0 = &cf___;
        }
        else {
          local_c0 = local_50;
        }
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_c0);
        bVar1 = ((ulong)pcVar2 & 1) == 0;
        if (bVar1) {
          local_31 = 1;
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
        if (bVar1) break;
      }
    }
  }
  if (((local_21 & 1) != 0) || ((local_31 & 1) != 0)) {
    FUN_00ebf3fc(local_30);
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

