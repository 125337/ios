// FUN_01f54e40 @ 01f54e40

byte FUN_01f54e40(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_48;
  byte local_39;
  code *local_38;
  long local_30;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_38 = *(code **)(param_1 + 0x20);
  uVar2 = local_28;
  local_30 = param_1;
  (*local_38)(local_28,*(undefined8 *)(param_1 + 0x28));
  local_39 = (byte)uVar2;
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_voiceAutoSpeedEnabled_026bd4e0);
    bVar1 = ((ulong)puVar3 & 1) != 0;
    if (bVar1) {
      local_11 = 1;
    }
    _objc_storeStrong(&local_48,0);
    if (bVar1) goto LAB_01f54f3c;
  }
  local_11 = local_39 & 1;
LAB_01f54f3c:
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

