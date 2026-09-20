// FUN_00828294 @ 00828294

void FUN_00828294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_3);
  if ((local_30 == (undefined *)0x0) || (local_38 == (undefined *)0x0)) {
    local_3c = 1;
  }
  else {
    puVar1 = local_38;
    _objc_getAssociatedObject(local_38,&DAT_028cd1d3);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMapTable_026ce9c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMapTable_026ce9c0,
                 PTR_s_mapTableWithKeyOptions_valueOpti_026a8c58,5,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_48;
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_setAssociatedObject(local_38,&DAT_028cd1d3,local_48,1);
    }
    FUN_00827dfc(local_30,local_48);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isViewLoaded_0269cde0);
    puVar1 = local_30;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      FUN_00827aa4();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar2 = local_48;
      if (((ulong)puVar1 & 1) == 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKey__0269e048);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (puVar2 != (undefined *)0x0) {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_48;
          uVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKey__0269e048);
          _objc_retainAutoreleasedReturnValue();
          FUN_0082eba0(uVar3);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          puVar1 = local_48;
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeObjectForKey__0269d700);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
      }
      else {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        FUN_00827dfc();
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundView_026a0320);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 != puVar1) {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundView_026a0320);
      _objc_retainAutoreleasedReturnValue();
      FUN_00827dfc();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

