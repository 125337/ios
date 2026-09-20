// FUN_008bfdb4 @ 008bfdb4

void FUN_008bfdb4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_c0;
  char *local_88;
  undefined *local_80;
  undefined *local_70;
  char *local_68;
  char *local_60;
  char *local_58 [3];
  int local_3c;
  undefined8 local_38;
  char *local_30;
  char *local_28;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = param_2;
  if (local_30 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_3c = 1;
    goto LAB_008c027c;
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_GetDataItem_026a13c0);
  if ((((ulong)pcVar1 & 1) != 0) &&
     (pcVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_GetParent_026a1450),
     local_28 = local_30, ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
    goto LAB_008c027c;
  }
  pcVar1 = local_30;
  FUN_008b9014();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_c0 = local_30;
  }
  local_58[0] = pcVar1;
  FUN_008b9320();
  _objc_retainAutoreleasedReturnValue();
  local_60 = local_c0;
  if ((local_58[0] == (char *)0x0) || (local_c0 == (char *)0x0)) {
    local_28 = (char *)0x0;
    local_3c = 1;
  }
  else {
    pcVar1 = "FavDataItemWrap";
    _objc_getClass();
    local_68 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_3c = 1;
    }
    else {
      local_70 = PTR_s_initWithParent_DataItem_Index__0269db20;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithParent_DataItem_Index__0269db20);
      if (((ulong)pcVar1 & 1) == 0) {
        local_80 = PTR_s_initWithParent_DataItem_dataList_026a9b18;
        pcVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithParent_DataItem_dataList_026a9b18);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar1 = local_58[0];
          FUN_008b5ddc(local_58[0],PTR_s_dataList_026a13d8);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_68;
          local_88 = pcVar1;
          _objc_alloc();
          pcVar1 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,local_80,local_58[0],local_60,local_88,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_3c = 1;
          _objc_storeStrong(&local_88,0);
          if (local_3c != 0) goto LAB_008c023c;
        }
        local_28 = (char *)0x0;
        local_3c = 1;
      }
      else {
        pcVar1 = local_68;
        _objc_alloc();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,local_70,local_58[0],local_60,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        local_3c = 1;
      }
    }
  }
LAB_008c023c:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
LAB_008c027c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

