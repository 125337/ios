// handleOfficialPluginSwitch: @ 01d7fa90

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchSettingsViewController::handleOfficialPluginSwitch_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  long local_60 [3];
  ulong local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = 0;
  local_48 = uVar2;
  do {
    uVar2 = local_48;
    if (local_48 == 0) {
LAB_01d7fbd8:
      if (local_60[0] != 0) {
        uVar2 = *(ulong *)(local_28 + (long)_tableViewMgr);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_getTableView_026a09c8);
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_indexPathForCell__0269e208,local_60[0]);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar2;
        if (uVar2 != 0) {
          local_78 = 0;
          uVar2 = *(ulong *)(local_28 + (long)_tableViewMgr);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getAllSections_026af618);
          if ((uVar2 & 1) != 0) {
            uVar3 = *(ulong *)(local_28 + (long)_tableViewMgr);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_78;
            local_78 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          if (local_78 != 0) {
            uVar3 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_section_0269e988);
            uVar4 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
            uVar2 = local_78;
            if (uVar3 < uVar4) {
              uVar3 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_section_0269e988);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,uVar3);
              _objc_retainAutoreleasedReturnValue();
              local_88 = 0;
              local_80 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
              if ((uVar2 & 1) != 0) {
                uVar3 = local_80;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = local_88;
                local_88 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar2);
              }
              if (local_88 != 0) {
                uVar3 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_row_0269e210);
                uVar4 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
                uVar2 = local_88;
                if (uVar3 < uVar4) {
                  uVar3 = local_70;
                  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_row_0269e210);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,uVar3);
                  _objc_retainAutoreleasedReturnValue();
                  local_90 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_userInfo_0269f138);
                  if ((uVar2 & 1) != 0) {
                    uVar2 = local_90;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_90,PTR_s_valueForKey__0269d128,&cf_userInfo);
                    _objc_retainAutoreleasedReturnValue();
                    local_98 = uVar2;
                    if (uVar2 != 0) {
                      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
                      if ((uVar2 & 1) != 0) {
                        uVar3 = local_98;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_pluginKey);
                        _objc_retainAutoreleasedReturnValue();
                        uVar2 = local_40;
                        local_40 = uVar3;
                        (*(code *)PTR__objc_release_02578630)(uVar2);
                      }
                    }
                    _objc_storeStrong(&local_98,0);
                  }
                  _objc_storeStrong(&local_90,0);
                }
              }
              _objc_storeStrong(&local_88);
              _objc_storeStrong(&local_80,0);
            }
          }
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
      if (local_40 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_handlePluginSwitch_pluginKey__026c4be0,local_38,local_40);
      }
      _objc_storeStrong(local_60);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
      return;
    }
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _objc_storeStrong(local_60,local_48);
      goto LAB_01d7fbd8;
    }
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

