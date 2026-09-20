// FUN_000d5a24 @ 000d5a24

void FUN_000d5a24(ulong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_208;
  ulong local_1e0;
  long local_158;
  ulong local_e0;
  ulong local_b8;
  ulong local_b0;
  undefined1 local_a1;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  byte local_81;
  ulong local_80;
  long local_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  ulong local_48;
  byte local_39;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_39 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_e0 = 0;
  }
  else {
    local_e0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  }
  local_48 = local_e0;
  uVar3 = local_28;
  (*DAT_028c8330)(local_28,local_30,local_38,local_39 & 1);
  uVar1 = (uint)uVar3;
  FUN_000d8808();
  uVar3 = local_28;
  if ((uVar1 & 1) == 0) {
    local_58 = 1;
    goto LAB_000d636c;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_39 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar3,&DAT_028c8399,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_setAssociatedObject(local_28,&DAT_028c839b,0,1);
  uVar3 = local_28;
  FUN_000dd52c();
  local_60 = uVar3;
  FUN_000e64ec(local_28,local_38);
  FUN_000e2348(local_28);
  uVar3 = local_28;
  FUN_000e3de4();
  if (((uVar3 & 1) != 0) && (uVar3 = local_28, FUN_000dc544(), (uVar3 & 1) == 0)) {
    uVar3 = local_28;
    FUN_000dd52c();
    uVar4 = local_28;
    local_68 = uVar3;
    _objc_getAssociatedObject(local_28,&DAT_028c8397);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = uVar5 + 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               uVar5 + 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028c8397,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_81 = 0;
    if (local_68 < local_60 || local_68 - local_60 == 0) {
      uVar3 = local_28;
      _objc_getAssociatedObject(local_68 - local_60,local_28,&DAT_028c8396);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_158 = uVar3 + 1;
    }
    else {
      local_158 = 0;
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    uVar3 = local_28;
    local_78 = local_158;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_158);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028c8396,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_000e4a4c(local_28,&cf_data,0);
  }
  FUN_000e6838(local_28);
  uVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c8393);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_90 = uVar3;
  FUN_000d8d08(local_28,"m_arrMsg");
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_98 = uVar4;
  _objc_getAssociatedObject(local_28,&DAT_028c8374);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_a0 = uVar3;
  _objc_getAssociatedObject(local_28,&DAT_028c8373);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar3 = local_a0;
  local_a1 = (undefined1)uVar5;
  if ((uVar5 & 1) == 0) {
LAB_000d60bc:
    uVar3 = local_98;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_208 = 0;
    }
    else {
      local_208 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
    }
    local_1e0 = local_208;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) goto LAB_000d60bc;
    local_1e0 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
  }
  local_b0 = local_1e0;
  uVar4 = local_28;
  FUN_000d8d08(local_28,"m_dicMsgView");
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_90;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
  }
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  }
  _NSLog(&cf__wcr__chat_member_search_datacontroller__pbatch__luend__dall__luvisible__lucache__lu);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  local_58 = 0;
LAB_000d636c:
  _objc_storeStrong(&local_38,0);
  return;
}

