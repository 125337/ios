// FUN_01975f38 @ 01975f38

/* WARNING: Removing unreachable block (ram,0x0197606c) */

void FUN_01975f38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined **local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  ppuVar2 = &local_50;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01976150;
  local_38 = &DAT_0258a448;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_019765ac;
  local_60 = &DAT_0258a478;
  local_28 = ppuVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_colorWithDynamicProvider__0269e538,&local_78);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar3;
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

