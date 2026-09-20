// FUN_007cccac @ 007cccac

void FUN_007cccac(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long local_80;
  undefined4 local_78;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  long *local_28;
  
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  uVar2 = local_60;
  FUN_007cd424();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_58 = 0;
    local_78 = 1;
  }
  else {
    local_28 = &DAT_028cce30;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257ffd0);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    uVar2 = local_68;
    lVar5 = DAT_028cce28;
    uVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    local_48 = 0;
    local_40 = 0;
    local_50 = uVar4;
    local_38 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar5,PTR_s_firstMatchInString_options_range_0269ef48,uVar2,0,0,uVar4);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_80 = lVar5;
    if (lVar5 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = true;
      if (lVar5 != 0x7fffffffffffffff) {
        puVar3 = PTR_s_range_0269ef50;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar3 == (undefined *)0x0;
      }
    }
    uVar2 = local_68;
    if (bVar1) {
      local_58 = 0;
    }
    else {
      lVar5 = local_80;
      puVar3 = PTR_s_range_0269ef50;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringWithRange__0269d138,lVar5,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
    }
    local_78 = 1;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue(local_58);
  return;
}

