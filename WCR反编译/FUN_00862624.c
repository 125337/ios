// FUN_00862624 @ 00862624

void FUN_00862624(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar2;
  if ((uVar2 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isViewLoaded_0269cde0), (uVar2 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cd4c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      local_38 = 1;
    }
    else {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_60 = PTR___NSConcreteGlobalBlock_02578658;
      local_58 = 0xd0800000;
      local_54 = 0;
      local_50 = FUN_0086290c;
      local_48 = &DAT_0257a9d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_performWithoutAnimation__0269e7e0,&local_60);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

