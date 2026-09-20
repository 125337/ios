// FUN_00843ae4 @ 00843ae4

byte FUN_00843ae4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_Finder);
  if (((((((uVar1 & 1) == 0) &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_Live),
         (uVar1 & 1) == 0)) &&
        (uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_containsString__0269d0b0,&cf_FullScreenViewController),
        (uVar1 & 1) == 0)) &&
       ((uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_containsString__0269d0b0,&cf_RedEnvelopes), (uVar1 & 1) == 0 &&
        (uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_containsString__0269d0b0,&cf_SharePreConfirm), (uVar1 & 1) == 0)))
       ) && ((uVar1 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28,PTR_s_containsString__0269d0b0,&cf_PageSheet), (uVar1 & 1) == 0 &&
             ((uVar1 = local_28,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_containsString__0269d0b0,&cf_CommentDetail),
              (uVar1 & 1) == 0 &&
              (uVar1 = local_28,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_containsString__0269d0b0,&cf_SearchController),
              (uVar1 & 1) == 0)))))) &&
     ((uVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_FTSMsg),
      (uVar1 & 1) == 0 &&
      ((uVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_MsgSearch),
       (uVar1 & 1) == 0 &&
       (uVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_isEqualToString__0269ccc8,&cf_WCNewCommentListViewController),
       (uVar1 & 1) == 0)))))) {
    local_11 = 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

