// FUN_00276dc8 @ 00276dc8

void FUN_00276dc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  uint local_bc;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  long local_70;
  byte local_68;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  byte local_49;
  undefined *local_48;
  byte local_3d;
  long local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  FUN_002813d4();
  local_3d = 0xa0;
  FUN_002813d8(&cf_album_src,local_28);
  local_49 = 0;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_bc = 1;
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_bc = (uint)puVar3 ^ 1;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar2 = local_28;
  if ((local_bc & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = pcVar2;
    pcVar4 = local_28;
    FUN_002815d8();
    pcVar2 = local_28;
    if (((ulong)pcVar4 & 1) == 0) {
      local_61 = 0;
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_110 = &cf_mp4;
      }
      else {
        local_110 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = local_110;
      }
      FUN_0028174c(pcVar2,local_110);
      _objc_retainAutoreleasedReturnValue();
      local_128 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_128 = local_28;
      }
      _objc_storeStrong(&local_58,local_128);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      FUN_002813d8(&cf_album_export,local_58);
    }
    lVar1 = local_30;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_00282158;
    local_80 = &DAT_0257b3a8;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_58;
    local_70 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = pcVar2;
    local_68 = local_3d & 1;
    FUN_00281e7c(&local_98);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  else {
    if (local_30 != 0) {
      (**(code **)(local_30 + 0x10))(local_30,0,&cf_eNNX__W);
    }
    local_50 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

