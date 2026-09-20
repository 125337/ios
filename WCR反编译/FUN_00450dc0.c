// FUN_00450dc0 @ 00450dc0

void FUN_00450dc0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) || (uVar2 = local_18, FUN_004504e8(), (uVar2 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_boardEmoticonWraps_026a3c88);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_80 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_80;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar2 = local_18;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_60 = PTR___NSConcreteGlobalBlock_02578658;
    local_58 = 0xd0800000;
    local_54 = 0;
    local_50 = FUN_004519d0;
    local_48 = &DAT_0257ab20;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_30;
    local_40 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_60);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

