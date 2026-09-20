// refreshAvatarPreviewOnly @ 01815adc

/* Function Stack Size: 0x10 bytes */

void WCRefineAvatarCornerBeautifyViewController::refreshAvatarPreviewOnly(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID local_80;
  undefined *local_78;
  ID local_70;
  ID local_68;
  long local_60;
  undefined *local_58;
  undefined4 local_4c;
  ID local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarPreviewContainerView_026b6070);
  _objc_retainAutoreleasedReturnValue();
  local_48 = param_1;
  if (param_1 == 0) {
    local_4c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    for (local_60 = 0; local_60 < 3; local_60 = local_60 + 1) {
      IVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_viewWithTag__026cabe0,
                 "/System/Library/Frameworks/CoreText.framework/CoreText" + local_60 + 0x2c);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar5;
      if (IVar5 == 0) {
        local_4c = 4;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_viewWithTag__026cabe0,
                   "/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore" +
                   local_60 + 0x40);
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_removeFromSuperview_026ca800);
        puVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        IVar5 = local_38;
        local_78 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_createAvatarFrameRealtimePreview_026b6058,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_80 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_setTag__026caa80,
                   "/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore" +
                   local_60 + 0x40);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addSubview__026ca4c0,local_80);
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_70,0);
        local_4c = 0;
      }
      _objc_storeStrong(&local_68,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layoutIfNeeded_026ca790);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

