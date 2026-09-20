// _$s8WCRefine22WCRSuperFloatPetPlayerC11hasDragDownSbvg @ 021fe2c4

bool __s8WCRefine22WCRSuperFloatPetPlayerC11hasDragDownSbvg(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
  puVar2 = puVar1;
  _swift_beginAccess(puVar1,auStack_30,0x20,0);
  uVar3 = *puVar1;
  local_50 = 5;
  FUN_021fd890();
  __sSDyq_Sgxcig(&local_48,&local_50,uVar3,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                 &DAT_0258e780,puVar2);
  _swift_endAccess(auStack_30);
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  FUN_021fe238(&local_68);
  return local_38 != 0;
}

