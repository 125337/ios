// FUN_0105cc24 @ 0105cc24

void FUN_0105cc24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_tikTokResultFromHTMLData_resolve_026ae0d0,local_30,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_50 = lVar1;
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_0105cfb4;
    local_b8 = &DAT_02584a00;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_98 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_b0 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_40;
    local_a8 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_extractTikTokViaWebViewURL_sourc_026ae0e0,uVar7,uVar8,&local_d0);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_98,0);
    local_84 = 0;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0105cf74;
    local_68 = &DAT_0257ca68;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_50;
    local_58 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar1;
    _dispatch_async(puVar2,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_84 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_50,0);
  if (local_84 == 0) {
    local_84 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

