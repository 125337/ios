// FUN_01c19800 @ 01c19800

void FUN_01c19800(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_totalCacheStats_026c1368);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_userCount);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_itemCount);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_mediaArchiveCount);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_38;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_formattedCacheSize_026c1370);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S_MR_X__);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___dispatch_main_q_02578680;
  local_68 = puVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = uVar3;
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  puVar2 = local_68;
  local_80 = local_48;
  local_78 = local_50;
  local_70 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = puVar2;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_90);
  _objc_destroyWeak(auStack_88);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

