// FUN_021fab84 @ 021fab84

void FUN_021fab84(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 local_c0;
  
  uVar1 = 0;
  FUN_021fcd1c();
  uVar2 = uVar1;
  FUN_021fbf38();
  FUN_02222ca0();
  puVar3 = &DAT_028c72c8;
  FUN_021c77d4(&DAT_028c72c8,&DAT_0233b4f0);
  lVar4 = 3;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF();
  FUN_021fcd7c(PTR__NSFontAttributeName_02578068,lVar4 + 0x20);
  puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  _objc_opt_self();
  dVar8 = param_1 * DAT_02323f38;
  dVar9 = *(double *)PTR__UIFontWeightSemibold_02578160;
  FUN_022238c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  FUN_021fcdb8();
  *(undefined8 *)(lVar4 + 0x40) = uVar6;
  *(undefined **)(lVar4 + 0x28) = puVar5;
  FUN_021fcd7c(PTR__NSForegroundColorAttributeName_02578070,lVar4 + 0x48);
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  _objc_opt_self();
  FUN_02222920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  FUN_021c8144();
  *(undefined8 *)(lVar4 + 0x68) = uVar6;
  *(undefined **)(lVar4 + 0x50) = puVar5;
  FUN_021fcd7c(PTR__NSParagraphStyleAttributeName_02578088,lVar4 + 0x70);
  (*(code *)PTR__objc_retain_02578638)(uVar2);
  *(undefined8 *)(lVar4 + 0x90) = uVar1;
  *(undefined8 *)(lVar4 + 0x78) = uVar2;
  FUN_021b0268(lVar4,puVar3);
  uVar6 = 0;
  FUN_021fce18();
  uVar1 = uVar6;
  FUN_021fceac();
  puVar3 = PTR___sypN_02578b08 + 8;
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC(lVar4,uVar6);
  _swift_bridgeObjectRetain(param_4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRetain(lVar4);
  lVar7 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar4,uVar6,puVar3,uVar1);
  _swift_bridgeObjectRelease(lVar4);
  FUN_02223760(param_3,local_c0,lVar7);
  (*(code *)PTR__objc_release_02578630)(lVar7);
  _swift_bridgeObjectRetain(lVar4);
  lVar7 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar4,uVar6,puVar3,uVar1);
  _swift_bridgeObjectRelease(lVar4);
  FUN_022223a0((param_1 - dVar8) / 2.0,(param_1 - dVar9) / 2.0,dVar8,dVar9,param_3,local_c0,lVar7);
  (*(code *)PTR__objc_release_02578630)(lVar7);
  (*(code *)PTR__objc_release_02578630)(param_3);
  _swift_bridgeObjectRelease(lVar4);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

