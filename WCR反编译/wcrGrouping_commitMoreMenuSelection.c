// wcrGrouping_commitMoreMenuSelection @ 0035f118

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_commitMoreMenuSelection
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_a0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028ca0e8);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = local_18;
  local_28 = param_1;
  _objc_getAssociatedObject(local_18,&DAT_028ca0e9);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_a0;
  if (local_a0 == 0) {
    local_a0 = 0x7fffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_integerValue_026ca750);
  }
  local_38 = local_a0;
  if (((local_a0 == 0x7fffffffffffffff) || ((long)local_a0 < 0)) ||
     (IVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
     (long)IVar2 <= (long)local_a0)) {
    FUN_0035f0b0(local_18,1);
    local_3c = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    _objc_initWeak(auStack_58,local_18);
    IVar1 = local_18;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_0035f744;
    local_70 = &DAT_02579c60;
    _objc_copyWeak(auStack_60,auStack_58);
    IVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar2;
    FUN_0035f39c(IVar1,1,&local_88);
    _objc_storeStrong(&local_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

