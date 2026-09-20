// _$s8WCRefine22WCRSuperFloatPetPlayerC8hasStateySbAC0G0OF @ 02202a3c

bool __s8WCRefine22WCRSuperFloatPetPlayerC8hasStateySbAC0G0OF(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
  _swift_beginAccess(puVar1,auStack_38,0x20,0);
  uVar2 = *puVar1;
  local_58 = param_1;
  FUN_021fd890();
  __sSDyq_Sgxcig(&local_50,&local_58,uVar2,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                 &DAT_0258e780,param_1);
  _swift_endAccess(auStack_38);
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  FUN_021fe238(&local_70);
  return local_40 != 0;
}

