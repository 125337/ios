// FUN_00687110 @ 00687110

void FUN_00687110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_5;
  local_28 = param_6;
  local_20 = param_3;
  local_18 = param_4;
  _objc_storeStrong(&local_40);
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    lVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_characterAtIndex__0269fa18,0);
    uVar1 = (ushort)lVar3;
    if ((uVar1 < 0x41) || (bVar2 = true, 0x5a < uVar1)) {
      bVar2 = 0x60 < uVar1 && uVar1 < 0x7b;
    }
    if (((uVar1 < 0x4e00 || 0x9fff < uVar1) && (!bVar2)) && (uVar1 < 0x30 || 0x39 < uVar1)) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
      *param_7 = 1;
    }
  }
  _objc_storeStrong(&local_40,0);
  return;
}

