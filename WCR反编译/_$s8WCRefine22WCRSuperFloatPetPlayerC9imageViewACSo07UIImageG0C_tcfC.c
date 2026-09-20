// _$s8WCRefine22WCRSuperFloatPetPlayerC9imageViewACSo07UIImageG0C_tcfc @ 021fe404

undefined1 *
__s8WCRefine22WCRSuperFloatPetPlayerC9imageViewACSo07UIImageG0C_tcfc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 local_48;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::atlas) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::cellW) = 0xc0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::cellH) = 0xd0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::columns) = 8;
  lVar1 = WCRSuperFloatPetPlayer::specs;
  puVar2 = &DAT_028c7340;
  local_20 = param_1;
  FUN_021c77d4(&DAT_028c7340,&DAT_0233b690);
  uVar3 = 0;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,puVar2);
  uVar4 = uVar3;
  FUN_021fd890();
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC
            (uVar3,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,&DAT_0258e780,uVar4);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = WCRSuperFloatPetPlayer::frameCache;
  puVar2 = &DAT_028c7358;
  FUN_021c77d4(&DAT_028c7358,&DAT_0233b698);
  uVar3 = 0;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,puVar2);
  uVar4 = 0;
  FUN_021c8238(0);
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC
            (uVar3,PTR___sSSN_02578938,uVar4,PTR___sSSSHsWP_02578940);
  uVar4 = 0;
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::state) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::frameIndex) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::timer) = 0;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatPetPlayer::paused) = 0;
  lVar1 = WCRSuperFloatPetPlayer::displayName;
  pcVar5 = "";
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("",0,1);
  *(undefined8 *)(unaff_x20 + lVar1) = pcVar5;
  ((undefined8 *)(unaff_x20 + lVar1))[1] = uVar4;
  (*(code *)PTR__objc_retain_02578638)(param_1);
  *(undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::imageView) = param_1;
  puVar6 = local_30;
  _objc_msgSendSuper2(puVar6,PTR_s_init_026ca6a8);
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(param_1);
  FUN_02222ec0(param_1,local_48,1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_retain_02578638)(param_1);
  FUN_02222e60(param_1,local_48,0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  return puVar6;
}

