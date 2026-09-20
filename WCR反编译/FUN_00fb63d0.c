// FUN_00fb63d0 @ 00fb63d0

void FUN_00fb63d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_24;
  
  lVar2 = *(long *)(param_1 + 0x30);
  local_24 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_wcr_sendMessage_toContact__026acfa8,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    local_24 = (uint)puVar1;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,local_24 & 1);
  return;
}

