// FUN_00097b88 @ 00097b88

void FUN_00097b88(undefined8 param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong local_180;
  long local_f0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  bool local_81;
  long local_80;
  long local_78 [4];
  ulong local_58;
  long local_50;
  int local_44;
  ulong local_40;
  ulong *local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  local_38 = param_2;
  FUN_00098bb0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  if (uVar2 != 0) {
    pcVar3 = &cf_MsgRecordDetailViewController;
    _NSClassFromString(&cf_MsgRecordDetailViewController);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
    if ((uVar2 & 1) != 0) {
      local_50 = 0;
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_tableView);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_50,local_58);
      }
      _objc_storeStrong(&local_58,0);
      local_81 = false;
      bVar1 = local_50 == 0;
      if (bVar1) {
        local_f0 = 0;
      }
      else {
        local_f0 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_indexPathForCell__0269e208,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_f0;
      }
      local_81 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_78[0] = local_f0;
      if ((local_81 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if (local_78[0] == 0) {
        local_28 = 0;
        local_44 = 1;
      }
      else {
        uVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_valueForKey__0269d128,&cf_m_arrMessageData);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_90 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar2 = local_90;
        if ((uVar5 & 1) == 0) {
LAB_000980e4:
          local_44 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = uVar2;
          lVar6 = local_78[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_row_0269e210);
          if (lVar6 < 0) {
LAB_000980c0:
            local_44 = 0;
          }
          else {
            lVar6 = local_78[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_row_0269e210);
            uVar5 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
            uVar2 = local_98;
            if ((long)uVar5 <= lVar6) goto LAB_000980c0;
            lVar6 = local_78[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_row_0269e210);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,lVar6);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_valueForKey__0269d128,&cf_m_nsAttachPath);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = uVar2;
            if (local_38 != (ulong *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((uVar2 & 1) == 0) {
                local_180 = 0;
              }
              else {
                local_180 = local_a8;
              }
              _objc_retainAutorelease();
              *local_38 = local_180;
            }
            uVar2 = local_a0;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar2;
            local_44 = 1;
            _objc_storeStrong(&local_a8);
            _objc_storeStrong(&local_a0,0);
          }
          _objc_storeStrong(&local_98,0);
          if (local_44 == 0) goto LAB_000980e4;
        }
        _objc_storeStrong(&local_90,0);
        if (local_44 == 0) {
          local_28 = 0;
          local_44 = 1;
        }
      }
      _objc_storeStrong(local_78);
      _objc_storeStrong(&local_50,0);
      goto LAB_0009816c;
    }
  }
  local_28 = 0;
  local_44 = 1;
LAB_0009816c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

