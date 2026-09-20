// indexOfSelectedGroup @ 0178e3f8

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCPluginsViewControllerBehavior::indexOfSelectedGroup(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_78;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_50 = PTR___NSConcreteGlobalBlock_02578658;
  local_48 = 0xd0800000;
  local_44 = 0;
  local_40 = FUN_0178e514;
  local_38 = &DAT_02581d20;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar1;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_indexOfObjectPassingTest__026a27f8,&local_50);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_78 = IVar1;
  if (IVar1 == 0x7fffffffffffffff) {
    local_78 = 0;
  }
  local_28 = IVar1;
  _objc_storeStrong(&local_30,0);
  return local_78;
}

