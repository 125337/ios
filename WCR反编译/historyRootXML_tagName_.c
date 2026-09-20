// historyRootXML:tagName: @ 01b2b2bc

/* Function Stack Size: 0x20 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyRootXML_tagName_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  qword *pqVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *local_168;
  undefined *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  long local_b8;
  cfstringStruct *local_b0;
  long local_a8;
  cfstringStruct *local_a0;
  SEL local_98;
  ID local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_a0 = (cfstringStruct *)0x0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_4);
  pcVar2 = local_a0;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_a8;
  local_b0 = pcVar2;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_b0;
  local_b8 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (lVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = &::cf___;
    local_bc = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_b0;
    puVar7 = PTR_s_rangeOfString_options__0269d118;
    local_c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rangeOfString_options__0269d118,puVar4,1);
    local_d8 = pcVar2;
    local_d0 = puVar7;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = &::cf___;
      local_bc = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      lVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_b0;
      pcVar2 = local_d8;
      pcVar5 = local_b0;
      local_e0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      local_60 = (long)pcVar5 - (long)local_d8;
      local_58 = pcVar2;
      local_50 = pcVar2;
      puVar7 = PTR_s_rangeOfString_options_range__0269d130;
      local_48 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_rangeOfString_options_range__0269d130,puVar4,1,pcVar2,local_60,in_x6,
                 in_x7,lVar3);
      pcVar2 = local_d8;
      if (pcVar6 == (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = &::cf___;
      }
      else {
        puVar4 = puVar7 + ((long)pcVar6 - (long)local_d8);
        local_78 = local_d8;
        local_70 = local_d8;
        local_40 = local_d8;
        pqVar1 = &local_d8->field0_0x0;
        pcVar5 = local_b0;
        local_80 = puVar4;
        local_68 = puVar4;
        local_38 = puVar4;
        local_30 = pcVar6;
        local_28 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
        if (pcVar5 < (cfstringStruct *)(puVar4 + (long)pqVar1)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = &::cf___;
        }
        else {
          pcVar6 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_substringWithRange__0269d138,pcVar2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          local_168 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_168 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = local_168;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
      }
      local_bc = 1;
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_88;
}

