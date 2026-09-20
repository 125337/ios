// normalizeCircularPageIfNeeded:pageWidth: @ 0178f96c

/* Function Stack Size: 0x20 bytes */

long_long WCPluginsViewControllerBehavior::normalizeCircularPageIfNeeded_pageWidth_
                    (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  ID IVar1;
  ID IVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cyclicPagingEnabled_026b45e0);
  local_18 = param_3;
  if ((IVar1 & 1) != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((long)param_3 < 1) {
      dVar3 = (double)(long)IVar2 * param_4;
      uVar4 = 0;
      FUN_01783fc4(param_3);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageScrollView_026b4530);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar3,uVar4);
      (*(code *)PTR__objc_release_02578630)(param_1);
      local_18 = IVar2 - 1;
    }
    else if ((long)param_3 < (long)(IVar2 + 1)) {
      local_18 = param_3 - 1;
    }
    else {
      uVar4 = 0;
      FUN_01783fc4(param_3 - (IVar2 + 1));
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageScrollView_026b4530);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(param_4,uVar4);
      (*(code *)PTR__objc_release_02578630)(param_1);
      local_18 = 0;
    }
  }
  return local_18;
}

