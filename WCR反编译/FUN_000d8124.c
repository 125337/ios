// FUN_000d8124 @ 000d8124

void FUN_000d8124(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *local_148;
  undefined1 *local_138;
  ulong local_108;
  undefined1 *local_68;
  undefined1 *local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  pcVar1 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar2 = local_28;
    FUN_000f49cc();
    if ((uVar2 & 1) == 0) {
      FUN_000f4d40(local_28);
      local_38 = 1;
    }
    else {
      local_40 = 0;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getRightBarButton_0269ea20);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getRightBarButton_0269ea20);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_40;
        local_40 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028c83a2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) == 0) {
        uVar3 = local_28;
        FUN_000f52cc();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_48 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_48 != 0) {
          _objc_setAssociatedObject(local_28,&DAT_028c83a2,local_48,1);
        }
      }
      uVar2 = local_28;
      if (local_48 == 0) {
        local_38 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_108 = uVar3;
        if (uVar3 == 0) {
          local_108 = *(ulong *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = local_108;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,local_48);
        if ((uVar2 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,
                     local_58);
          _objc_retainAutoreleasedReturnValue();
          local_60 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
          if ((puVar4 == (undefined1 *)0x0) && (local_40 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_40);
          }
          local_68 = (undefined1 *)0x0;
          if (local_40 != 0) {
            local_138 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_indexOfObject__0269e870,local_40);
            if (local_138 == (undefined1 *)0x7fffffffffffffff) {
              local_148 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
              if ((undefined1 *)((long)&MACH_HEADER.magic + 2) <= local_148) {
                local_148 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
              }
              local_138 = local_148;
            }
            else {
              local_138 = local_138 + 1;
            }
            local_68 = local_138;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_insertObject_atIndex__0269eac0,local_48,local_68);
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          _objc_storeStrong(&local_60,0);
        }
        FUN_000f58c0(local_48);
        FUN_000f5fa0(local_28,local_48);
        FUN_000e6f78(local_28);
        FUN_000eaa58(local_28);
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_50,0);
        local_38 = 0;
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

