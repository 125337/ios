// FUN_007a7300 @ 007a7300

double FUN_007a7300(undefined8 param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  double local_158;
  double local_148;
  ulong local_118;
  ulong local_78;
  byte local_69;
  double local_68;
  double local_60;
  byte local_52;
  byte local_51;
  undefined4 local_50;
  long local_40;
  ulong local_38;
  ulong local_30;
  double local_28;
  
  dVar1 = DAT_02323d38;
  local_30 = 0;
  dVar5 = DAT_02323d38;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_38;
  local_40 = param_3;
  _objc_getAssociatedObject(local_38,&DAT_028ccb60);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_38;
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,&DAT_028ccb60,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar2 = local_30;
    FUN_007a7a3c(local_30,local_38);
    local_51 = (byte)uVar2;
    uVar2 = local_30;
    FUN_007a7bb4(local_30,local_38);
    local_52 = (byte)uVar2;
    dVar5 = 0.0;
    local_60 = 0.0;
    if (DAT_028ccb20 == (code *)0x0) {
      FUN_007a793c(local_38,local_40);
      local_60 = dVar5;
    }
    else {
      (*DAT_028ccb20)(local_30,PTR_s_tableView_heightForHeaderInSecti_026a2348,local_38,local_40);
      local_60 = dVar5;
    }
    local_68 = local_60;
    local_69 = true;
    if (local_60 <= dVar1) {
      local_69 = local_60 == *(double *)PTR__UITableViewAutomaticDimension_02578200;
    }
    if (((local_51 & 1) != 0) || ((local_52 & 1) != 0)) {
      uVar2 = local_38;
      local_158 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dataSource_0269e800);
      _objc_retainAutoreleasedReturnValue();
      local_118 = uVar2;
      if (uVar2 == 0) {
        local_118 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_118;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_78;
      FUN_007a7d14(local_78,local_38);
      if ((-1 < local_40) && (local_40 < (long)uVar2)) {
        uVar3 = local_78;
        FUN_007a7e34(local_40 - uVar2,local_78,local_38,local_40);
        if ((local_52 & 1) == 0) {
          if (((local_51 & 1) == 0) || (local_40 != 1)) {
            if (((local_51 & 1) != 0) && (local_40 == 2)) {
              if ((local_69 & 1) == 0) {
                FUN_007a7f64(0);
              }
              else {
                local_158 = local_60;
              }
              local_68 = local_158;
            }
          }
          else {
            if ((local_69 & 1) == 0) {
              FUN_007a7f64(1);
              local_148 = local_158;
            }
            else {
              local_148 = local_60;
            }
            local_68 = local_148;
          }
        }
        else if ((long)uVar3 < 1) {
          if (local_60 <= dVar1) {
            local_68 = dVar1;
          }
          else {
            local_68 = local_60;
          }
        }
        else if ((local_40 == 0) ||
                (puVar4 = PTR_WCRefineTelegramTabStripView_026ce638,
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineTelegramTabStripView_026ce638,
                           PTR_s_occupiesSectionHeader__026a3200,local_40), ((ulong)puVar4 & 1) != 0
                )) {
          local_68 = local_60;
        }
        else {
          FUN_00798e08();
          local_68 = local_158;
        }
      }
      _objc_storeStrong(&local_78,0);
    }
    uVar2 = local_38;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,&DAT_028ccb60,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_28 = local_68;
  }
  else {
    FUN_007a793c(local_38,local_40);
    local_28 = dVar5;
  }
  local_50 = 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

