// FUN_003af490 @ 003af490

void FUN_003af490(undefined8 param_1,ulong param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_b8;
  ulong local_a8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  byte local_51;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  local_21 = param_3;
  local_20 = param_2;
  _objc_getAssociatedObject(local_18,&DAT_028ca12a);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_34 = 1;
  }
  else {
    local_a8 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028ca0e9);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_a8;
    if (local_a8 == 0) {
      local_a8 = 0x7fffffffffffffff;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_integerValue_026ca750);
    }
    uVar2 = local_18;
    local_48 = local_a8;
    if (local_a8 == local_20) {
      local_34 = 1;
    }
    else {
      local_51 = 0;
      bVar1 = local_20 != 0x7fffffffffffffff;
      if (bVar1) {
        local_b8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_b8;
      }
      else {
        local_b8 = (undefined *)0x0;
      }
      local_51 = bVar1;
      _objc_setAssociatedObject(uVar2,&DAT_028ca0e9,local_b8,1);
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      local_80 = PTR___NSConcreteGlobalBlock_02578658;
      local_78 = 0xd0800000;
      local_74 = 0;
      local_70 = FUN_003af8f8;
      local_68 = &DAT_02579da0;
      local_60 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_80);
      if (((local_21 & 1) != 0) && (local_20 != 0x7fffffffffffffff)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      }
      local_34 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

