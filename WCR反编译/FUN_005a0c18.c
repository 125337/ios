// FUN_005a0c18 @ 005a0c18

void FUN_005a0c18(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8 [3];
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  uVar3 = local_30;
  local_68 = &local_58;
  local_58 = 0;
  local_48 = 0x20000000;
  local_44 = 0x20;
  local_40 = 0;
  ppuVar1 = &local_90;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_005a0f00;
  local_78 = &DAT_0257e1a8;
  local_50 = local_68;
  local_38 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar3;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x20);
  local_60 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  ppuVar1 = local_60;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  local_d8 = PTR___NSConcreteStackBlock_02578660;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = FUN_005a13b0;
  local_c0 = &DAT_0257ddf8;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8[0] = ppuVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_b8 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = uVar4;
  FUN_005a116c(uVar5,&local_d8);
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(local_a8,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_70,0);
  __Block_object_dispose(&local_58,8);
  _objc_storeStrong(&local_30,0);
  return;
}

