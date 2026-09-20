// FUN_000cc6b4 @ 000cc6b4

void FUN_000cc6b4(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_190;
  double local_188;
  double local_88;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  if (local_28 != 0) {
    dVar3 = ABS(param_1);
    local_188 = 0.5;
    if (0.5 <= dVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentOffset_0269dd18);
      local_188 = local_188 + param_1;
      local_88 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_adjustedContentInset_0269dcd0);
      dVar4 = -local_88;
      dVar5 = param_3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentSize_026ca5a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_88 = (dVar5 + param_3) - local_88;
      if (local_88 < dVar4) {
        local_88 = dVar4;
      }
      if (local_188 < dVar4) {
        local_188 = dVar4;
      }
      if (local_88 <= local_188) {
        local_190 = local_88;
      }
      else {
        local_190 = local_188;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentOffset_0269dd18);
      lVar1 = local_28;
      if (0.5 <= ABS(local_190 - local_88)) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar1,&DAT_028c829b,puVar2,1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar3,local_190,local_28,PTR_s_setContentOffset_animated__0269ddd8,0);
        _objc_setAssociatedObject(local_28,&DAT_028c829b,0,1);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

