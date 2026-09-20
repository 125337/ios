// FUN_01560d84 @ 01560d84

void FUN_01560d84(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  char *local_38;
  char *local_30;
  char *local_28;
  long local_20;
  long local_18;
  
  pcVar2 = "MMServiceCenter";
  local_20 = param_1;
  local_18 = param_1;
  _objc_getClass();
  pcVar3 = "CContactMgr";
  local_28 = pcVar2;
  _objc_getClass();
  if ((local_28 != (char *)0x0) && (pcVar3 != (char *)0x0)) {
    pcVar2 = local_28;
    local_30 = pcVar3;
    FUN_01533df4(local_28,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_getService__0269d170;
    local_38 = pcVar2;
    if ((pcVar2 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,puVar1,local_30);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(char **)(lVar5 + 0x28) = pcVar2;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

