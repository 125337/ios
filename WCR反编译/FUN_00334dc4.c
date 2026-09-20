// FUN_00334dc4 @ 00334dc4

void FUN_00334dc4(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_60;
  undefined *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  byte local_2d;
  byte local_1d;
  uint local_1c;
  long local_18;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    FUN_00335274();
    local_1d = (byte)uVar1;
    FUN_00335310();
    local_2d = (byte)uVar1;
    if (((local_1d & 1) == 0) && ((uVar1 & 1) == 0)) {
      local_1c = 1;
    }
    else {
      lVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf__roomContact);
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar3;
      if (lVar3 == 0) {
        local_1c = 1;
      }
      else {
        lVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_valueForKey__0269d128,&cf_m_arrRoomMembers);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = local_18;
        local_40 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_arrKeys);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_18;
        local_48 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_valueForKey__0269d128,&cf_m_dicRoomMembers);
        _objc_retainAutoreleasedReturnValue();
        local_50 = lVar3;
        if ((local_48 == 0) || (lVar3 == 0)) {
          local_1c = 1;
        }
        else {
          if ((local_2d & 1) != 0) {
            FUN_003353ac(local_18,local_38,local_40);
          }
          if ((local_1d & 1) == 0) {
            local_1c = 1;
          }
          else {
            puVar5 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                       PTR_s_mutualFriendContactsInGroupFromR_026a2148,local_38);
            _objc_retainAutoreleasedReturnValue();
            local_58 = puVar5;
            FUN_00335780(puVar5,local_40);
            _objc_retainAutoreleasedReturnValue();
            local_60 = puVar5;
            FUN_00336134(local_18);
            puVar5 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
            if (puVar5 != (undefined *)0x0) {
              lVar3 = local_48;
              FUN_0033664c();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_insertObject_atIndex__0269eac0,&cf__g__YS,lVar3);
              puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,
                         local_60);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,&cf__g__YS);
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            local_1c = (uint)(puVar5 == (undefined *)0x0);
            _objc_storeStrong(&local_60);
            _objc_storeStrong(&local_58,0);
          }
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
        _objc_storeStrong(&local_40,0);
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

