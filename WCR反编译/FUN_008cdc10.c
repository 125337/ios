// FUN_008cdc10 @ 008cdc10

void FUN_008cdc10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40 [3];
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ce280)(param_1,param_2);
  lVar2 = local_18;
  FUN_008d7028();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  if (lVar2 != 0) {
    FUN_008d1600(lVar2);
    lVar2 = local_28;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_60 = PTR___NSConcreteGlobalBlock_02578658;
    local_58 = 0xd0800000;
    local_54 = 0;
    local_50 = FUN_008d7368;
    local_48 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_performWithoutAnimation__0269e7e0,&local_60);
    _objc_storeStrong(local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

