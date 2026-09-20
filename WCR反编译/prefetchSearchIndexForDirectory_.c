// prefetchSearchIndexForDirectory: @ 015b775c

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackStore::prefetchSearchIndexForDirectory_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ID local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  byte local_41;
  ID local_40;
  ID local_38;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isUIAccessActive_026b0c08);
  if ((IVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    local_41 = 0;
    if (IVar3 == 0) {
      local_a0 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rootAbsolutePath_026ae1f8);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_a0;
    }
    else {
      local_a0 = local_28;
    }
    local_41 = IVar3 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_a0;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    lVar1 = DAT_028e3ad8;
    if (IVar3 == 0) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(lVar1);
      lVar4 = DAT_028e3ad8;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3ad8,PTR_s_objectForKeyedSubscript__0269d098,local_38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      local_2c = (uint)(lVar4 != 0);
      _objc_sync_exit(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      if (local_2c == 0) {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
        IVar3 = local_38;
        uVar2 = DAT_028e3ae0;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_015b7a44;
        local_80 = &DAT_02580e60;
        local_68 = local_18;
        local_70 = IVar5;
        local_60 = IVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = IVar3;
        _dispatch_async(uVar2,&local_98);
        _objc_storeStrong(&local_78,0);
        local_2c = 0;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

