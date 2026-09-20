// FUN_0033fc64 @ 0033fc64

byte FUN_0033fc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_0033a150();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_48 = 1;
    goto LAB_0033ffc4;
  }
  uVar3 = local_28;
  FUN_0034004c(local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar3 & 1) == 0) {
LAB_0033fe00:
    if (((DAT_028c9ee1 & 1) == 0) && (FUN_0033e5dc(), (uVar3 & 1) == 0)) {
      uVar3 = local_20;
      FUN_0033f024();
      if ((((uVar3 & 1) == 0) && (uVar3 = local_38, FUN_0033f024(), (uVar3 & 1) == 0)) &&
         (uVar3 = local_30, FUN_0033f024(), (uVar3 & 1) == 0)) {
        uVar3 = local_20;
        FUN_003405b8();
        if (((uVar3 & 1) == 0) && (uVar3 = local_38, FUN_003405b8(), (uVar3 & 1) == 0)) {
          puVar4 = &DAT_028c9ed8;
          _objc_loadWeakRetained();
          local_58 = puVar4;
          if ((puVar4 == (undefined *)0x0) ||
             ((FUN_0033f024(), ((ulong)puVar4 & 1) == 0 ||
              (uVar3 = local_20, FUN_00340650(), (uVar3 & 1) == 0)))) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
          local_48 = 1;
          _objc_storeStrong(&local_58,0);
        }
        else {
          local_11 = 1;
          local_48 = 1;
        }
      }
      else {
        local_11 = 1;
        local_48 = 1;
      }
    }
    else {
      local_11 = 1;
      local_48 = 1;
    }
  }
  else {
    uVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    uVar3 = 0;
    if ((uVar5 == 0) || (uVar3 = local_50, FUN_003402cc(uVar5), (uVar3 & 1) == 0))
    goto LAB_0033fe00;
    local_11 = 0;
    local_48 = 1;
  }
  _objc_storeStrong(&local_50,0);
LAB_0033ffc4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

