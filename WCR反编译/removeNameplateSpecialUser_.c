// removeNameplateSpecialUser: @ 020c3240

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::removeNameplateSpecialUser_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setNameplateSpecialUserConfig_fo_026c1bf0,0,local_30);
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nameplateSpecialUserList_026ae848);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_48 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_78;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObject__0269d678,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setNameplateSpecialUserList__026ae850,local_40);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

