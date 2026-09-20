// FUN_008fdf34 @ 008fdf34

void FUN_008fdf34(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  byte local_fc;
  long local_d8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined8 local_98;
  byte local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [3];
  undefined8 local_50;
  byte local_41;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar3 = *(long *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  local_41 = 0;
  if (lVar3 == 0) {
    local_d8 = *(long *)(param_1 + 0x28);
    FUN_008fcd74();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_d8;
  }
  else {
    local_d8 = *(long *)(param_1 + 0x20);
  }
  local_41 = lVar3 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_d8;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  FUN_008fe2e4(uVar4,local_38,&cf_m4a,*(byte *)(param_1 + 0x38) & 1);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_68[0] = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = &cf___;
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_fc = 0;
  if (lVar3 != 0) {
    local_80 = local_68[0];
    local_88 = local_70;
    lVar3 = local_38;
    FUN_008fe96c(local_38,local_50,&local_80,&local_88);
    local_fc = (byte)lVar3;
    _objc_storeStrong(local_68,local_80);
    _objc_storeStrong(&local_70,local_88);
  }
  puVar5 = PTR___dispatch_main_q_02578680;
  local_71 = local_fc & 1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68[0];
  local_c8 = PTR___NSConcreteStackBlock_02578660;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_008ff09c;
  local_b0 = &DAT_0257a0f0;
  local_90 = local_71 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar1 = local_70;
  local_a8 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = pcVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = uVar4;
  _dispatch_async(puVar5,&local_c8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

