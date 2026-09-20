// handleSearchEntrySwitch: @ 01d810d4

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchSettingsViewController::handleSearchEntrySwitch_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *local_a8;
  uint local_9c;
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
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = 0;
  local_48 = uVar3;
  do {
    uVar3 = local_48;
    if (local_48 == 0) {
LAB_01d8121c:
      if (local_60[0] != 0) {
        uVar3 = *(ulong *)(local_28 + (long)_tableViewMgr);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_getTableView_026a09c8);
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_indexPathForCell__0269e208,local_60[0]);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar3;
        if (uVar3 != 0) {
          local_78 = 0;
          uVar3 = *(ulong *)(local_28 + (long)_tableViewMgr);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getAllSections_026af618);
          if ((uVar3 & 1) != 0) {
            uVar4 = *(ulong *)(local_28 + (long)_tableViewMgr);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_78;
            local_78 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          if (local_78 != 0) {
            uVar4 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_section_0269e988);
            uVar5 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
            uVar3 = local_78;
            if (uVar4 < uVar5) {
              uVar4 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_section_0269e988);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar4);
              _objc_retainAutoreleasedReturnValue();
              local_88 = 0;
              local_80 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
              if ((uVar3 & 1) != 0) {
                uVar4 = local_80;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = local_88;
                local_88 = uVar4;
                (*(code *)PTR__objc_release_02578630)(uVar3);
              }
              if (local_88 != 0) {
                uVar4 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_row_0269e210);
                uVar5 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
                uVar3 = local_88;
                if (uVar4 < uVar5) {
                  uVar4 = local_70;
                  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_row_0269e210);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar4);
                  _objc_retainAutoreleasedReturnValue();
                  local_90 = uVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_userInfo_0269f138);
                  if ((uVar3 & 1) != 0) {
                    uVar3 = local_90;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_90,PTR_s_valueForKey__0269d128,&cf_userInfo);
                    _objc_retainAutoreleasedReturnValue();
                    local_98 = uVar3;
                    if (uVar3 != 0) {
                      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
                      if ((uVar3 & 1) != 0) {
                        uVar4 = local_98;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_entryKey);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = local_40;
                        local_40 = uVar4;
                        (*(code *)PTR__objc_release_02578630)(uVar3);
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
      bVar1 = local_40 != 0;
      if (bVar1) {
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        uVar3 = local_38;
        local_a8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_numberWithBool__0269ce60,uVar3 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_setValue_forKey__0269d300,puVar2,local_40);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_saveConfig_0269e5d0);
        _objc_storeStrong(&local_a8,0);
      }
      local_9c = (uint)!bVar1;
      _objc_storeStrong(local_60);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      if (local_9c == 0) {
        local_9c = 0;
      }
      _objc_storeStrong(&local_38,0);
      return;
    }
    puVar2 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      _objc_storeStrong(local_60,local_48);
      goto LAB_01d8121c;
    }
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  } while( true );
}

