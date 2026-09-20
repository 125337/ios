// FUN_0040a43c @ 0040a43c

byte FUN_0040a43c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_d0;
  ulong local_78;
  ulong local_70;
  byte local_65;
  int local_64;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  uint local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar3 = local_30;
  FUN_0040bb14(local_30,&cf_messageType);
  local_34 = (uint)uVar3;
  uVar3 = local_30;
  FUN_004055cc(local_30,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_50[0] = uVar3;
  FUN_004055cc(local_30,&cf_pushContent);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_58 = uVar2;
  FUN_004055cc(local_30,&cf_displayContent);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = (ulong)local_34;
  local_60 = uVar3;
  FUN_0040bd34();
  if ((uVar2 & 1) != 0) {
    local_21 = 1;
    local_64 = 1;
    goto LAB_0040a8e0;
  }
  uVar3 = local_50[0];
  FUN_0040bf64();
  local_d0 = 1;
  if ((uVar3 & 1) == 0) {
    uVar3 = local_58;
    FUN_0040bf64();
    local_d0 = 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_60;
      FUN_0040bf64();
      local_d0 = (uint)uVar3;
    }
  }
  local_65 = (byte)local_d0 & 1;
  if ((local_d0 & 1) != 0) {
    local_21 = 1;
    local_64 = 1;
    goto LAB_0040a8e0;
  }
  uVar3 = (ulong)local_34;
  FUN_0040bd34();
  if (((uVar3 & 1) != 0) &&
     ((uVar3 = local_50[0], FUN_0040c12c(), (uVar3 & 1) != 0 ||
      (uVar3 = local_60, FUN_0040c12c(), (uVar3 & 1) != 0)))) {
    local_21 = 1;
    local_64 = 1;
    goto LAB_0040a8e0;
  }
  if ((local_34 == 1) && (uVar3 = local_50[0], FUN_0040c12c(0), (uVar3 & 1) != 0)) {
    FUN_0040c4c4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_70 = uVar3;
    FUN_004055cc(local_30,&cf_fromUserName);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_70;
    local_78 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    uVar3 = 0;
    if (uVar4 == 0) {
LAB_0040a76c:
      local_64 = 0;
    }
    else {
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_70);
      uVar3 = uVar2 & 0xffffffff;
      if ((uVar2 & 1) == 0) goto LAB_0040a76c;
      uVar3 = 1;
      local_21 = 1;
      local_64 = 1;
    }
    _objc_storeStrong(uVar3,&local_78);
    _objc_storeStrong(&local_70,0);
    if (local_64 != 0) goto LAB_0040a8e0;
  }
  uVar3 = local_50[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50[0],PTR_s_rangeOfString_options__0269d118,&cf_<_wc_custom_link_,1);
  bVar1 = true;
  if (uVar3 == 0x7fffffffffffffff) {
    uVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_rangeOfString_options__0269d118,&cf_<_wc_custom_link_,1);
    bVar1 = true;
    if (uVar3 == 0x7fffffffffffffff) {
      uVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_rangeOfString_options__0269d118,&cf_<_wc_custom_link_,1);
      bVar1 = uVar3 != 0x7fffffffffffffff;
    }
  }
  local_21 = bVar1;
  local_64 = 1;
LAB_0040a8e0:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

