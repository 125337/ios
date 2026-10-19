// changeCategory @0xc0c8


/* Function Stack Size: 0x10 bytes */



void WCMInboxController::changeCategory(ID param_1,SEL param_2)



{

  byte bVar1;

  byte bVar2;

  undefined *puVar3;

  byte bVar4;

  uint uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  cfstringStruct *local_208;

  ulong local_178;

  ulong local_170;

  undefined8 local_158;

  undefined8 local_138;

  byte local_12c;

  byte local_12b;

  byte local_12a;

  byte local_129;

  long local_128;

  undefined4 local_11c;

  undefined8 local_118;

  undefined1 auStack_110 [8];

  long local_108;

  long *local_100;

  undefined8 local_d0;

  undefined8 local_c8;

  long local_c0;

  SEL local_b8;

  ID local_b0;

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_b8 = param_2;

  local_b0 = param_1;

  _objc_msgSend_categories(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  lVar7 = _objc_msgSend_selectedSegmentIndex(uVar6,local_158);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  local_c0 = lVar7;

  local_c8 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

  _memset(auStack_110,0,0x40);

  _objc_msgSend_messages(local_b0,local_158);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_170 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                        (uVar6,local_158,auStack_110,auStack_a8,0x10);

  if (local_170 != 0) {

    lVar7 = *local_100;

    local_178 = 0;

    do {

      do {

        if (*local_100 - lVar7 != 0) {

          _objc_enumerationMutation(*local_100 - lVar7,uVar6);

        }

        puVar3 = PTR____NSArray0__struct_00110718;

        local_d0 = *(undefined8 *)(local_108 + local_178 * 8);

        _Call(local_d0,&cf_comment);

        local_118 = _objc_retainAutoreleasedReturnValue();

        _Call(local_118,&cf_username,puVar3);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        _Text();

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_account(local_b0,local_158);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        uVar5 = _objc_msgSend_isEqual_(uVar9,local_158);

        (*(code *)PTR__objc_release_00110458)(uVar10);

        (*(code *)PTR__objc_release_00110458)(uVar9);

        (*(code *)PTR__objc_release_00110458)(uVar8);

        puVar3 = PTR____NSArray0__struct_00110718;

        if ((uVar5 & 1) == 0) {

          _Call(local_118,&cf_type);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          lVar11 = _objc_msgSend_integerValue(uVar8,local_158);

          (*(code *)PTR__objc_release_00110458)(uVar8);

          local_128 = lVar11;

          local_129 = _objc_msgSend_isMine_(local_b0,local_158,local_d0);

          _Call(local_118,&cf_refUserName,puVar3);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          _Text();

          uVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_account(local_b0,local_158);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          bVar4 = _objc_msgSend_isEqual_(uVar9,local_158);

          (*(code *)PTR__objc_release_00110458)(uVar10);

          (*(code *)PTR__objc_release_00110458)(uVar9);

          (*(code *)PTR__objc_release_00110458)(uVar8);

          bVar2 = 0;

          if (local_128 == 1) {

            bVar2 = local_129;

          }

          local_12b = bVar2 & 1;

          if ((((local_128 == 2) || (local_128 == 3)) || (bVar1 = 0, local_128 == 8)) &&

             (bVar1 = 1, (local_129 & 1) == 0)) {

            bVar1 = bVar4;

          }

          local_12c = bVar1 & 1;

          local_12a = bVar4;

          if ((((local_c0 == 0) && (((bVar2 & 1) != 0 || ((bVar1 & 1) != 0)))) ||

              ((local_c0 == 1 && ((bVar2 & 1) != 0)))) || ((local_c0 == 2 && ((bVar1 & 1) != 0)))) {

            _objc_msgSend_addObject_(local_c8,local_158,local_d0);

          }

          local_11c = 0;

        }

        else {

          local_11c = 3;

        }

        _objc_storeStrong(&local_118,0);

        local_178 = local_178 + 1;

      } while (local_178 < local_170);

      local_170 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar6,local_158,auStack_110,auStack_a8,0x10);

      local_178 = 0;

    } while (local_170 != 0);

  }

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _objc_msgSend_setFiltered_(local_b0,local_158,local_c8);

  _objc_msgSend_tableView(local_b0,local_158);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_reloadData(uVar6,local_158);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  lVar7 = _objc_msgSend_count(local_c8,local_158);

  if (lVar7 == 0) {

    local_138 = _objc_opt_new(&_OBJC_CLASS___UILabel);

    if (local_c0 == 1) {

      local_208 = &cf_fe_R_vp_mo_;

    }

    else {

      local_208 = &cf_fe_R_vmo_;

      if (local_c0 != 2) {

        local_208 = &cf_fe_R_vmo_;

      }

    }

    _objc_msgSend_setText_(local_138,local_158,local_208);

    _objc_msgSend_setTextAlignment_(local_138,local_158,1);

    _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_158);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTextColor_(local_138,local_158);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    _objc_msgSend_systemFontOfSize_(0x402c000000000000,&_OBJC_CLASS___UIFont,local_158);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(local_138,local_158);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    uVar6 = local_138;

    _objc_msgSend_tableView(local_b0,local_158);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundView_(uVar8,local_158,uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    _objc_storeStrong(&local_138,0);

  }

  else {

    _objc_msgSend_tableView(local_b0,local_158);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundView_(uVar6,local_158,0);

    (*(code *)PTR__objc_release_00110458)(uVar6);

  }

  _objc_storeStrong(&local_c8,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}




