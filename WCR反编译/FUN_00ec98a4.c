// FUN_00ec98a4 @ 00ec98a4

byte FUN_00ec98a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar1 = local_28;
  local_40 = param_1;
  local_38 = param_4;
  local_30 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,uVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf_voice_pack);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_containsObject__0269cbb8,&cf_wcr_attach_plugin_small_signal);
      local_11 = (byte)uVar3 & 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_containsObject__0269cbb8,&cf_wcr_attach_plugin_voice_pack);
      local_11 = (byte)uVar3 & 1;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

