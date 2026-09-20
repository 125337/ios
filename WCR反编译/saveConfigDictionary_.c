// saveConfigDictionary: @ 01fcc708

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::saveConfigDictionary_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_01fcb534();
  uVar1 = local_28;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01fcc7c8;
  local_38 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  FUN_01fcbfe0(&local_50);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

