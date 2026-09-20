// homeAvatarStripRowIndexForUsername: @ 0215cf50

/* Function Stack Size: 0x18 bytes */

long_long WCRefineConfig::homeAvatarStripRowIndexForUsername_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_50;
  long_long local_48;
  ID local_40;
  int local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = 0xffffffffffffffff;
    local_34 = 1;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 0;
    local_40 = IVar3;
    while( true ) {
      lVar1 = local_48;
      IVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      if ((long)IVar3 <= (long)lVar1) break;
      IVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_50;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((IVar3 & 1) == 0) {
LAB_0215d0ec:
        local_34 = 0;
      }
      else {
        IVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,local_30);
        if ((IVar3 & 1) == 0) goto LAB_0215d0ec;
        local_18 = local_48;
        local_34 = 1;
      }
      _objc_storeStrong(&local_50,0);
      if (local_34 != 0) goto LAB_0215d134;
      local_48 = local_48 + 1;
    }
    local_18 = 0xffffffffffffffff;
    local_34 = 1;
LAB_0215d134:
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

