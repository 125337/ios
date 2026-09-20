// FUN_000b9358 @ 000b9358

void FUN_000b9358(undefined8 param_1,ulong param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_f8;
  ulong local_e8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  byte local_69;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  local_31 = param_3;
  local_30 = param_2;
  _objc_getAssociatedObject(local_28,&DAT_028c80b9);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_50 = 1;
  }
  else {
    local_e8 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c80ba);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_e8;
    if (local_e8 == 0) {
      local_e8 = 0x7fffffffffffffff;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_integerValue_026ca750);
    }
    uVar2 = local_28;
    local_60 = local_e8;
    if (local_e8 == local_30) {
      local_50 = 1;
    }
    else {
      local_69 = 0;
      bVar1 = local_30 != 0x7fffffffffffffff;
      if (bVar1) {
        local_f8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_f8;
      }
      else {
        local_f8 = (undefined *)0x0;
      }
      local_69 = bVar1;
      _objc_setAssociatedObject(uVar2,&DAT_028c80ba,local_f8,1);
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      local_98 = PTR___NSConcreteGlobalBlock_02578658;
      local_90 = 0xd0800000;
      local_8c = 0;
      local_88 = FUN_000b9bac;
      local_80 = &DAT_02579da0;
      local_78 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_98);
      if (((local_31 & 1) != 0) && (local_30 != 0x7fffffffffffffff)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      }
      local_50 = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

