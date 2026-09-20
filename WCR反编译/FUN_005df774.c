// FUN_005df774 @ 005df774

void FUN_005df774(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte local_45;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_005e6d48();
  uVar2 = local_18;
  FUN_005e6e84();
  if (((uVar1 & 1) == 0) && ((uVar2 & 1) == 0)) {
    (*DAT_028cb828)(local_18,local_20,local_28);
  }
  else {
    local_45 = 0;
    if ((uVar1 & 1) != 0) {
      lVar3 = local_28;
      FUN_005e0718(local_28,0,0);
      local_45 = (byte)lVar3;
    }
    if (((local_45 & 1) == 0) && ((uVar2 & 1) != 0)) {
      lVar3 = local_28;
      FUN_005e11dc();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_005e0bf0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_45 = lVar5 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    if ((local_45 & 1) == 0) {
      (*DAT_028cb828)(local_18,local_20,local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

