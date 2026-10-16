// ##### initTableViewData @ 00117c1c
// #####################################

/* Function Stack Size: 0x10 bytes */

void BubbleSettingViewController::initTableViewData(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_74;
  
  puVar2 = PTR_s_tableViewManager_00489dc8;
  _objc_msgSend();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_74 = 0x17cf548b;
  do {
    while( true ) {
      while( true ) {
        while (0x4c34f68f < local_74) {
          if (local_74 < 0x7e3928d3) {
            if (local_74 == 0x4c34f690) {
              uVar1 = DAT_004a0898 ^ DAT_004a089c;
              _objc_msgSend(uVar3,PTR_s_clearAllSection_00489dd0);
              _objc_release(uVar3);
              addBubbleMergeSection(param_1,(SEL)PTR_s_addBubbleMergeSection_0048ace8);
              addAssetsLoadSection(param_1,(SEL)PTR_s_addAssetsLoadSection_0048acf0);
              addMsgTimeSection(param_1,(SEL)PTR_s_addMsgTimeSection_0048acf8);
              local_74 = 0x4c34f690;
              if (uVar1 != 0x753c8696) {
                local_74 = 0x7e3928d3;
              }
            }
            else if (local_74 == 0x6d696192) {
              uVar1 = 0;
              if (DAT_004a08a4 != 0) {
                uVar1 = DAT_004a08a0 / DAT_004a08a4;
              }
              local_74 = -0x7d38eff4;
              if (uVar1 == 0xd08620a6) {
                local_74 = 0x7e9437b8;
              }
            }
          }
          else if (local_74 == 0x7e3928d3) {
            local_74 = 0x6d696192;
          }
          else if (local_74 == 0x7e9437b8) {
            addAvatarSection(param_1,(SEL)PTR_s_addAvatarSection_0048ad00);
            _objc_msgSend(param_1,puVar2);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,PTR_s_reloadTableView_00489e08);
            _objc_release(uVar4);
            local_74 = -0x7d38eff4;
          }
        }
        if (local_74 < -0x4371fe1c) break;
        if (local_74 == -0x4371fe1c) {
          _objc_msgSend(uVar3,PTR_s_clearAllSection_00489dd0);
          _objc_release(uVar3);
          addBubbleMergeSection(param_1,(SEL)PTR_s_addBubbleMergeSection_0048ace8);
          addAssetsLoadSection(param_1,(SEL)PTR_s_addAssetsLoadSection_0048acf0);
          addMsgTimeSection(param_1,(SEL)PTR_s_addMsgTimeSection_0048acf8);
          local_74 = 0x4c34f690;
        }
        else if ((local_74 == 0x17cf548b) &&
                (local_74 = -0x4371fe1c,
                0x25192db < ((DAT_004a0890 & DAT_004a0894) * -0x2c133e3d | 0x210db61) * -0x72febaf0)
                ) {
          local_74 = 0x4c34f690;
        }
      }
      if (local_74 != -0x7d38eff4) break;
      uVar1 = DAT_004a08a8 & DAT_004a08ac;
      addAvatarSection(param_1,(SEL)PTR_s_addAvatarSection_0048ad00);
      _objc_msgSend(param_1,puVar2);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,PTR_s_reloadTableView_00489e08);
      _objc_release(uVar4);
      local_74 = -0x784d1303;
      if (0xe28063cd < ((uVar1 ^ 0x60410) & 0x7bff5d95 | 0x7a585981)) {
        local_74 = 0x7e9437b8;
      }
    }
  } while (local_74 != -0x784d1303);
  return;
}



// #####################################