// FUN_0030469c @ 0030469c

void FUN_0030469c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  uint local_5c;
  uint local_50;
  ulong local_40;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = false;
  uVar4 = local_18;
  FUN_0031918c();
  local_50 = 0;
  if ((uVar4 & 1) != 0) {
    local_40 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9ba1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_5c = 1;
    if (local_40 == 0) {
      uVar4 = local_18;
      FUN_0031169c();
      local_5c = (uint)uVar4;
    }
    local_50 = local_5c;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_50 & 1) == 0) {
    (*DAT_028c9ae0)(local_18,local_20,local_28);
  }
  else {
    uVar5 = local_18;
    FUN_003192a4();
    uVar4 = local_18;
    uVar3 = local_20;
    pcVar2 = DAT_028c9ae0;
    if ((uVar5 & 1) == 0) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,&DAT_028c9ba1,puVar6,1);
      (*(code *)PTR__objc_release_02578630)();
      uVar4 = local_18;
      uVar3 = local_20;
      pcVar2 = DAT_028c9ae0;
      FUN_0031245c();
      _objc_retainAutoreleasedReturnValue();
      (*pcVar2)(uVar4,uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*pcVar2)(uVar4,uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

