// realIndexForMessageId: @ 01badef0

/* Function Stack Size: 0x18 bytes */

long_long WCRefineMessageRepositoryViewController::realIndexForMessageId_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  bool bVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  ID local_50;
  long_long local_48;
  int local_40;
  byte local_39;
  ID local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_39 = 0;
  bVar2 = true;
  if (lVar3 != 0) {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messagesArray_026c03b8);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = IVar4 == 0;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar2) {
    local_18 = 0x7fffffffffffffff;
    local_40 = 1;
  }
  else {
    local_48 = 0;
    while( true ) {
      lVar1 = local_48;
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messagesArray_026c03b8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((long)IVar5 <= (long)lVar1) break;
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messagesArray_026c03b8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar7);
      if ((IVar4 & 1) == 0) {
LAB_01bae17c:
        local_40 = 0;
      }
      else {
        IVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_30);
        if ((IVar4 & 1) == 0) goto LAB_01bae17c;
        local_18 = local_48;
        local_40 = 1;
      }
      _objc_storeStrong(&local_50,0);
      if (local_40 != 0) goto LAB_01bae1c4;
      local_48 = local_48 + 1;
    }
    local_18 = 0x7fffffffffffffff;
    local_40 = 1;
  }
LAB_01bae1c4:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

