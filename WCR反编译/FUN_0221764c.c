// FUN_0221764c @ 0221764c

void FUN_0221764c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  void *aBlock_00;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 local_a0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  code *local_38;
  undefined *local_30;
  
  uVar5 = *(undefined8 *)
           (unaff_x20 +
           _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::
           layoutModel);
  _swift_retain(uVar5);
  FUN_02210090(0);
  _swift_release(uVar5);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  lVar2 = unaff_x20;
  FUN_02222960(unaff_x20,local_a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_02222ae0(lVar2,local_a0);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_opt_self();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar4 = &DAT_0258eb08;
  _swift_allocObject();
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_38 = FUN_0221a42c;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0x42000000;
  local_4c = 0;
  local_48 = FUN_021ae198;
  local_40 = &DAT_0258eb20;
  local_30 = puVar4;
  aBlock = __Block_copy(&local_58);
  _swift_release(local_30);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar4 = &DAT_0258eb58;
  _swift_allocObject(&DAT_0258eb58,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  local_68 = FUN_0221a4d4;
  local_88 = puVar1;
  local_80 = 0x42000000;
  local_7c = 0;
  local_78 = FUN_021ae4cc;
  local_70 = &DAT_0258eb70;
  local_60 = puVar4;
  aBlock_00 = __Block_copy(&local_88);
  _swift_release(local_60);
  FUN_02221ee0(DAT_02323d40,puVar3,local_a0,aBlock,aBlock_00);
  __Block_release(aBlock_00);
  __Block_release(aBlock);
  return;
}

