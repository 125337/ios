// FUN_004e1d70 @ 004e1d70

void FUN_004e1d70(double param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  double local_98;
  long local_28;
  long local_20;
  long local_18;
  
  lVar3 = *(long *)(param_2 + 0x20);
  local_20 = param_2;
  local_18 = param_2;
  _objc_getAssociatedObject(lVar3,&DAT_028cadf3);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar3;
  if (lVar3 == *(long *)(param_2 + 0x28)) {
    _objc_setAssociatedObject(*(undefined8 *)(param_2 + 0x20),&DAT_028cadf3,0,1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    _CFAbsoluteTimeGetCurrent();
    local_98 = *(double *)(param_2 + 0x30);
    if (local_98 <= 0.5) {
      local_98 = 0.5;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1 + local_98,puVar4,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar6,&DAT_028cadf4,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar7 = *(ulong *)(param_2 + 0x20);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = false;
    if ((uVar7 & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar3 == 0;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    if (!bVar1) {
      uVar2 = (uint)*(undefined8 *)(param_2 + 0x20);
      FUN_004e074c();
      if ((uVar2 & 1) == 0) {
        uVar5 = *(ulong *)(param_2 + 0x20);
        FUN_004e1974(uVar5,0);
        uVar7 = uVar5;
        FUN_004e1958();
        if ((uVar7 & 1) != 0) {
          FUN_004e20d0(*(undefined8 *)(param_2 + 0x20),uVar5);
        }
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

