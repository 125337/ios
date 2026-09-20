// FUN_0078a9a0 @ 0078a9a0

void FUN_0078a9a0(undefined8 param_1,byte param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  undefined **local_38;
  uint local_30;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar3 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
  lVar2 = local_18;
  if (lVar3 == 0) {
    local_30 = 1;
  }
  else {
    ppuVar4 = &local_60;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0078ab70;
    local_48 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar2;
    _objc_retainBlock();
    bVar1 = (local_19 & 1) != 0;
    local_38 = ppuVar4;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,0,DAT_023242d0,PTR__OBJC_CLASS___UIView_026cdfd8,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,&DAT_00020004,ppuVar4,0);
    }
    else {
      (*(code *)ppuVar4[2])();
    }
    local_30 = (uint)!bVar1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

