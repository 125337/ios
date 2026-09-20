// FUN_006f24a4 @ 006f24a4

void FUN_006f24a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48 [3];
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_20);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVURLAsset_026ce330,PTR_s_URLAssetWithURL_options__026a1748,
               local_20,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_006f2650;
    local_50 = &DAT_0257f058;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    local_30 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = uVar2;
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1,0,&local_68);
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

