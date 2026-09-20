// _$s8WCRefine22WCRSuperFloatPetPlayerC8setStateyyAC0G0OF @ 02204168

void __s8WCRefine22WCRSuperFloatPetPlayerC8setStateyyAC0G0OF(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::state);
  _swift_beginAccess(puVar1,auStack_38,0x20,0);
  uVar3 = *puVar1;
  _swift_endAccess(auStack_38);
  iVar2 = (int)uVar3 - (int)param_1;
  FUN_02203c28(iVar2,param_1,iVar2 != 0);
  return;
}

