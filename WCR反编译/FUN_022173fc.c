// FUN_022173fc @ 022173fc

void FUN_022173fc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  code *local_38;
  undefined *local_30;
  
  FUN_022175a8();
  uVar4 = *(undefined8 *)
           (unaff_x20 +
           _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::
           layoutModel);
  _swift_retain(uVar4);
  FUN_02210090(1);
  _swift_release(uVar4);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02223100(unaff_x20,local_68,0);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  lVar1 = unaff_x20;
  FUN_02222960(unaff_x20,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_02222ae0(lVar1,local_68);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_opt_self();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar3 = &DAT_0258eab8;
  _swift_allocObject(&DAT_0258eab8,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  local_38 = FUN_0221a384;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0x42000000;
  local_4c = 0;
  local_48 = FUN_021ae198;
  local_40 = &DAT_0258ead0;
  local_30 = puVar3;
  aBlock = __Block_copy(&local_58);
  _swift_release(local_30);
  FUN_02221ec0(DAT_02323c70,puVar2,local_68,aBlock);
  __Block_release(aBlock);
  return;
}

