// FUN_002f21b4 @ 002f21b4

void FUN_002f21b4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined *local_168;
  uint local_12c;
  byte local_120;
  undefined *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_78 [3];
  byte local_75;
  int local_74;
  undefined *local_70 [3];
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  local_58 = param_1;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = &cf_WCRefineGestureScreenshot;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_38,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_postNotificationName_object_user_026a1e90,
             &cf_com_qimiao_wcrefine_will_take_screenshot,0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)();
  FUN_002f2d64();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  local_70[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_WCRefineGestureScreenshot;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_40,&local_48,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_postNotificationName_object_user_026a1e90,
             &cf_com_qimiao_wcrefine_did_take_screenshot,0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_70[0] == (undefined *)0x0) {
    FUN_002eeb0c(&cf__bV1Y_);
    local_74 = 1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    local_120 = 0;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_screenshotWatermarkGestureEnable_026a1ee8);
      local_120 = (byte)uVar6;
    }
    local_75 = local_120 & 1;
    uVar5 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_screenshotFrameEnabled_026a1ef0);
    local_12c = 0;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_screenshotFrameGestureEnabled_026a1ef8);
      local_12c = (uint)uVar6;
    }
    local_78[2] = (byte)local_12c & 1;
    if (((local_75 & 1) == 0) || ((local_12c & 1) == 0)) {
      if ((local_75 & 1) == 0) {
        if ((local_12c & 1) == 0) {
          FUN_002f3b38(local_70[0]);
          local_74 = 0;
        }
        else {
          uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
          FUN_002f3a6c();
          if ((uVar1 & 1) == 0) {
            puVar2 = local_70[0];
            FUN_002f4a20();
            _objc_retainAutoreleasedReturnValue();
            local_b8 = puVar2;
            if ((DAT_028c9a20 & 1) == 0) {
              if ((puVar2 == (undefined *)0x0) || (puVar2 == local_70[0])) {
                puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70)
                ;
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar2);
                FUN_002eeb0c(&cf__bV_Y6R0RjR4_g);
              }
              else {
                puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70)
                ;
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar2);
                FUN_002eefbc(&cf_WYX_bV_Y6R0RjR4_g);
              }
              local_74 = 0;
            }
            else {
              local_74 = 1;
            }
            _objc_storeStrong(&local_b8,0);
            if (local_74 != 0) goto LAB_002f2d10;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            local_90 = puVar2;
            FUN_002f3b38(local_70[0]);
            pcVar7 = &cf_WCRefineScreenshotFrameProcessor;
            _NSClassFromString();
            pcVar8 = &cf_processGestureScreenshotWithNotificationTime_;
            local_98 = pcVar7;
            _NSSelectorFromString();
            local_a0 = pcVar8;
            if ((local_98 != (cfstringStruct *)0x0) &&
               (pcVar7 = local_98,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_98,PTR_s_respondsToSelector__026ca818,pcVar8),
               ((ulong)pcVar7 & 1) != 0)) {
              pcVar7 = local_98;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_98,PTR_s_methodSignatureForSelector__0269e190,local_a0);
              _objc_retainAutoreleasedReturnValue();
              local_a8 = pcVar7;
              if (pcVar7 != (cfstringStruct *)0x0) {
                puVar2 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSInvocation_026ce208,
                           PTR_s_invocationWithMethodSignature__0269e1a0,pcVar7);
                _objc_retainAutoreleasedReturnValue();
                local_b0 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTarget__0269e1a8,local_98);
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSelector__0269e1b0,local_a0)
                ;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b0,PTR_s_setArgument_atIndex__0269eae8,&local_90,2);
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_invoke_0269e1b8);
                _objc_storeStrong(&local_b0,0);
              }
              _objc_storeStrong(&local_a8,0);
            }
            _objc_storeStrong(&local_90,0);
          }
          local_74 = 1;
        }
      }
      else {
        puVar2 = local_70[0];
        FUN_002f4500();
        _objc_retainAutoreleasedReturnValue();
        local_168 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_168 = local_70[0];
        }
        local_88 = puVar2;
        FUN_002f3b38(local_168);
        local_74 = 1;
        _objc_storeStrong(&local_88,0);
      }
    }
    else {
      local_78[1] = 0;
      local_78[0] = 0;
      puVar2 = local_70[0];
      FUN_002f3498(local_70[0],local_78 + 1,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        _objc_storeStrong(&local_80,local_70[0]);
      }
      if ((DAT_028c9a20 & 1) == 0) {
        uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
        FUN_002f3a6c();
        if ((uVar1 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_78[0] & 1) == 0) {
            FUN_002eeb0c(&cf__bV_Y6R0RjR4_g);
          }
          else {
            FUN_002eefbc(&cf_WYX_bV_Y6R0RjR4_g);
          }
        }
        else if ((local_78[0] & 1) == 0) {
          FUN_002f3b38(local_80);
        }
        else {
          FUN_002f401c(local_80);
        }
      }
      else {
        uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
        FUN_002f3a6c();
        if ((uVar1 & 1) != 0) {
          FUN_002f3b38(local_80);
        }
      }
      local_74 = 1;
      _objc_storeStrong(&local_80,0);
    }
  }
LAB_002f2d10:
  _objc_storeStrong(local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

