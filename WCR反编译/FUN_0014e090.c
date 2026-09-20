// FUN_0014e090 @ 0014e090

void FUN_0014e090(undefined8 param_1,byte param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  byte local_a0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  byte local_58;
  byte local_57;
  byte local_52;
  byte local_51;
  undefined1 auStack_50 [15];
  char local_41;
  undefined *local_40;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  undefined **local_28;
  undefined4 local_20;
  byte local_19;
  undefined *local_18;
  
  ppuVar2 = &local_18;
  local_18 = (undefined *)0x0;
  _objc_storeStrong(ppuVar2,param_1);
  local_19 = param_2;
  if (local_18 == (undefined *)0x0) {
    local_20 = 1;
  }
  else {
    FUN_00147e08();
    _objc_retainAutoreleasedReturnValue();
    local_28 = ppuVar2;
    if (ppuVar2 == (undefined **)0x0) {
      DAT_028c87b8 = 0;
      DAT_028c87b9 = 0;
      _objc_storeWeak(&DAT_028c8698,0);
      local_20 = 1;
    }
    else {
      FUN_00147f7c();
      local_35 = (byte)ppuVar2;
      local_a0 = 0;
      if ((local_19 & 1) != 0) {
        ppuVar3 = local_28;
        FUN_0014e518(local_28,(uint)ppuVar2 & 1);
        local_a0 = (byte)ppuVar3 ^ 1;
      }
      local_36 = local_a0 & 1;
      bVar1 = local_19 & 1;
      local_19 = 0;
      if (bVar1 != 0) {
        local_19 = local_36 ^ 1;
      }
      if (local_19 != 0) {
        FUN_0014e5fc();
      }
      FUN_0013d6c4();
      FUN_0014e67c();
      if (((((DAT_028c87b8 & 1) != 0) || ((local_19 & 1) != 0)) || ((DAT_028c87b9 & 1) != 0)) ||
         (local_37 = false, (local_36 & 1) != 0)) {
        local_37 = (local_35 & 1) != (DAT_028c87e3 & 1);
      }
      local_41 = '\0';
      local_38 = 1;
      if (((DAT_028c87b8 & 1) == (local_19 & 1)) &&
         (local_38 = 1, (DAT_028c87b9 & 1) == (local_36 & 1))) {
        puVar4 = &DAT_028c8698;
        _objc_loadWeakRetained();
        local_41 = '\x01';
        local_40 = puVar4;
        local_38 = 1;
        if (puVar4 == local_18) {
          local_38 = local_37;
        }
      }
      if (local_41 != '\0') {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      local_38 = local_38 & 1;
      DAT_028c87b8 = local_19 & 1;
      DAT_028c87b9 = local_36 & 1;
      _objc_storeWeak(&DAT_028c8698,local_18);
      DAT_028c87e3 = local_35 & 1;
      if ((local_38 & 1) == 0) {
        local_20 = 1;
      }
      else {
        _objc_initWeak(auStack_50,local_18);
        puVar4 = PTR___dispatch_main_q_02578680;
        local_51 = local_19 & 1;
        local_52 = local_36 & 1;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_80 = PTR___NSConcreteStackBlock_02578660;
        local_78 = 0xc2000000;
        local_74 = 0;
        local_70 = FUN_0014e7e0;
        local_68 = &DAT_0257a5b8;
        _objc_copyWeak(auStack_60,auStack_50);
        local_58 = local_51 & 1;
        local_57 = local_52 & 1;
        _dispatch_async(puVar4,&local_80);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_50);
        local_20 = 0;
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

