// FUN_00083a88 @ 00083a88

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00083a88(undefined8 param_1,ulong *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,byte *param_7,byte *param_8,byte *param_9,ulong *param_10,
                 byte *param_11)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  uint local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_c0;
  byte local_b4;
  byte local_b3;
  byte local_b2;
  bool local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  byte local_90;
  byte local_8f;
  byte local_8e;
  byte local_8d;
  cfstringStruct *local_80;
  byte *local_78;
  ulong *local_70;
  byte *local_68;
  byte *local_60;
  byte *local_58;
  byte *local_50;
  byte *local_48;
  byte *local_40;
  byte *local_38;
  ulong *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_68 = param_9;
  local_70 = param_10;
  local_78 = param_11;
  pcVar2 = local_28;
  local_60 = param_8;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  FUN_00071d1c();
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar2;
  _WCRAvatarIsChatPageController();
  local_8d = (byte)pcVar2;
  pcVar2 = local_80;
  _WCRAvatarIsMyProfileController();
  local_8e = (byte)pcVar2;
  local_8f = (byte)local_28;
  FUN_00089920();
  pcVar2 = local_28;
  FUN_0008998c(local_28,local_80);
  local_90 = (byte)pcVar2;
  pcVar2 = local_28;
  FUN_00089a38();
  _objc_retainAutoreleasedReturnValue();
  local_99 = pcVar2 != (cfstringStruct *)0x0;
  local_b1 = false;
  bVar1 = local_80 == (cfstringStruct *)0x0;
  local_98 = pcVar2;
  if (bVar1) {
    local_160 = &cf___;
  }
  else {
    local_160 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_160;
  }
  local_b1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_160;
  if ((local_b1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  pcVar2 = local_a8;
  FUN_00089ac0();
  local_170 = 1;
  if (((ulong)pcVar2 & 1) == 0) {
    local_170 = (uint)local_28;
    FUN_00089b2c();
  }
  local_b2 = (byte)local_170 & 1;
  local_b3 = 0;
  if (((((local_8d & 1) == 0) && (local_b3 = 0, (local_170 & 1) != 0)) &&
      (local_b3 = 1, (local_99 & 1) == 0)) && (local_b3 = 1, (local_8f & 1) == 0)) {
    local_b3 = local_90;
  }
  local_b3 = local_b3 & 1;
  pcVar2 = local_28;
  FUN_00089b98(local_28,local_80,local_99 & 1,local_8f & 1,local_90 & 1);
  local_b4 = (byte)pcVar2;
  pcVar2 = local_28;
  FUN_00077d80(local_28,local_80);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_80;
  local_c0 = pcVar2;
  _WCRAvatarIsFriendProfileController();
  if (((ulong)pcVar3 & 1) != 0) {
    _objc_storeStrong(&local_c0,_WCRAvatarSceneFriendProfile);
  }
  pcVar2 = local_80;
  if (local_30 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_30 = (ulong)pcVar2;
  }
  pcVar2 = local_c0;
  if (local_38 != (byte *)0x0) {
    *local_38 = local_8d & 1;
  }
  if (local_40 != (byte *)0x0) {
    *local_40 = local_8e & 1;
  }
  if (local_48 != (byte *)0x0) {
    *local_48 = local_99 & 1;
  }
  if (local_50 != (byte *)0x0) {
    *local_50 = local_8f & 1;
  }
  if (local_58 != (byte *)0x0) {
    *local_58 = local_90 & 1;
  }
  if (local_60 != (byte *)0x0) {
    *local_60 = local_b3 & 1;
  }
  if (local_68 != (byte *)0x0) {
    *local_68 = local_b4 & 1;
  }
  if (local_70 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_70 = (ulong)pcVar2;
  }
  if (local_78 != (byte *)0x0) {
    *local_78 = (byte)pcVar3 & 1;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_28,0);
  return;
}

