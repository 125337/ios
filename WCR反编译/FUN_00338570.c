// FUN_00338570 @ 00338570

void FUN_00338570(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *puVar6;
  cfstringStruct *local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  cfstringStruct *local_60;
  long local_58;
  long local_50;
  long local_48;
  byte local_3d;
  byte local_2d;
  undefined4 local_2c;
  long local_28;
  
  plVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    FUN_00335274();
    local_2d = (byte)uVar1;
    FUN_00335310();
    local_3d = (byte)uVar1;
    if (((local_2d & 1) == 0) && ((uVar1 & 1) == 0)) {
      local_2c = 1;
    }
    else {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_viewModel);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar3;
      if (lVar3 == 0) {
        local_2c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_valueForKey__0269d128,&cf_sectionList);
        _objc_retainAutoreleasedReturnValue();
        local_50 = lVar3;
        if ((lVar3 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0), lVar3 == 0)) {
          local_2c = 1;
        }
        else {
          lVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_valueForKey__0269d128,&cf_roomContact);
          _objc_retainAutoreleasedReturnValue();
          local_58 = lVar3;
          if (lVar3 == 0) {
            local_2c = 1;
          }
          else {
            pcVar4 = &cf_ChatRoomContactSelectSectionModel;
            _NSClassFromString();
            lVar3 = local_50;
            local_60 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_mutableCopy_0269d8a0);
            lVar5 = local_28;
            local_68 = lVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_valueForKey__0269d128,&cf_arrRoomMembers);
            _objc_retainAutoreleasedReturnValue();
            local_70 = lVar5;
            if ((local_3d & 1) != 0) {
              FUN_00338ac8(local_68,local_60,local_58,lVar5);
            }
            if (((local_2d & 1) != 0) && (local_60 != (cfstringStruct *)0x0)) {
              puVar6 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                         PTR_s_mutualFriendContactsInGroupFromR_026a2148,local_58);
              _objc_retainAutoreleasedReturnValue();
              local_78 = puVar6;
              FUN_00335780(puVar6,local_70);
              _objc_retainAutoreleasedReturnValue();
              local_80 = puVar6;
              FUN_00338de4(local_68);
              puVar6 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
              if (puVar6 != (undefined *)0x0) {
                lVar3 = local_68;
                FUN_00339034(puVar6);
                pcVar4 = local_60;
                local_88 = lVar3;
                FUN_00339514(local_60,&cf__g__YS,local_80);
                _objc_retainAutoreleasedReturnValue();
                local_90 = pcVar4;
                if (pcVar4 != (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_68,PTR_s_insertObject_atIndex__0269eac0,pcVar4,local_88);
                }
                _objc_storeStrong(&local_90,0);
              }
              _objc_storeStrong(&local_80);
              _objc_storeStrong(&local_78,0);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_setValue_forKey__0269d300,local_68,&cf_sectionList);
            _objc_storeStrong(&local_70);
            _objc_storeStrong(&local_68,0);
            local_2c = 0;
          }
          _objc_storeStrong(&local_58,0);
        }
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

