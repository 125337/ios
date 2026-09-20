// FUN_0087bdc8 @ 0087bdc8

byte FUN_0087bdc8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_50;
  byte local_41;
  undefined8 local_40;
  long *local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_41 = 0;
  }
  else {
    local_38 = &DAT_028cd8a0;
    local_40 = 0;
    _objc_storeStrong(&local_40,&PTR___NSConcreteGlobalBlock_025809b0);
    if (*local_38 + 1 != 0) {
      _dispatch_once(*local_38 + 1,local_38,local_40);
    }
    _objc_storeStrong(&local_40,0);
    uVar2 = local_50;
    lVar4 = DAT_028cd898;
    if (DAT_028cd898 == 0) {
      local_41 = 0;
    }
    else {
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_28 = 0;
      local_20 = 0;
      local_30 = uVar3;
      local_18 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar4,PTR_s_firstMatchInString_options_range_0269ef48,uVar2,0,0,uVar3);
      _objc_retainAutoreleasedReturnValue();
      local_41 = lVar4 != 0;
      (*(code *)PTR__objc_release_02578630)();
    }
  }
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

