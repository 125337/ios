// confirmReplaceRemark:existingItem:sourceInLibrary:onConfirm:onCancel: @ 010a839c

/* Function Stack Size: 0x34 bytes */

void WCRefineMessageRepositoryStore::
     confirmReplaceRemark_existingItem_sourceInLibrary_onConfirm_onCancel_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7,ID param_8,undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_010a6348();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar1 = local_38;
  FUN_010a6348();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_010a8724();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_N__gYl0_);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((local_41 & 1) != 0) {
    puVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_stringByAppendingString__0269d398,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_68;
    local_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  dVar6 = _dispatch_time(0,300000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_68;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_010a8870;
  local_88 = &DAT_02584a90;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_50;
  local_80 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_58;
  local_78 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar1;
  _dispatch_after(dVar6,puVar4,&local_a0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

