// randomReplyCountFromSpec: @ 009be088

/* Function Stack Size: 0x18 bytes */

long_long WCRefineAIStore::randomReplyCountFromSpec_(ID param_1,SEL param_2,ID param_3)

{
  u_int32_t uVar1;
  ID IVar2;
  ID IVar3;
  ID local_e8;
  ID local_e0;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_normalizedReplyCountSpec__026aadb8,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
  IVar3 = local_40;
  if (IVar2 < 2) {
    local_b0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
    if (local_b0 == 0) {
      local_b0 = 1;
    }
    if ((long)local_b0 < 9) {
      local_b8 = local_b0;
    }
    else {
      local_b8 = 8;
    }
    if ((long)local_b8 < 2) {
      local_c0 = 1;
    }
    else {
      local_c0 = local_b8;
    }
    local_18 = local_c0;
  }
  else {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    uVar1 = _arc4random_uniform((u_int32_t)IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (8 < (long)local_e0) {
      local_e0 = 8;
    }
    if ((long)local_e0 < 2) {
      local_e8 = 1;
    }
    else {
      local_e8 = local_e0;
    }
    local_18 = local_e8;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

