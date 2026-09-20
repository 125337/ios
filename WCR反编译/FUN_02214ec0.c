// FUN_02214ec0 @ 02214ec0

void FUN_02214ec0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  void *unaff_x20;
  undefined1 auStack_1c0 [40];
  undefined8 local_198;
  undefined1 *local_190;
  code *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [56];
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [80];
  
  FUN_02219c80();
  puVar1 = &DAT_0258ea68;
  _swift_allocObject();
  _memcpy(puVar1 + 0x10,unaff_x20,0x28);
  puVar2 = &DAT_028c75a0;
  FUN_021c77d4(&DAT_028c75a0,&DAT_0233bdf8);
  puVar3 = &DAT_028c75a8;
  FUN_021c7aac(&DAT_028c75a8,&DAT_0233be00);
  puVar4 = puVar3;
  FUN_02219d54();
  ppuVar5 = &local_178;
  local_178 = puVar3;
  local_170 = puVar4;
  _swift_getOpaqueTypeConformance
            (ppuVar5,
             PTR___s7SwiftUI4ViewPAAE12drawingGroup6opaque9colorModeQrSb_AA014ColorRenderingH0OtFQOMQ_025788a0
             ,1);
  pcVar6 = FUN_02219d4c;
  __s7SwiftUI14GeometryReaderV7contentACyxGxAA0C5ProxyVc_tcfC(FUN_02219d4c,puVar1,puVar2,ppuVar5);
  puVar2 = &DAT_028c75c8;
  local_188 = pcVar6;
  local_180 = puVar1;
  FUN_021c77d4(&DAT_028c75c8,&DAT_0233be10);
  puVar1 = puVar2;
  FUN_02219e54();
  puVar3 = puVar2;
  FUN_02216354();
  puVar4 = puVar2;
  FUN_02216374(puVar2,puVar1);
  puVar7 = auStack_140;
  __s7SwiftUI4ViewPAAE15ignoresSafeArea_5edgesQrAA0eF7RegionsV_AA4EdgeO3SetVtF
            (puVar3,puVar4,puVar2,puVar1);
  FUN_02219ec8(&local_188);
  puVar1 = &DAT_028c75d8;
  FUN_021c77d4(&DAT_028c75d8,&DAT_0233be18);
  puVar2 = puVar1;
  FUN_02219ef0();
  __s7SwiftUI4ViewPAAE16allowsHitTestingyQrSbF(0,puVar1,puVar2);
  FUN_02219f7c();
  __s7SwiftUI5ColorV5clearACvgZ();
  puVar1 = &DAT_028c75e8;
  local_190 = puVar7;
  FUN_021c77d4(&DAT_028c75e8,&DAT_0233be20);
  puVar4 = puVar1;
  FUN_02219fa4();
  puVar3 = PTR___s7SwiftUI5ColorVN_025788b8;
  puVar2 = PTR___s7SwiftUI5ColorVAA4ViewAAWP_025788a8;
  puVar8 = puVar1;
  puVar10 = PTR___s7SwiftUI5ColorVN_025788b8;
  FUN_02216394();
  __s7SwiftUI4ViewPAAE10background_9alignmentQrqd___AA9AlignmentVtAaBRd__lF
            (&local_190,puVar8,puVar10,puVar1,puVar3,puVar4,puVar2);
  FUN_0221a030(&local_190);
  FUN_0221a058(auStack_120);
  uVar9 = *(undefined8 *)((long)unaff_x20 + 0x20);
  _swift_retain();
  local_198 = uVar9;
  FUN_02219c80(unaff_x20,auStack_1c0);
  puVar1 = &DAT_0258ea90;
  _swift_allocObject(&DAT_0258ea90,0x38,7);
  _memcpy(puVar1 + 0x10,unaff_x20,0x28);
  puVar2 = &DAT_028c75f8;
  FUN_021c77d4(&DAT_028c75f8,&DAT_0233be28);
  puVar3 = &DAT_028c7600;
  FUN_021c77d4(&DAT_028c7600,&DAT_0233be30);
  puVar4 = puVar3;
  FUN_0221a0d4();
  puVar8 = puVar4;
  FUN_0221a1d8();
  __s7SwiftUI4ViewPAAE9onReceive_7performQrqd___y6OutputQyd__ct7Combine9PublisherRd__s5NeverO7FailureRtd__lF
            (&local_198,FUN_0221a0cc,puVar1,puVar2,puVar3,puVar4,puVar8);
  _swift_release(puVar1);
  _swift_release(local_198);
  FUN_0221a24c(auStack_100);
  puVar1 = &DAT_028c7628;
  FUN_021c77d4(&DAT_028c7628,&DAT_0233be40);
  puVar2 = puVar1;
  FUN_0221a280();
  FUN_022162ac(auStack_c8,puVar1);
  FUN_0221a2f4(auStack_c8);
  FUN_022162f0(param_1,auStack_78,puVar1,puVar2);
  FUN_0221a2f4(auStack_78);
  return;
}

