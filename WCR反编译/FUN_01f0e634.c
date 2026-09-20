// FUN_01f0e634 @ 01f0e634

void FUN_01f0e634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  long local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_38;
  FUN_01f06ca8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_40;
  local_48 = uVar2;
  FUN_01f06ca8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_50 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_54 = 1;
    local_28 = puVar5;
  }
  else {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (((uVar2 == 0) ||
        (lVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
        lVar3 == 0)) ||
       (uVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_50),
       (uVar2 & 1) != 0)) {
      puVar5 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar5;
      local_54 = 1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_60 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcrasset____);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_68 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_30;
      puVar4 = local_60;
      local_a8 = PTR___NSConcreteGlobalBlock_02578658;
      local_a0 = 0xd0800000;
      local_9c = 0;
      local_98 = FUN_01f108e4;
      local_90 = &DAT_02585f00;
      local_70 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_70;
      local_88 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_68;
      local_80 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_a8);
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
      local_54 = 1;
      local_28 = puVar5;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

