// prepareEngine: @ 015dcc90

/* Function Stack Size: 0x18 bytes */

bool WCRiFontConverter::prepareEngine_(ID param_1,SEL param_2,ID *param_3)

{
  ID IVar1;
  uint uVar2;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 *local_70;
  byte *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  code *local_40;
  undefined8 local_38;
  byte local_29;
  ID *local_28;
  SEL local_20;
  ID local_18;
  
  local_68 = &local_29;
  local_29 = 0;
  local_70 = &local_60;
  local_60 = 0;
  local_50 = 0x32000000;
  local_4c = 0x30;
  local_48 = FUN_015dcdac;
  local_40 = FUN_015dce00;
  local_38 = 0;
  local_90 = PTR___NSConcreteGlobalBlock_02578658;
  local_88 = 0xd0800000;
  local_84 = 0;
  local_80 = FUN_015dce2c;
  local_78 = &DAT_025874b8;
  local_58 = local_70;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _dispatch_sync(DAT_028e3b98,&local_90);
  if ((local_28 != (ID *)0x0) && (local_58[5] != 0)) {
    IVar1 = local_58[5];
    _objc_retainAutorelease();
    *local_28 = IVar1;
  }
  uVar2 = (uint)local_29;
  __Block_object_dispose(&local_60,8);
  _objc_storeStrong(&local_38,0);
  return uVar2 & 1;
}

