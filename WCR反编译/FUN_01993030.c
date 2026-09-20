// FUN_01993030 @ 01993030

void FUN_01993030(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar4 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__b0_);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_01993270;
  local_30 = &DAT_025810b0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  local_70 = puVar1;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_019932ec;
  local_58 = &DAT_025810b0;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_byvh,puVar3,&cf_Smy,
             &local_48,&cf_bvhvU_,&local_70,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_28);
  return;
}

