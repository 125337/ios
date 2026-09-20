// FUN_002a00a0 @ 002a00a0

ulong FUN_002a00a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong local_208;
  ulong local_200;
  ulong local_138;
  ulong local_68;
  ulong local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong local_28;
  
  local_60 = 0;
  local_58 = param_5;
  local_50 = param_6;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _objc_storeStrong(&local_60,param_7);
  uVar2 = local_60;
  FUN_002ae1e8();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  local_208 = local_60;
  FUN_002adfd4();
  if ((local_208 != 0) && (uVar2 != 0)) {
    uVar3 = local_208;
    _CGRectIsEmpty(local_48,uStack_40,local_38,uStack_30);
    uVar1 = (uint)uVar3;
    if ((uVar3 & 1) == 0) {
      dVar4 = local_48;
      _CGRectGetWidth(local_48,uStack_40,local_38,uStack_30);
      dVar7 = local_58;
      dVar8 = (double)NEON_ucvtf(local_208);
      if (0.0 < dVar4 / dVar8) {
        dVar5 = local_48;
        _CGRectGetMinX(local_48,uStack_40,local_38,uStack_30);
        dVar6 = local_48;
        _CGRectGetMaxX(local_48,uStack_40,local_38,uStack_30);
        FUN_002adba4(dVar7,dVar5 + 1.0,dVar6 - 1.0);
        dVar5 = local_48;
        _CGRectGetMinX(local_48,uStack_40,local_38,uStack_30);
        local_200 = (ulong)((dVar7 - dVar5) / (dVar4 / dVar8));
        local_208 = local_208 - 1;
        if ((long)local_200 < 1) {
          local_200 = 0;
        }
        if ((long)local_200 <= (long)local_208) {
          local_208 = local_200;
        }
        local_138 = local_208;
        FUN_002ae49c();
        if ((uVar1 & 1) != 0) {
          uVar3 = local_60;
          FUN_002ae0dc();
          if (local_208 == uVar3) {
            local_28 = 0x7fffffffffffffff;
            goto LAB_002a04ec;
          }
          if (uVar3 < local_208) {
            local_138 = local_208 - 1;
          }
        }
        if (((long)local_138 < 0) || (uVar2 <= local_138)) {
          local_28 = 0x7fffffffffffffff;
        }
        else {
          uVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_138);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_28 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
      }
      else {
        local_28 = 0x7fffffffffffffff;
      }
      goto LAB_002a04ec;
    }
  }
  local_28 = 0x7fffffffffffffff;
LAB_002a04ec:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  return local_28;
}

