// FUN_0055f934 @ 0055f934

void FUN_0055f934(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,byte param_5
                 )

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_68 [3];
  cfstringStruct *local_50;
  undefined4 local_44;
  long local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_31 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_1;
  uStack_18 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_3,PTR_s_WCRefineFindTimelineDataItem_026a5088);
  _objc_retainAutoreleasedReturnValue();
  local_40 = param_3;
  if (param_3 == 0) {
    local_44 = 1;
  }
  else {
    pcVar1 = &cf_WCLikeButton;
    _NSClassFromString();
    local_50 = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      _objc_alloc_init();
      local_68[0] = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_setValue_forKey__0269d300,local_40,&cf_dataItem);
        if ((local_31 & 1) == 0) {
          pcVar1 = local_68[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68[0],PTR_s_respondsToSelector__026ca818,
                     PTR_s_performUnLikeWithoutAnimation_026a51d0);
          if (((ulong)pcVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68[0],PTR_s_performSelector__026ca7b8,
                       PTR_s_performUnLikeWithoutAnimation_026a51d0);
          }
        }
        else {
          pcVar1 = local_68[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68[0],PTR_s_respondsToSelector__026ca818,PTR_s_onLikeFriend_026a51c8);
          if (((ulong)pcVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68[0],PTR_s_performSelector__026ca7b8,PTR_s_onLikeFriend_026a51c8);
          }
        }
      }
      _objc_storeStrong(local_68,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,uStack_18,local_28,PTR_s_WCRefineAddLikeAnimation_withTap_026a50b8,
               local_31 & 1);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

