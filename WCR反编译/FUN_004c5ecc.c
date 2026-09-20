// FUN_004c5ecc @ 004c5ecc

void FUN_004c5ecc(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_100;
  ulong local_80 [2];
  ulong local_70;
  ulong local_68;
  uint local_5c;
  ulong local_40;
  char *local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = "WAMainFrameTaskBarView";
  _objc_getClass();
  local_40 = 0;
  uVar3 = local_30;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_valueForKey__0269d128,&cf_m_tableHeaderTopView);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_40;
  local_40 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  if ((local_38 != (char *)0x0) && (local_40 != 0)) {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_38);
    uVar5 = local_40;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar5;
      local_5c = 1;
      goto LAB_004c638c;
    }
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_40;
      FUN_004c63c4(local_40,local_38,6);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar5;
      if (uVar5 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar5;
      }
      local_5c = (uint)(uVar5 != 0);
      _objc_storeStrong(&local_68,0);
      if (local_5c != 0) goto LAB_004c638c;
    }
  }
  local_70 = 0;
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_taskBarView);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_70;
  local_70 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  if (((local_38 == (char *)0x0) || (local_70 == 0)) ||
     (uVar3 = local_70,
     (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isKindOfClass__0269cd68,local_38),
     uVar5 = local_70, (uVar3 & 1) == 0)) {
    uVar5 = local_30;
    if (local_38 != (char *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar5 & 1) != 0) {
        uVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        FUN_004c63c4();
        _objc_retainAutoreleasedReturnValue();
        local_80[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar5 = local_80[0];
        bVar1 = local_80[0] != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar5;
        }
        local_5c = (uint)bVar1;
        _objc_storeStrong(local_80,0);
        if (local_5c != 0) goto LAB_004c637c;
      }
    }
    if (((local_38 == (char *)0x0) || (local_70 == 0)) ||
       (uVar5 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isKindOfClass__0269cd68,local_38),
       (uVar5 & 1) == 0)) {
      local_100 = local_40;
    }
    else {
      local_100 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_100;
    local_5c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar5;
    local_5c = 1;
  }
LAB_004c637c:
  _objc_storeStrong(&local_70,0);
LAB_004c638c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

