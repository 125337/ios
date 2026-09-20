// displayNameForRule:fallbackIndex: @ 010acc28

/* Function Stack Size: 0x20 bytes */

ID WCRefineMessageSyncRule::displayNameForRule_fallbackIndex_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  unsigned_long_long local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = local_30;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  puVar1 = local_40;
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_R);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

