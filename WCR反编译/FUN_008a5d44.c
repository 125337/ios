// FUN_008a5d44 @ 008a5d44

uint FUN_008a5d44(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  uint local_74;
  char *local_68;
  char *local_40;
  char *local_38 [3];
  char *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = "MsgMediaGroupMgr";
  _objc_getClass();
  local_20 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_shared_0269cad0);
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_68 = (char *)0x0;
  }
  else {
    local_68 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = local_68;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_74 = 0;
  if (local_38[0] != (char *)0x0) {
    pcVar2 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38[0],PTR_s_respondsToSelector__026ca818,PTR_s_isMediaGroupExpanded__026a9850);
    local_74 = 0;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38[0],PTR_s_isMediaGroupExpanded__026a9850,local_18);
      local_74 = (uint)pcVar2;
    }
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_18,0);
  return local_74 & 1;
}

