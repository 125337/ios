// FUN_014fcf00 @ 014fcf00

void FUN_014fcf00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  cfstringStruct *local_d8;
  cfstringStruct *local_a0;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  int local_40;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  FUN_014e78c0();
  if ((uVar1 & 1) == 0) {
    **(long **)(param_1 + 0x38) = **(long **)(param_1 + 0x38) + 1;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_sex);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    iVar7 = (int)pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (iVar7 == 1) {
      **(long **)(param_1 + 0x40) = **(long **)(param_1 + 0x40) + 1;
    }
    else if (iVar7 == 2) {
      **(long **)(param_1 + 0x48) = **(long **)(param_1 + 0x48) + 1;
    }
    else {
      **(long **)(param_1 + 0x50) = **(long **)(param_1 + 0x50) + 1;
    }
    pcVar2 = local_28;
    local_40 = iVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_region);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_51 = ((ulong)pcVar3 & 1) == 0;
    if (local_51) {
      local_a0 = &cf__gw;
    }
    else {
      local_a0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_region);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_a0;
    }
    local_51 = !local_51;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a0;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    lVar5 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_objectForKeyedSubscript__0269d098,local_48);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar6 + 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
               local_48);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_bucket);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_60 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_60;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__0269d248,local_d8,
               local_48);
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_age);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_014fb478();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

