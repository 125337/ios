// removeItemId: @ 0113346c

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickReplyStore::removeItemId_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  ID local_48;
  ID local_40;
  uint local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customItems_026af318);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    lVar1 = local_30;
    IVar2 = local_40;
    local_70 = PTR___NSConcreteGlobalBlock_02578658;
    local_68 = 0xd0800000;
    local_64 = 0;
    local_60 = FUN_01133650;
    local_58 = &DAT_02581d20;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_indexOfObjectPassingTest__026a27f8,&local_70);
    local_48 = IVar2;
    if (IVar2 != 0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectAtIndex__0269d530,IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomItems__026af320,local_40);
    }
    local_34 = (uint)(IVar2 == 0x7fffffffffffffff);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

