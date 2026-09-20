// FUN_0172c0c0 @ 0172c0c0

void FUN_0172c0c0(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  long lVar7;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  cfstringStruct *local_70;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  byte local_31;
  cfstringStruct *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    local_28 = 0;
    uVar6 = *(ulong *)(param_1 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar6 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_statusCode_026a1578);
      local_28 = uVar4;
    }
    pcVar5 = *(cfstringStruct **)(param_1 + 0x30);
    FUN_0172c424(pcVar5,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_success);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    local_31 = (byte)pcVar2;
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_a0 = &cf__gw;
    }
    else {
      local_a0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_a0;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (*(long *)(param_1 + 0x38) != 0) {
      if ((local_31 & 1) == 0) {
        local_c0 = local_40;
      }
      else {
        local_c0 = (cfstringStruct *)0x0;
      }
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
                (*(long *)(param_1 + 0x38),local_31 & 1,local_c0);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_30,0);
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_70 = &cf_Q__;
    }
    (**(code **)(lVar7 + 0x10))(lVar7,0,local_70);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  return;
}

