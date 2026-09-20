// FUN_021dc60c @ 021dc60c

void FUN_021dc60c(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  void *aBlock_00;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 local_e8;
  undefined8 local_c8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  
  local_40 = (code *)0x0;
  local_38 = (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = &DAT_0258df18;
  _swift_allocObject(&DAT_0258df18,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  local_40 = FUN_021f20b4;
  local_38 = puVar2;
  if ((param_1 & 1) == 0) {
    FUN_021e4a98(unaff_x20);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::previewIconView);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02223120(uVar5,local_e8);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::previewTitleLabel);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02223560(uVar5,local_e8,0);
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_opt_self();
    puVar4 = puVar3;
    FUN_021cf8c4();
    if (((ulong)puVar4 & 1) == 0) {
      local_c8 = DAT_02323f10;
    }
    else {
      local_c8 = DAT_02323c68;
    }
    _swift_retain(puVar2);
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_50 = FUN_021f20b4;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0x42000000;
    local_64 = 0;
    local_60 = FUN_021ae198;
    local_58 = &DAT_0258df30;
    local_48 = puVar2;
    aBlock = __Block_copy(&local_70);
    _swift_release(local_48);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    puVar4 = &DAT_0258df68;
    _swift_allocObject(&DAT_0258df68,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    local_80 = FUN_021f215c;
    local_a0 = puVar1;
    local_98 = 0x42000000;
    local_94 = 0;
    local_90 = FUN_021ae4cc;
    local_88 = &DAT_0258df80;
    local_78 = puVar4;
    aBlock_00 = __Block_copy(&local_a0);
    _swift_release(local_78);
    FUN_02221ee0(local_c8,puVar3,local_e8,aBlock,aBlock_00);
    __Block_release(aBlock_00);
    __Block_release(aBlock);
  }
  _swift_release(puVar2);
  return;
}

