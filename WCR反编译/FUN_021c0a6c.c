// FUN_021c0a6c @ 021c0a6c

void FUN_021c0a6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_f8;
  
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222060(unaff_x20,local_f8);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_021b0958(param_1,param_2);
  dVar8 = 0.0;
  if (0.0 < param_1) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_f8);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021b0994(dVar8,param_1);
    dVar9 = 0.0;
    if (0.0 < dVar8) {
      puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      _objc_opt_self();
      FUN_02223780();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = &DAT_028c6e78;
      FUN_021c77d4(&DAT_028c6e78,&DAT_0233a838);
      puVar3 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      __ss27_allocateUninitializedArrayySayxG_BptBwlF();
      pcVar4 = "x";
      uVar6 = 1;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("x",1,1);
      puVar3[4] = pcVar4;
      puVar3[5] = uVar6;
      uVar6 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_022220c0(uVar6,local_f8);
      dVar10 = dVar9;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222060(unaff_x20,local_f8);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      FUN_021b0958(dVar10,dVar8);
      uVar6 = 1;
      puVar3[6] = dVar9 / dVar10;
      pcVar4 = "y";
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("y",1,1);
      puVar3[7] = pcVar4;
      puVar3[8] = uVar6;
      uVar6 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_022220c0(uVar6,local_f8);
      dVar8 = dVar10;
      dVar9 = dVar10;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222060(unaff_x20,local_f8);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      FUN_021b0994(dVar8,dVar9,param_3,param_4);
      puVar3[9] = dVar10 / dVar8;
      FUN_021b0268(puVar3,puVar2);
      __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
      puVar5 = puVar3;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease();
      FUN_021a2f80();
      uVar7 = *puVar3;
      uVar6 = puVar3[1];
      _swift_bridgeObjectRetain();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      FUN_022232e0(puVar1,local_f8,puVar5,uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      _swift_unknownObjectRelease(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  return;
}

