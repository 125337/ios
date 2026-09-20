// FUN_005a74a8 @ 005a74a8

void FUN_005a74a8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  long *local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  plVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar3,param_1);
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  FUN_005c7c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_30;
  local_48 = plVar3;
  if (plVar3 == (long *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_vQgRNS_u);
    local_58 = 1;
  }
  else {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    plVar3 = local_48;
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (lVar2 < lVar4) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_28;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_005c8804;
      local_80 = &DAT_0257e288;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = lVar2;
      local_70 = local_30;
      local_68 = local_38;
      local_60 = local_40;
      FUN_005c7c80(plVar3,lVar4,&local_98);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      _objc_storeStrong(&local_78,0);
      local_58 = 0;
    }
    else {
      if ((local_38 < 1) || (local_40 != 0)) {
        if (local_38 < 1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_OX_0RvQ1Y_);
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__OX_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__OX_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      local_58 = 1;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

