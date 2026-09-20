// FUN_00f50ee8 @ 00f50ee8

void FUN_00f50ee8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar1 = local_20;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00f51060;
    local_60 = &DAT_025830b8;
    local_50 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = *(undefined8 *)(param_1 + 0x30);
    local_40 = *(undefined8 *)(param_1 + 0x38);
    local_38 = *(undefined8 *)(param_1 + 0x40);
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_saveImageDataToAlbum_showToast_c_026ac310,lVar1,0,&local_78);
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_batchSaveEmoticonItems_index_suc_026ac550,
               *(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 1,
               *(undefined8 *)(param_1 + 0x38),*(long *)(param_1 + 0x40) + 1);
  }
  local_2c = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_20,0);
  return;
}

