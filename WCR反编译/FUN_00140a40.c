// FUN_00140a40 @ 00140a40

void FUN_00140a40(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  long local_68;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  ulong uVar2;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  _objc_storeStrong(&local_38,param_4);
  uVar2 = local_28;
  (*DAT_028c8700)(local_28,local_30,local_38);
  uVar1 = (uint)uVar2;
  FUN_0014f650();
  if ((uVar1 & 1) == 0) {
    local_48 = 1;
    goto LAB_00140dec;
  }
  uVar2 = local_28;
  FUN_00150124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_50 = uVar2;
  FUN_00150914();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar3;
  if ((local_50 == 0) || (uVar3 == 0)) {
    local_48 = 1;
  }
  else {
    FUN_0014fff4();
    if (uVar3 == 0) {
      local_48 = 1;
    }
    else {
      uVar2 = uVar3;
      FUN_00150088();
      if ((uVar2 & 1) == 0) {
        FUN_00150468(local_28,local_50);
        if (1.0 <= param_1) {
          dVar5 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentOffset_0269dd18);
          local_68 = (long)(dVar5 / param_1 + 0.5);
          FUN_00150d58(local_68,uVar3);
          goto LAB_00140da4;
        }
        local_48 = 1;
      }
      else {
        FUN_001506f4(local_28,local_50);
        dVar5 = 1.0;
        if (1.0 <= param_1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentOffset_0269dd18);
          dVar5 = dVar5 / param_1 + 0.5;
          local_68 = (long)dVar5;
          FUN_00150d58(local_68,uVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentOffset_0269dd18);
          uVar2 = local_50;
          uVar6 = 0x3fe0000000000000;
          if (0.5 < dVar5) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentOffset_0269dd18);
            uVar4 = 0;
            FUN_0014d384();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,uVar6,uVar2,PTR_s_setContentOffset_animated__0269ddd8,0);
          }
LAB_00140da4:
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCurrentPage__0269f4f0,local_68);
          local_48 = 0;
        }
        else {
          local_48 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_00140dec:
  _objc_storeStrong(&local_38,0);
  return;
}

