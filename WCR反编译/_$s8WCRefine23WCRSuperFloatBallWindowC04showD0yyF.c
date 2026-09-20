// _$s8WCRefine23WCRSuperFloatBallWindowC04showD0yyF @ 021adfdc

void __s8WCRefine23WCRSuperFloatBallWindowC04showD0yyF(void)

{
  undefined *puVar1;
  undefined *puVar2;
  void *aBlock;
  undefined8 unaff_x20;
  undefined8 local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  code *local_38;
  undefined *local_30;
  
  __s8WCRefine23WCRSuperFloatBallWindowC27attachToActiveSceneIfNeededyyF();
  FUN_021a7d0c();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02223100(unaff_x20,local_68,0);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222cc0(0,unaff_x20,local_68);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_021aa990();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_opt_self();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar2 = &DAT_0258d628;
  _swift_allocObject(&DAT_0258d628,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  local_38 = FUN_021c85e0;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0x42000000;
  local_4c = 0;
  local_48 = FUN_021ae198;
  local_40 = &DAT_0258d640;
  local_30 = puVar2;
  aBlock = __Block_copy(&local_58);
  _swift_release(local_30);
  FUN_02221ec0(DAT_02323e88,puVar1,local_68,aBlock);
  __Block_release(aBlock);
  return;
}

