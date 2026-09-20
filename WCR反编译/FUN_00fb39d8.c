// FUN_00fb39d8 @ 00fb39d8

byte FUN_00fb39d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  cfstringStruct *local_108;
  long local_d0;
  long local_c8;
  long local_c0 [4];
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  undefined8 local_48;
  long local_40;
  byte local_31;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_3);
  pcVar1 = local_50;
  FUN_00faec6c();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_50 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (local_50 == (cfstringStruct *)0x0) {
    local_31 = 0;
    local_54 = 1;
  }
  else {
    lVar2 = local_40;
    FUN_00fc8f14(local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar2;
    if (lVar2 == 0) {
      local_31 = 0;
      local_54 = 1;
    }
    else {
      pcVar3 = &cf_FavoritesUtil;
      _NSClassFromString();
      pcVar1 = &cf_ConvertVideoInfo2FavItem_;
      local_68 = pcVar3;
      _NSSelectorFromString();
      local_70 = pcVar1;
      if ((local_68 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar1),
         ((ulong)pcVar3 & 1) == 0)) {
        local_31 = 0;
        local_54 = 1;
      }
      else {
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,local_70,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_31 = 0;
          local_54 = 1;
        }
        else {
          pcVar3 = &cf_FavForwardLogicController;
          _NSClassFromString();
          local_80 = pcVar3;
          if ((pcVar3 == (cfstringStruct *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                         PTR_s_ForwardFavItemList_delegate__026a5b80), ((ulong)pcVar3 & 1) == 0)) {
            local_31 = 0;
            local_54 = 1;
          }
          else {
            pcVar3 = local_80;
            _objc_alloc_init();
            local_88 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_31 = 0;
              local_54 = 1;
            }
            else {
              FUN_00fae91c();
              _objc_retainAutoreleasedReturnValue();
              local_108 = pcVar3;
              if (pcVar3 == (cfstringStruct *)0x0) {
                local_108 = local_50;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_90 = local_108;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              puVar4 = PTR_WCRFinderFavForwardDelegateProxy_026cec28;
              _objc_alloc_init();
              local_98 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_setViewController__026a59c0,local_90);
              _objc_setAssociatedObject(local_90,&DAT_028e3020,local_88);
              _objc_setAssociatedObject(local_88,&DAT_028e3021,local_98,1);
              pcVar3 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78,PTR_s_valueForKey__0269d128,&cf_dataList);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_a0 = pcVar1;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              pcVar1 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setIllegalType__026ad0f8)
              ;
              pcVar3 = local_a0;
              if (((ulong)pcVar1 & 1) == 0) {
                puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar3,PTR_s_setValue_forKey__0269d300,puVar4,&cf_illegalType);
                (*(code *)PTR__objc_release_02578630)(puVar4);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setIllegalType__026ad0f8,0);
              }
              _objc_storeStrong(&local_a0,0);
              local_c0[0] = 0;
              local_c8 = 0;
              local_d0 = 0;
              lVar5 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_valueForKey__0269d128,&cf_video_path);
              _objc_retainAutoreleasedReturnValue();
              lVar2 = local_c0[0];
              local_c0[0] = lVar5;
              (*(code *)PTR__objc_release_02578630)(lVar2);
              lVar5 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_valueForKey__0269d128,&cf_thumb_path);
              _objc_retainAutoreleasedReturnValue();
              lVar2 = local_c8;
              local_c8 = lVar5;
              (*(code *)PTR__objc_release_02578630)(lVar2);
              lVar5 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_valueForKey__0269d128,&cf_video_time);
              _objc_retainAutoreleasedReturnValue();
              lVar2 = local_d0;
              local_d0 = lVar5;
              (*(code *)PTR__objc_release_02578630)(lVar2);
              pcVar3 = local_88;
              puVar4 = PTR_s_ForwardFavItemList_delegate__026a5b80;
              local_30 = local_78;
              puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_30,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar4,puVar6,local_98);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              local_31 = 1;
              local_54 = 1;
              _objc_storeStrong(&local_d0);
              _objc_storeStrong(&local_c8,0);
              _objc_storeStrong(local_c0,0);
              _objc_storeStrong(&local_98,0);
              _objc_storeStrong(&local_90,0);
            }
            _objc_storeStrong(&local_88,0);
          }
        }
        _objc_storeStrong(&local_78,0);
      }
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_31 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

