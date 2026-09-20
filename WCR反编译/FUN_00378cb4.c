// FUN_00378cb4 @ 00378cb4

void FUN_00378cb4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  uint local_2c;
  long local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_no_frame;
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_38 = puVar3;
    if (puVar3 + -2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_background;
      local_2c = 1;
    }
    else {
      FUN_0037fc28(puVar3 + -2);
      uVar4 = local_20;
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar5 = local_20;
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          local_48 = uVar5;
          if (uVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_topViewController_0269e588);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = uVar5 != local_40;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_nav;
          }
          local_2c = (uint)bVar1;
          _objc_storeStrong(&local_48);
          _objc_storeStrong(&local_40,0);
          if (local_2c != 0) goto LAB_00379048;
        }
        if (local_28 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_no_table;
          local_2c = 1;
        }
        else {
          lVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar6 == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_no_window;
            local_2c = 1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_none;
            local_2c = 1;
          }
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_chat;
        local_2c = 1;
      }
    }
  }
LAB_00379048:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

