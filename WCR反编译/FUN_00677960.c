// FUN_00677960 @ 00677960

void FUN_00677960(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  cfstringStruct *local_d0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  long local_40;
  uint local_34;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  plVar4 = &local_30;
  local_30 = 0;
  _objc_storeStrong(plVar4,param_2);
  if ((local_28 == 0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    FUN_00677084();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    bVar1 = (DAT_028cbcd8 & 1) == 0;
    if (bVar1) {
      DAT_028cbcd8 = 1;
    }
    local_34 = (uint)!bVar1;
    _objc_sync_exit(plVar4);
    (*(code *)PTR__objc_release_02578630)(plVar4);
    if (local_34 == 0) {
      lVar5 = local_30;
      FUN_00677d94();
      _objc_retainAutoreleasedReturnValue();
      local_61 = 0;
      local_40 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
      if (lVar5 == 0) {
        local_d0 = &cf_nx_b;
      }
      else {
        local_d0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_nx_b);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = local_d0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58[0] = local_d0;
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      lVar3 = local_28;
      pcVar2 = local_58[0];
      puVar6 = PTR_WCRefineHelper_026ce000;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_00677fa4;
      local_80 = &DAT_0257e868;
      (*(code *)PTR__objc_retain_02578638)();
      lVar5 = local_30;
      local_78 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_b,pcVar2,&cf_Sm,
                 &PTR___NSConcreteGlobalBlock_0257e848,&cf_nx_,&local_98);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(local_58,0);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

