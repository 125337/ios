// FUN_00849810 @ 00849810

void FUN_00849810(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *local_48 [3];
  long local_30;
  undefined *local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    local_28 = (undefined *)0x0;
    lVar1 = local_18;
    FUN_0082fb1c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    while (local_30 != 0) {
      lVar1 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028cd0e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 != 0) {
        _objc_storeStrong(&local_28,local_30);
        break;
      }
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    local_1c = 2;
    _objc_storeStrong(&local_30,0);
    if (local_28 == (undefined *)0x0) {
      local_1c = 1;
    }
    else {
      puVar3 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028cd0e0);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = puVar3;
      FUN_00814d40();
      if (((ulong)puVar3 & 1) == 0) {
        local_1c = 1;
      }
      else {
        puVar3 = local_48[0];
        _objc_getAssociatedObject(local_48[0],&DAT_028cd1d3);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSMapTable_026ce9c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMapTable_026ce9c0,
                     PTR_s_mapTableWithKeyOptions_valueOpti_026a8c58,5,0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_50;
          local_50 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_setAssociatedObject(local_48[0],&DAT_028cd1d3,local_50,1);
        }
        FUN_00827dfc(local_18,local_50);
        _objc_storeStrong(&local_50,0);
        local_1c = 0;
      }
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

