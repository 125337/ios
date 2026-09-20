// FUN_0102da94 @ 0102da94

void FUN_0102da94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_54;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = *(long *)(param_1 + 0x38);
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_contentLengthFromResponse__026ade80,local_38);
  local_50 = lVar1;
  if (lVar1 < 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_probeRequestForURL__026ade78,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_bytes_0_1023,&cf_Range);
    puVar3 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_0102dd68;
    local_80 = &DAT_02584770;
    local_68 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_78 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    puVar6 = puVar3;
    local_70 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_dataTaskWithRequest_completionHa_026a5f60,uVar2,&local_98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setDataSize__026add88,lVar1);
    _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0x28));
  }
  local_54 = (uint)(lVar1 >= 1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

