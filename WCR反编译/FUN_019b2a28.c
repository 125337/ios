// FUN_019b2a28 @ 019b2a28

void FUN_019b2a28(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_30;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = 0;
    local_3c = 1;
  }
  else {
    local_18 = &DAT_028e4420;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258a858);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    local_3d = 0;
    puVar2 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_3d = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______0f__d);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = DAT_028e4410;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4410,PTR_s_objectForKey__0269e048,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar1;
    if (lVar1 == 0) {
      lVar1 = DAT_028e4418;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4418,PTR_s_objectForKey__0269e048,local_48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 == 0) {
        lVar4 = local_30;
        FUN_019b2e6c();
        _objc_retainAutoreleasedReturnValue();
        local_58 = lVar4;
        FUN_019b2f9c(local_38);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = DAT_028e4418;
        local_60 = lVar4;
        if (lVar4 == 0) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,local_48);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_28 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e4410,PTR_s_setObject_forKey__026ca9e8,lVar4,local_48);
          lVar1 = local_60;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = lVar1;
        }
        local_3c = 1;
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      else {
        local_28 = 0;
        local_3c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_3c = 1;
      local_28 = lVar1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

