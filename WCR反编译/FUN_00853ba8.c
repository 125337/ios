// FUN_00853ba8 @ 00853ba8

void FUN_00853ba8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_18;
  local_20 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar3;
  do {
    uVar2 = local_28;
    if (local_28 == 0) {
LAB_00853cf8:
      if (local_20 == 0) {
        local_38 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_20);
        _objc_retainAutoreleasedReturnValue();
        local_40 = puVar4;
        while (puVar4 = local_40,
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0),
              puVar4 != (undefined *)0x0) {
          puVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_48 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeLastObject_0269e830);
          puVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tag_026cab98);
          if (puVar4 == (undefined *)0x24f6e4) {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_setUserInteractionEnabled__026caad8,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeFromSuperview_026ca800);
            local_38 = 4;
          }
          else {
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_40;
            if (puVar5 != (undefined *)0x0) {
              puVar5 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObjectsFromArray__0269d540);
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            local_38 = 0;
          }
          _objc_storeStrong(&local_48,0);
        }
        _objc_storeStrong(0,&local_40,0);
        local_38 = 0;
      }
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      _objc_storeStrong(&local_18,0);
      return;
    }
    pcVar1 = &cf_MoreViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_20 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      goto LAB_00853cf8;
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

