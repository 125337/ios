// FUN_00553ca4 @ 00553ca4

void FUN_00553ca4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_48;
  long local_40;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  (&DAT_028cb410)[param_1] = 0;
  local_18 = param_1;
  FUN_005522d4();
  uVar2 = local_18;
  FUN_00552120();
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(&DAT_028cb390 + local_18 * 8),PTR_s_removeAllObjects_0269d508);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(&DAT_028cb380 + local_18 * 8),PTR_s_removeAllObjects_0269d508);
  }
  else {
    lVar1 = *(long *)(&DAT_028cb390 + local_18 * 8);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(&DAT_028cb390 + local_18 * 8);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_20 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(&DAT_028cb390 + local_18 * 8),PTR_s_removeObjectAtIndex__0269d530,0
                );
      uVar2 = local_20;
      FUN_00553818();
      _objc_retainAutoreleasedReturnValue();
      local_38[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(&DAT_028cb380 + local_18 * 8),PTR_s_removeObject__0269d678,
                   local_38[0]);
      }
      local_40 = 0;
      local_48 = 0;
      uVar2 = local_20;
      FUN_00552444(local_20,local_18,&local_48);
      _objc_storeStrong(&local_40,local_48);
      if (((uVar2 & 1) != 0) &&
         (lVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         lVar1 != 0)) {
        uVar2 = *(ulong *)(&DAT_028cb370 + local_18 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_40);
        if ((uVar2 & 1) == 0) {
          FUN_00554008(local_20,local_18);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(&DAT_028cb370 + local_18 * 8),PTR_s_addObject__0269d180,
                     local_40);
        }
      }
      lVar1 = *(long *)(&DAT_028cb390 + local_18 * 8);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
      if (lVar1 != 0) {
        FUN_00552798(lVar1,local_18);
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(local_38,0);
      _objc_storeStrong(&local_20,0);
    }
  }
  return;
}

