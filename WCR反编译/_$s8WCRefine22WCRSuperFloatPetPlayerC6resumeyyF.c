// _$s8WCRefine22WCRSuperFloatPetPlayerC6resumeyyF @ 02204d74

/* WARNING: Removing unreachable block (ram,0x02204e9c) */

void __s8WCRefine22WCRSuperFloatPetPlayerC6resumeyyF(void)

{
  byte *pbVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long unaff_x20;
  uint local_fc;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  long local_80;
  long local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatPetPlayer::paused);
  _swift_beginAccess(pbVar1,auStack_40,0x20,0);
  bVar4 = *pbVar1;
  _swift_endAccess(auStack_40);
  if ((bVar4 & 1) != 0) {
    puVar10 = (undefined1 *)(unaff_x20 + WCRSuperFloatPetPlayer::paused);
    _swift_beginAccess(puVar10,auStack_58,0x21);
    *puVar10 = 0;
    _swift_endAccess(auStack_58);
    plVar2 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::atlas);
    _swift_beginAccess(plVar2,auStack_70,0x20,0);
    lVar5 = *plVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_70);
    local_78 = 0;
    local_80 = lVar5;
    if (lVar5 == 0) {
      FUN_021fe998(&local_80);
      local_fc = 1;
    }
    else {
      FUN_02205acc(&local_80,&local_a0);
      lVar5 = local_78;
      if (local_78 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
        FUN_02205a88(&local_80);
        local_fc = 0;
      }
      else {
        uVar6 = 0;
        FUN_02205b08(0);
        uVar8 = local_a0;
        uVar7 = uVar6;
        FUN_02205b9c();
        __s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ(uVar8,lVar5,uVar6,uVar7);
        local_fc = (uint)uVar8;
        (*(code *)PTR__objc_release_02578630)(lVar5);
        (*(code *)PTR__objc_release_02578630)(local_a0);
        FUN_021fe998(&local_80);
      }
    }
    if ((local_fc & 1) == 0) {
      puVar3 = (ulong *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
      puVar10 = auStack_98;
      _swift_beginAccess(puVar3,puVar10,0x20,0);
      uVar9 = *puVar3;
      _swift_bridgeObjectRetain();
      _swift_endAccess(puVar10);
      FUN_021fd890();
      uVar11 = uVar9;
      __sSD7isEmptySbvg(uVar9,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,&DAT_0258e780,puVar10);
      _swift_bridgeObjectRelease(uVar9);
      if ((uVar11 & 1) == 0) {
        FUN_02204248();
        FUN_022043fc();
      }
    }
  }
  return;
}

