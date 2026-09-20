// item:matchesFilter: @ 01e9fed4

/* Function Stack Size: 0x20 bytes */

bool WCRefineToDoHistoryViewController::item_matchesFilter_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  byte local_8c;
  cfstringStruct *local_78;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long_long local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_eventType);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_78 = &::cf___;
  }
  else {
    local_78 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_eventType);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_38 != 0) {
    if (local_38 == 1) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_completed);
      local_11 = (byte)pcVar2 & 1;
      goto LAB_01ea01c4;
    }
    if (local_38 == 2) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_completed);
      local_8c = 0;
      bVar1 = ((ulong)pcVar2 & 1) != 0;
      if (bVar1) {
        local_58 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_wasOverdue);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_8c = (byte)pcVar2;
      }
      local_11 = local_8c & 1;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      goto LAB_01ea01c4;
    }
    if (local_38 == 3) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_deleted);
      local_11 = (byte)pcVar2 & 1;
      goto LAB_01ea01c4;
    }
  }
  local_11 = 1;
LAB_01ea01c4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

