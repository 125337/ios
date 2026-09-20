// FUN_0024238c @ 0024238c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0024238c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong local_1e0;
  ulong local_108;
  ulong local_f8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [8];
  undefined **local_98;
  undefined1 auStack_90 [8];
  cfstringStruct *local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  char *local_50;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 *puVar2;
  
  puVar2 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_00243818();
  if ((uVar1 & 1) != 0) {
    pcVar3 = "EditImageForwardAndEditLogicController";
    _objc_getClass();
    uVar8 = local_28;
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_delegateEx_026a0d70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_58 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_buttonTitleList_026a0d78);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar4;
    if ((local_50 != (char *)0x0) &&
       (uVar4 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_50),
       uVar8 = local_60, (uVar4 & 1) != 0)) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar8 & 1) != 0) {
        local_61 = 0;
        local_70 = 0;
        for (local_78 = 0; uVar8 = local_78, uVar4 = local_60,
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0), uVar8 < uVar4;
            local_78 = local_78 + 1) {
          uVar8 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          FUN_002438ec();
          _objc_retainAutoreleasedReturnValue();
          local_80 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          uVar8 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_S0RJ_Y)
          ;
          if ((uVar8 & 1) != 0) {
            local_61 = 1;
          }
          uVar1 = (uint)local_80;
          FUN_00243b74();
          if ((uVar1 & 1) != 0) {
            local_70 = local_78;
          }
          _objc_storeStrong(&local_80,0);
        }
        if ((local_61 & 1) == 0) {
          pcVar6 = &cf_S0RJ_Y;
          FUN_00243e28(&cf_S0RJ_Y,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
            uVar8 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            if (uVar8 != 0) {
              local_f8 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
              _objc_retainAutoreleasedReturnValue();
              local_108 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
            }
            _NSLog(&
                   cf__wcr__edit_image_send_menuinjectionfailed_cannotcreateitemexistingCount__lufirstClass___
                  );
            if (uVar8 != 0) {
              (*(code *)PTR__objc_release_02578630)(local_108);
              (*(code *)PTR__objc_release_02578630)(local_f8);
            }
            (*(code *)PTR__objc_release_02578630)(uVar8);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_setEventAction__026a0d80);
            if (((ulong)pcVar6 & 1) != 0) {
              _objc_initWeak(auStack_90,local_58);
              ppuVar7 = &local_c0;
              local_c0 = PTR___NSConcreteStackBlock_02578660;
              local_b8 = 0xc2000000;
              local_b4 = 0;
              local_b0 = FUN_0024414c;
              local_a8 = &DAT_02578da0;
              _objc_copyWeak(auStack_a0,auStack_90);
              _objc_retainBlock();
              pcVar6 = local_88;
              puVar5 = PTR_s_setEventAction__026a0d80;
              local_98 = ppuVar7;
              _objc_retainBlock();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar5);
              (*(code *)PTR__objc_release_02578630)(ppuVar7);
              _objc_storeStrong(&local_98,0);
              _objc_destroyWeak(auStack_a0);
              _objc_destroyWeak(auStack_90);
            }
            uVar4 = local_60;
            uVar8 = local_70;
            pcVar6 = local_88;
            local_1e0 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
            if (uVar8 < local_1e0) {
              local_1e0 = uVar8;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_insertObject_atIndex__0269eac0,pcVar6,local_1e0);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
            uVar8 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar8;
            FUN_00244ef4();
            _objc_retainAutoreleasedReturnValue();
            _NSLog(&
                   cf__wcr__edit_image_send_menuinjectedindex__lucount__ludelegate___forwardTitle___
                  );
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_release_02578630)(uVar8);
          }
          _objc_storeStrong(&local_88,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
          _NSLog(&cf__wcr__edit_image_send_menualreadyinjectedcount__lu);
        }
      }
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  (*DAT_028c9358)(local_28,local_30,local_38);
  _objc_storeStrong(&local_38,0);
  return;
}

