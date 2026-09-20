// FUN_021d2190 @ 021d2190

void FUN_021d2190(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::onSelect);
  uVar4 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::onDismiss);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = WCRSuperFloatFanMenuView::actionButtons;
  FUN_021ce938();
  uVar5 = 0;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,uVar4);
  uVar4 = 0;
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = WCRSuperFloatFanMenuView::actions;
  FUN_021c9d78(0);
  uVar5 = 0;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,uVar4);
  uVar4 = 0;
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = WCRSuperFloatFanMenuView::finalCenters;
  FUN_021cc950(0);
  uVar5 = 0;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,uVar4);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex) = 0xffffffffffffffff;
  *(undefined1 *)(unaff_x20 + WCRSuperFloatFanMenuView::didFireSelect) = 0;
  lVar2 = WCRSuperFloatFanMenuView::closeButton;
  uVar4 = 1;
  FUN_021cee84();
  uVar5 = 0;
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = WCRSuperFloatFanMenuView::previewContainer;
  FUN_021c7714();
  FUN_021a087c();
  uVar4 = 0;
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = WCRSuperFloatFanMenuView::previewIconView;
  FUN_021c7774();
  FUN_021a0914();
  uVar5 = 0;
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = WCRSuperFloatFanMenuView::previewTitleLabel;
  FUN_021ceffc();
  FUN_021cf05c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = WCRSuperFloatFanMenuView::config;
  puVar6 = &DAT_028c6c20;
  FUN_021c77d4(&DAT_028c6c20,&DAT_0233a7e0);
  uVar4 = 0;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,puVar6);
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::origin);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize) = 0x404a000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::slotFootprint) = 0x404a000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::titleBandHeight) = 0;
  lVar2 = WCRSuperFloatFanMenuView::impactSoft;
  FUN_021c9b0c();
  uVar4 = 3;
  FUN_021bdc4c();
  uVar5 = 1;
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = WCRSuperFloatFanMenuView::impactMedium;
  FUN_021bdc4c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = WCRSuperFloatFanMenuView::impactHeavy;
  uVar4 = 2;
  FUN_021bdc4c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::gridCellSize);
  *puVar1 = 0x4050800000000000;
  puVar1[1] = 0x4052000000000000;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::gridPanelView) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::gridScrollView) = 0;
  *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::contactBadgeTag) = 0x77636264;
  pcVar7 = "init(coder:) has not been implemented";
  uVar4 = 0x25;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("init(coder:) has not been implemented",0x25,1);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,pcVar7,uVar4,"WCRefine/WCRSuperFloatFanMenuView.swift",0x27,2,0x6c,
             0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x21d25b4);
  (*pcVar3)();
}

