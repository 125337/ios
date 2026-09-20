// FUN_017f8308 @ 017f8308

void FUN_017f8308(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_30;
  local_40 = param_1;
  if (local_38 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_30;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_itemProvider_026b3100);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_017f85f0;
      local_70 = &DAT_025893e8;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_50;
      local_68 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_loadObjectOfClass_completionHand_026b3118,puVar2,&local_88);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      local_44 = 0;
      goto LAB_017f857c;
    }
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_44 = 1;
LAB_017f857c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

