// FUN_0032200c @ 0032200c

uint FUN_0032200c(undefined8 param_1)

{
  ulong uVar1;
  uint local_40;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineBorderLayer);
  local_40 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineBorderLayer_Main);
    local_40 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineBorderLayer_Left);
      local_40 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineBorderLayer_Right);
        local_40 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineBorderLayer_Top);
          local_40 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineBorderLayer_Bottom);
            local_40 = (uint)uVar1;
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_40 & 1;
}

