// FUN_0025bbb8 @ 0025bbb8

void FUN_0025bbb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38 [3];
  long local_20;
  long local_18;
  
  puVar4 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_ungroupedDisplayName_026a1040);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__0_);
  _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_0025bdc0;
  local_40 = &DAT_025794e0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nzz_g_,puVar2,&cf_nzz,
             &local_58,&cf_Sm,0,uVar5,uVar6,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(local_38,0);
  return;
}

