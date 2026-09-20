// FUN_0008bf48 @ 0008bf48

byte FUN_0008bf48(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_11 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_20;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UICollectionView_026ce1f8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar2 = local_20;
      if ((uVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UIWindow_026cdf68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar3 = local_20;
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar3 & 1) == 0) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_11 = (byte)uVar3 & 1;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            goto LAB_0008c1d8;
          }
        }
      }
    }
    local_11 = 1;
  }
LAB_0008c1d8:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

