// FUN_0009ddf0 @0x9ddf0


void FUN_0009ddf0(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  long *plVar12;

  undefined1 auVar13 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  long local_a8;

  undefined8 local_a0;

  long local_98;

  long local_90;

  long local_88;

  undefined1 local_79;

  cfstringStruct *local_78;

  long local_70;

  char *local_68;

  

  (*DAT_003e7930)();

  auVar13 = _objc_opt_respondsToSelector(param_1,"m_contact");

  if ((auVar13._0_8_ & 1) == 0) {

    lVar3 = 0;

  }

  else {

    FUN_002a6080(param_1,auVar13._8_8_,&cf_m_contact);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002986c0();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    if ((lVar3 != 0) && (uVar4 = FUN_00295fa0(lVar3,extraout_x1,&cf__chatroom), (uVar4 & 1) == 0)) {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6648,lVar3,1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6650,lVar3,1);

      _objc_retain(param_1);

      uVar2 = _object_getClass(param_1);

      lVar5 = _class_getInstanceVariable(uVar2,"m_tableViewInfo");

      if (lVar5 == 0) {

        plVar12 = (long *)0x0;

      }

      else {

        lVar5 = _ivar_getOffset();

        plVar12 = (long *)(param_1 + lVar5);

      }

      _objc_release(param_1);

      lVar5 = *plVar12;

      _objc_retain(lVar5);

      if (lVar5 != 0) {

        FUN_00299c80(lVar5,extraout_x1_00,"getAllSections");

        lVar6 = _objc_retainAutoreleasedReturnValue();

        if ((lVar6 != 0) && (lVar7 = FUN_00293860(lVar6), lVar7 != 0)) {

          FUN_00295440(lVar6);

          uVar2 = _objc_retainAutoreleasedReturnValue();

          iVar1 = FUN_000bc9c0();

          if (iVar1 != 0) {

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e6658);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            uVar4 = FUN_002924e0();

            _objc_release(uVar8);

            if ((uVar4 & 1) == 0) {

              uVar8 = _NSClassFromString(&cf_WCTableViewCellManager);

              auVar13 = _NSSelectorFromString(&cf_switchCellForSel_target_title_on_);

              uVar9 = auVar13._0_8_;

              FUN_00298d40(uVar8,auVar13._8_8_,uVar9);

              auVar13 = _objc_retainAutoreleasedReturnValue();

              lVar7 = auVar13._0_8_;

              if (lVar7 != 0) {

                FUN_002975a0(&_OBJC_CLASS___NSInvocation,auVar13._8_8_,lVar7);

                auVar13 = _objc_retainAutoreleasedReturnValue();

                uVar10 = auVar13._0_8_;

                FUN_002a1ce0(uVar10,auVar13._8_8_,uVar8);

                FUN_002a13a0(uVar10,extraout_x1_01,uVar9);

                local_68 = "onAISwitchChanged:";

                _objc_retain(param_1);

                local_78 = &cf_A;

                local_70 = param_1;

                local_79 = FUN_000bca40(lVar3);

                FUN_0029cce0(uVar10,extraout_x1_02,&local_68,2);

                FUN_0029cce0(uVar10,extraout_x1_03,&local_70,3);

                FUN_0029cce0(uVar10,extraout_x1_04,&local_78,4);

                FUN_0029cce0(uVar10,extraout_x1_05,&local_79,5);

                FUN_002975c0(uVar10);

                local_88 = 0;

                FUN_00295ae0(uVar10,extraout_x1_06,&local_88);

                if (local_88 != 0) {

                  FUN_00299ca0(uVar2,extraout_x1_07,"addCell:");

                  _objc_setAssociatedObject

                            (param_1,PTR_LOOP_003e6658,PTR____kCFBooleanTrue_00388320,1);

                }

                _objc_release(local_78);

                _objc_release(local_70);

                _objc_release(uVar10);

              }

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e6660);

              uVar10 = _objc_retainAutoreleasedReturnValue();

              uVar4 = FUN_002924e0();

              _objc_release(uVar10);

              if ((uVar4 & 1) == 0) {

                FUN_00298d40(uVar8,extraout_x1_08,uVar9);

                auVar13 = _objc_retainAutoreleasedReturnValue();

                lVar11 = auVar13._0_8_;

                if (lVar11 != 0) {

                  FUN_002975a0(&_OBJC_CLASS___NSInvocation,auVar13._8_8_,lVar11);

                  auVar13 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = auVar13._0_8_;

                  FUN_002a1ce0(uVar10,auVar13._8_8_,uVar8);

                  FUN_002a13a0(uVar10,extraout_x1_09,uVar9);

                  local_68 = "onAICustomPromptSwitchChanged:";

                  _objc_retain(param_1);

                  local_78 = &cf_USrA;

                  local_70 = param_1;

                  local_79 = FUN_000bcb24(lVar3);

                  FUN_0029cce0(uVar10,extraout_x1_10,&local_68,2);

                  FUN_0029cce0(uVar10,extraout_x1_11,&local_70,3);

                  FUN_0029cce0(uVar10,extraout_x1_12,&local_78,4);

                  FUN_0029cce0(uVar10,extraout_x1_13,&local_79,5);

                  FUN_002975c0(uVar10);

                  local_88 = 0;

                  FUN_00295ae0(uVar10,extraout_x1_14,&local_88);

                  if (local_88 != 0) {

                    FUN_00299ca0(uVar2,extraout_x1_15,"addCell:");

                    _objc_setAssociatedObject

                              (param_1,PTR_LOOP_003e6660,PTR____kCFBooleanTrue_00388320,1);

                  }

                  _objc_release(local_78);

                  _objc_release(local_70);

                  _objc_release(uVar10);

                }

                _objc_release(lVar11);

              }

              _objc_release(lVar7);

            }

          }

          iVar1 = FUN_000a89d8();

          if (iVar1 != 0) {

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e6668);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            uVar4 = FUN_002924e0();

            _objc_release(uVar8);

            if ((uVar4 & 1) == 0) {

              local_c8 = PTR___NSConcreteStackBlock_003886f0;

              local_c0 = 0xc2000000;

              local_b8 = FUN_000bcc08;

              puStack_b0 = &DAT_0038b360;

              local_90 = param_1;

              _objc_retain(lVar3);

              local_a8 = lVar3;

              _objc_retain(uVar2);

              local_a0 = uVar2;

              _objc_retain(lVar5);

              local_98 = lVar5;

              _dispatch_async(PTR___dispatch_main_q_00388740,&local_c8);

              _objc_release(local_98);

              _objc_release(local_a0);

              _objc_release(local_a8);

            }

          }

          _objc_release(uVar2);

        }

        _objc_release(lVar6);

      }

      _objc_release(lVar5);

    }

  }

  _objc_release(lVar3);

  return;

}




