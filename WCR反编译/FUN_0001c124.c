// FUN_0001c124 @ 0001c124

byte FUN_0001c124(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_b8;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  uint local_60;
  byte local_59;
  ulong local_58;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  FUN_0001a198(local_30,PTR_s_referingMessageWrap_0269d110);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_b8 = uVar2;
  if (uVar2 == 0) {
    local_b8 = local_30;
    FUN_0001a4fc(local_30,&cf__referingMessageWrap);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_b8;
  }
  local_59 = uVar2 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b8;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_40 != 0) {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isSender_0269d1b0),
       (uVar2 & 1) != 0)) {
      local_21 = 1;
      local_60 = 1;
      goto LAB_0001c634;
    }
    uVar2 = local_40;
    FUN_0001a4fc(local_40,&cf_m_nsFromUsr);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,local_38);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      local_21 = 1;
    }
    local_60 = (uint)bVar1;
    _objc_storeStrong(&local_68,0);
    if (local_60 != 0) goto LAB_0001c634;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_70;
  puVar4 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
  local_80 = uVar2;
  local_78 = puVar4;
  if (uVar2 == 0x7fffffffffffffff) {
    local_21 = 0;
    local_60 = 1;
  }
  else {
    uVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_substringFromIndex__0269d120,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar3;
    FUN_0001a680(uVar3,&cf_fromusr);
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      uVar3 = local_88;
      FUN_0001a680(local_88,&cf_fromUsr);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_90;
      local_90 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,local_38);
    local_21 = (byte)uVar2 & 1;
    local_60 = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_70,0);
LAB_0001c634:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

