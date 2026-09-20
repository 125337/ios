// FUN_006dc460 @ 006dc460

void FUN_006dc460(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  
  puVar1 = PTR_s_handleHttpURL_withExtraInfo__026a6bd0;
  DAT_028cc290 = DAT_028cc290 + 1;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_absoluteString_026a1de0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar2;
  if (lVar2 == 0) {
    local_58 = *(long *)(param_1 + 0x28);
  }
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar1,local_58,*(undefined8 *)(param_1 + 0x30));
  (*(code *)PTR__objc_release_02578630)(lVar2);
  DAT_028cc290 = DAT_028cc290 + -1;
  return;
}

