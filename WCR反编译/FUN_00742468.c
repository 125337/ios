// FUN_00742468 @ 00742468

void FUN_00742468(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_007471a8(param_1,"m_selectAttachmentViewController");
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = "SelectAttachmentViewController";
  local_30 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if ((param_1 & 1) != 0) {
    uVar2 = local_30;
    FUN_00745c20(local_30,local_28);
    if ((uVar2 & 1) != 0) {
      FUN_00746804(local_30);
      goto LAB_00742564;
    }
  }
  (*DAT_028cc6a0)(local_18,local_20,local_28);
LAB_00742564:
  _objc_storeStrong(&local_30,0);
  return;
}

