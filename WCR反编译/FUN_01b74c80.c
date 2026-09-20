// FUN_01b74c80 @ 01b74c80

void FUN_01b74c80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar2 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_wcr_le_share___)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_40,1,0);
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_stringByAppendingPathComponent__026cab30,*(undefined8 *)(param_1 + 0x20)
            );
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_exportRelativePaths_toZipPath_er_026bfb50
             ,*(undefined8 *)(param_1 + 0x28),puVar4,0);
  puVar4 = PTR___dispatch_main_q_02578680;
  local_49 = (byte)puVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_38;
  local_50 = local_49 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_48;
  local_78 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_40;
  local_70 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = puVar2;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  local_60 = uVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar7;
  _dispatch_async(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

