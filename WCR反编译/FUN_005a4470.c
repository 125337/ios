// FUN_005a4470 @ 005a4470

byte FUN_005a4470(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *local_b0;
  undefined *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  undefined4 local_80;
  long local_70;
  long local_68;
  long local_60;
  byte local_51;
  char *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  char *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_2);
  lVar1 = local_68;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  local_70 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0),
     lVar1 == 0)) {
    local_51 = 0;
    local_80 = 1;
  }
  else {
    local_88 = (char *)0x0;
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_005a5ba4();
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar2;
    if ((pcVar2 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_getContactByName__0269d178,local_70);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_88;
      local_88 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_88 == (char *)0x0) {
      local_51 = 0;
      local_80 = 1;
    }
    else {
      pcVar2 = "FavForwardLogicController";
      _objc_getClass();
      local_98 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_51 = 0;
        local_80 = 1;
      }
      else {
        _objc_alloc_init();
        local_a0 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_51 = 0;
          local_80 = 1;
        }
        else {
          puVar4 = PTR_WCRefineFavForwardDelegateProxy_026ce7c0;
          _objc_alloc_init();
          local_a8 = puVar4;
          FUN_005c1594();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setViewController__026a59c0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_48 = &cf_logic;
          local_38 = local_a0;
          local_40 = &cf_delegate;
          local_30 = local_a8;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
          _objc_retainAutoreleasedReturnValue();
          FUN_005bfde4();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_50 = local_88;
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_50,1);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_a0;
          local_b0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setM_delegate__026a59c8);
          if (((ulong)pcVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setM_delegate__026a59c8,local_a8);
          }
          pcVar2 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_addFavItemList__026a5a48);
          if ((((ulong)pcVar2 & 1) == 0) ||
             (pcVar2 = local_a0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_a0,PTR_s_respondsToSelector__026ca818,
                        PTR_s_forMessage_showConfirmView__026a59d0), ((ulong)pcVar2 & 1) == 0)) {
            pcVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_respondsToSelector__026ca818,
                       PTR_s_ForwardFavItemList_toUser_delega_026a5a50);
            if (((ulong)pcVar2 & 1) == 0) {
              local_51 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_ForwardFavItemList_toUser_delega_026a5a50,local_60,local_88,
                         local_a8);
              local_51 = 1;
            }
          }
          else {
            pcVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addFavItemList__026a5a48,local_60);
            if (((ulong)pcVar2 & 1) == 0) {
              local_51 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_forMessage_showConfirmView__026a59d0,local_b0,0);
              local_51 = 1;
            }
          }
          local_80 = 1;
          _objc_storeStrong(&local_b0);
          _objc_storeStrong(&local_a8,0);
        }
        _objc_storeStrong(&local_a0,0);
      }
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_51 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

