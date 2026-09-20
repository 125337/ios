// FUN_0100a74c @ 0100a74c

void FUN_0100a74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  cfstringStruct *local_100;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_60;
  undefined **local_58;
  uint local_4c;
  cfstringStruct *local_48;
  long local_40;
  cfstringStruct *local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_platform_026ad958);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasMedia_026ada58);
  if ((uVar2 & 1) == 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_100 = &cf_g1Y_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_100;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_finishProgressToastSuccess_text__026ad9e0,0,
               local_48);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,local_48);
    }
    local_4c = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,*(undefined8 *)(param_1 + 0x40),PTR_s_updateProgressToast__026ad910);
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
      if (lVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_sendText_toUsr__026ad9f8,
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
    }
    uVar2 = local_30;
    ppuVar7 = &local_a8;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_0100abc8;
    local_90 = &DAT_02584220;
    local_70 = *(undefined8 *)(param_1 + 0x40);
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = *(byte *)(param_1 + 0x51) & 1;
    local_68 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    local_80 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar6;
    _objc_retainBlock();
    uVar2 = local_30;
    bVar1 = (*(byte *)(param_1 + 0x52) & 1) != 0;
    local_58 = ppuVar7;
    if (bVar1) {
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      local_e0 = PTR___NSConcreteStackBlock_02578660;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_0100ac24;
      local_c8 = &DAT_02584250;
      local_b0 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar7 = local_58;
      local_c0 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_skipIncomingOverLimitMessageForR_026ada68,uVar2,&local_e0);
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_c0,0);
    }
    else {
      (*(code *)ppuVar7[2])();
    }
    local_4c = (uint)!bVar1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_88,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

