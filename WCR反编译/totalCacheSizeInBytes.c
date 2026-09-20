// totalCacheSizeInBytes @ 010c997c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineMomentsMonitor::totalCacheSizeInBytes(ID param_1,SEL param_2)

{
  long_long lVar1;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_40 = 0;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_28 = 0;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_010c9a9c;
  local_58 = &DAT_02585298;
  local_38 = &local_40;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = param_1;
  local_48 = &local_40;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_performIOTaskSync__026ae6f0,&local_70);
  lVar1 = local_38[3];
  _objc_storeStrong(&local_50,0);
  __Block_object_dispose(&local_40,8);
  return lVar1;
}

