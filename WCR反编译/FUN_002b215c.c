// FUN_002b215c @ 002b215c

void FUN_002b215c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_20 = param_2;
  FUN_002ae960(local_18,&cf_MMTabBarItemView);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_28 = uVar1;
  FUN_002ae960(local_18,&cf_UITabBarButton);
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteGlobalBlock_02578658;
  local_60 = 0xd0800000;
  local_5c = 0;
  local_58 = FUN_002b2324;
  local_50 = &DAT_02579da0;
  local_48 = local_20;
  local_40[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_68);
  local_90 = PTR___NSConcreteGlobalBlock_02578658;
  local_88 = 0xd0800000;
  local_84 = 0;
  local_80 = FUN_002b2828;
  local_78 = &DAT_02579da0;
  local_70 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40[0],PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_90);
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

