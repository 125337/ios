// FUN_005cde00 @ 005cde00

void FUN_005cde00(undefined8 param_1,byte param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  byte local_60;
  long local_58;
  long local_50;
  uint local_48;
  long local_38;
  byte local_29;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar3 = local_28;
  local_29 = param_2;
  FUN_005b91f8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_48 = 1;
  }
  else {
    FUN_005bed60();
    _objc_retainAutoreleasedReturnValue();
    local_58 = 0;
    local_50 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar3);
    lVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,local_38)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_58;
    local_58 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (local_58 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectForKey__0269d700,local_38);
    }
    _objc_sync_exit(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar5 = PTR___dispatch_main_q_02578680;
    bVar1 = local_58 != 0;
    if (bVar1) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_58;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_005ce130;
      local_78 = &DAT_02579420;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_28;
      local_70 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar2;
      local_60 = local_29 & 1;
      _dispatch_async(puVar5,&local_90);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_70,0);
    }
    local_48 = (uint)!bVar1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

