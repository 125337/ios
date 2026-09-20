// chipTitleForName:groupId:amongWraps: @ 00f2cff0

/* Function Stack Size: 0x28 bytes */

ID WCRefineEmoticonGroupStore::chipTitleForName_groupId_amongWraps_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  puVar1 = local_30;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    _objc_storeStrong(&local_48,&cf_R_);
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_showChipCount_026a0fe0);
  puVar1 = local_48;
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_displayCountForGroupId_amongWrap_026a1050,local_38,local_40);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____ld_);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

