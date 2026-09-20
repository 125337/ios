// FUN_00853910 @ 00853910

void FUN_00853910(undefined8 param_1,byte param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_38 [3];
  uint local_20;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_19 = param_2;
  if (local_18 == 0) {
    local_20 = 1;
  }
  else if ((param_2 & 1) == 0) {
    uVar5 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f48e0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar5 != 0;
    local_38[0] = uVar5;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_boolValue_026ca540);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,uVar5 & 0xffffffff);
      _objc_setAssociatedObject(local_18,DAT_026f48e0,0,1);
    }
    local_20 = (uint)!bVar1;
    _objc_storeStrong(local_38,0);
  }
  else {
    uVar3 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f48e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar5 = local_18;
    uVar2 = DAT_026f48e0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (uVar3 == 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_numberWithBool__0269ce60,uVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,uVar2,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,1);
    local_20 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

