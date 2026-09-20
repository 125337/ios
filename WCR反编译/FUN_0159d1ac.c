// FUN_0159d1ac @ 0159d1ac

void FUN_0159d1ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  ulong local_a8;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ulong local_50;
  long local_48;
  long local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
  }
  local_50 = local_a8;
  lVar6 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_61 = 0;
  if (lVar6 == 0) {
    local_c0 = &cf___;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = 1;
    local_b8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    local_c0 = local_b8;
    local_60 = pcVar4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_c0;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  pcVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  bVar1 = pcVar4 < (cfstringStruct *)((long)&section_00000068.reserved3 + 1);
  if (bVar1) {
    local_d0 = local_58;
  }
  else {
    local_d0 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringToIndex__0269d6c0,0xb4);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_d0;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (local_40 == 0) {
    if ((long)local_50 < 400) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_elb);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_elb);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(lVar6);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

