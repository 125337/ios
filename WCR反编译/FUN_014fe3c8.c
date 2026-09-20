// FUN_014fe3c8 @ 014fe3c8

byte FUN_014fe3c8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte local_38;
  uint local_34;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_containsString__0269d0b0,&cf_<wccustomemoji);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_hongbao),
       (uVar2 & 1) != 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_<hongbao);
      if ((((((((uVar2 & 1) == 0) &&
              (uVar2 = local_20,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_containsString__0269d0b0,&cf_<wchongbao), (uVar2 & 1) == 0))
             && (uVar2 = local_20,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_containsString__0269d0b0,&cf_<wxhongbao), (uVar2 & 1) == 0
                )) && ((uVar2 = local_20,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_20,PTR_s_containsString__0269d0b0,&cf_nativehongbao),
                       (uVar2 & 1) == 0 &&
                       (uVar2 = local_20,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_20,PTR_s_containsString__0269d0b0,&cf_receivehongbao),
                       (uVar2 & 1) == 0)))) &&
           ((uVar2 = local_20,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf_hongbaoconfig), (uVar2 & 1) == 0
            && ((uVar2 = local_20,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_containsString__0269d0b0,&cf_c2cbizmessagehandler_hongbao)
                , (uVar2 & 1) == 0 &&
                (uVar2 = local_20,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_containsString__0269d0b0,
                           &cf_wxpay___c2cbizmessagehandler_hongbao), (uVar2 & 1) == 0)))))) &&
          (uVar2 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_containsString__0269d0b0,&cf_festivalhongbao), (uVar2 & 1) == 0)
          ) && ((uVar2 = local_20,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_containsString__0269d0b0,
                           &cf_frhb___c2cbizmessagehandler_hongbao), (uVar2 & 1) == 0 &&
                (uVar2 = local_20,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_containsString__0269d0b0,
                           &cf_weixinhb_startreceivebizhbrequest), (uVar2 & 1) == 0)))) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_containsString__0269d0b0,&cf_<wcpayinfo);
        local_34 = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_containsString__0269d0b0,&cf_wcpayinfo>);
          local_34 = (uint)uVar2;
        }
        if ((local_34 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_containsString__0269d0b0,&cf_c2ctransfer);
          if ((uVar2 & 1) == 0) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf_hongbao);
            local_38 = 1;
            if ((uVar2 & 1) == 0) {
              uVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_containsString__0269d0b0,&cf__O_S);
              local_38 = 1;
              if ((uVar2 & 1) == 0) {
                uVar2 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__)
                ;
                local_38 = (byte)uVar2;
              }
            }
            local_11 = local_38 & 1;
          }
          else {
            local_11 = 0;
          }
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

