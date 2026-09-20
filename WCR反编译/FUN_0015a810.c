// FUN_0015a810 @ 0015a810

void FUN_0015a810(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar3;
  long lVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined1 auStack_58 [8];
  long local_50;
  undefined1 auStack_48 [8];
  long local_40;
  uint local_38;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0015ab30();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    lVar3 = local_18;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_48,local_18);
      lVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_001678b4;
      local_68 = &DAT_025797f0;
      local_50 = lVar4;
      _objc_copyWeak(auStack_58,auStack_48);
      lVar4 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = lVar4;
      FUN_001640e4(&cf_hQSmn_v,&cf_nxSm_gOhQn_vmo_,&cf_hQSm,&local_80);
      _objc_storeStrong(&local_60);
      _objc_destroyWeak(auStack_58);
      _objc_storeStrong(&local_50,0);
      _objc_destroyWeak(auStack_48);
    }
    local_38 = (uint)(lVar3 == 0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

