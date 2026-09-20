// FUN_02203c28 @ 02203c28

void FUN_02203c28(undefined8 param_1,uint param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 local_250;
  undefined1 auStack_180 [24];
  undefined8 local_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  long local_f8;
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined1 auStack_50 [24];
  
  local_130 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
  _swift_beginAccess(puVar1,auStack_50,0x20,0);
  uVar3 = *puVar1;
  uVar4 = param_1;
  local_70 = param_1;
  FUN_021fd890();
  __sSDyq_Sgxcig(&local_68,&local_70,uVar3,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                 &DAT_0258e780);
  _swift_endAccess(auStack_50);
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  FUN_021fe238(&local_88);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if (local_58 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
    _swift_beginAccess(puVar1,auStack_a0,0x20,0);
    local_c0 = 0;
    __sSDyq_Sgxcig(&local_b8,&local_c0,*puVar1,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                   &DAT_0258e780,uVar4);
    _swift_endAccess(auStack_a0);
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_c8 = local_a8;
    bVar2 = local_a8 != 0;
    FUN_021fe238(&local_d8);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    bVar2 = true;
  }
  if (bVar2) {
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
    _swift_beginAccess(puVar1,auStack_f0,0x20,0);
    local_110 = param_1;
    __sSDyq_Sgxcig(&local_108,&local_110,*puVar1,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                   &DAT_0258e780,uVar4);
    _swift_endAccess(auStack_f0);
    local_128 = local_108;
    local_120 = local_100;
    local_118 = local_f8;
    FUN_021fe238(&local_128);
    local_250 = param_1;
    if (local_f8 == 0) {
      local_250 = 0;
    }
    local_130 = local_250;
    if ((param_2 & 1) == 0) {
      local_168 = local_250;
      puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::state);
      _swift_beginAccess(puVar1,auStack_180,0x20,0);
      uVar4 = *puVar1;
      _swift_endAccess(auStack_180);
      if ((int)local_168 == (int)uVar4) {
        return;
      }
    }
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::state);
    _swift_beginAccess();
    *puVar1 = local_250;
    _swift_endAccess(auStack_148);
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::frameIndex);
    _swift_beginAccess(puVar1,auStack_160,0x21,0);
    *puVar1 = 0;
    _swift_endAccess(auStack_160);
    FUN_02204248();
    FUN_022043fc();
  }
  return;
}

