// FUN_01974840 @ 01974840

/* WARNING: Removing unreachable block (ram,0x019748d0) */

void FUN_01974840(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc0000000;
  local_3c = 0;
  local_38 = FUN_019748f8;
  local_30 = &DAT_0258a3b8;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_28 = param_2;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithDynamicProvider__0269e538,&local_48);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

