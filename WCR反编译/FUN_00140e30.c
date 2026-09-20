// FUN_00140e30 @ 00140e30

void FUN_00140e30(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double local_130;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  ulong uVar3;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  _objc_storeStrong(&local_38,param_4);
  uVar3 = local_28;
  (*DAT_028c8708)(local_28,local_30,local_38);
  uVar2 = (uint)uVar3;
  FUN_0014f650();
  if ((uVar2 & 1) == 0) {
    local_48 = 1;
  }
  else {
    uVar3 = local_28;
    FUN_00150124();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    if (uVar3 == 0) {
      local_48 = 1;
    }
    else {
      FUN_0014fff4();
      if (uVar3 == 0) {
        local_48 = 1;
      }
      else {
        uVar4 = uVar3;
        FUN_00150088();
        if ((uVar4 & 1) == 0) {
          FUN_00150468(local_28,local_50);
          dVar5 = (double)NEON_ucvtf(uVar3);
          bVar1 = false;
          if (0.0 < param_1) {
            dVar6 = param_1;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentOffset_0269dd18);
            bVar1 = param_1 * dVar5 - 1.0 <= dVar6;
          }
          uVar3 = local_50;
          if (bVar1) {
            local_130 = param_1 * dVar5 - param_1;
            if (local_130 <= 0.0) {
              local_130 = 0.0;
            }
            uVar7 = 0;
            FUN_0014d384();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,uVar7,uVar3,PTR_s_setContentOffset_animated__0269ddd8,1);
          }
        }
        else {
          FUN_001506f4(local_28,local_50);
          dVar6 = (double)NEON_ucvtf(uVar3);
          dVar5 = param_1 * dVar6;
          bVar1 = false;
          if (0.0 < param_1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentOffset_0269dd18);
            bVar1 = dVar5 - 1.0 <= dVar6;
          }
          if (bVar1) {
            FUN_00150dc4(param_1,local_50,uVar3 - 1,1);
          }
        }
        local_48 = 0;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

