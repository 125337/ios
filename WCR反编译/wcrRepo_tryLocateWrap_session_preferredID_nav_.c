// wcrRepo_tryLocateWrap:session:preferredID:nav: @ 01bb3318

/* Function Stack Size: 0x30 bytes */

bool WCRefineMessageRepositoryViewController::wcrRepo_tryLocateWrap_session_preferredID_nav_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,ID param_6)

{
  long_long lVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  long_long local_108;
  undefined *local_f8;
  undefined *local_b0;
  undefined *local_a8;
  long_long local_a0;
  undefined *local_98;
  undefined *local_90;
  long_long local_88;
  ID local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined *local_58;
  long_long local_50;
  long local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_58 = (undefined *)0x0;
  local_50 = param_5;
  _objc_storeStrong(&local_58,param_6);
  if (((local_40 == 0) ||
      (lVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
      lVar2 == 0)) || (local_58 == (undefined *)0x0)) {
    local_21 = 0;
    local_5c = 1;
  }
  else {
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_f8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_f8 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_f8;
    }
    local_71 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_f8;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_wcrRepo_chatSessionFromBaseMsgVC_026c0430,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_80 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    if ((IVar4 == 0) ||
       (IVar4 = local_80,
       (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_48),
       (IVar4 & 1) == 0)) {
      local_21 = 0;
      local_5c = 1;
    }
    else {
      if ((long)local_50 < 1) {
        local_108 = local_40;
        FUN_01bb3850(local_50);
      }
      else {
        local_108 = local_50;
      }
      local_88 = local_108;
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_wcrRepo_jumpToOriginalMsg_sessio_026c0438,local_68,local_48,
                 local_108,local_40);
      if ((IVar4 & 1) == 0) {
        local_90 = PTR_s_locateToMsg__0269d608;
        puVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_locateToMsg__0269d608);
        if (((ulong)puVar3 & 1) == 0) {
          local_21 = 0;
          local_5c = 1;
        }
        else {
          FUN_01bad5fc();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_40;
          local_98 = puVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_a0 = lVar1;
          if ((local_98 != (undefined *)0x0) && (0 < (long)local_88)) {
            local_a8 = PTR_s_GetMsg_LocalID__0269d5e8;
            puVar3 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8);
            if (((ulong)puVar3 & 1) != 0) {
              puVar3 = local_98;
              (*(code *)PTR__objc_msgSend_02578628)(local_98,local_a8,local_48,local_88);
              _objc_retainAutoreleasedReturnValue();
              local_b0 = puVar3;
              if (puVar3 != (undefined *)0x0) {
                _objc_storeStrong(&local_a0,puVar3);
              }
              _objc_storeStrong(&local_b0,0);
            }
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_68,local_90,local_a0);
          local_21 = 1;
          local_5c = 1;
          _objc_storeStrong(&local_a0);
          _objc_storeStrong(&local_98,0);
        }
      }
      else {
        local_21 = 1;
        local_5c = 1;
      }
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

