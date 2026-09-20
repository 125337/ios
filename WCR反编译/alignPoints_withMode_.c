// alignPoints:withMode: @ 01d5752c

/* Function Stack Size: 0x20 bytes */

void WCRefineScreenshotFrameEditorViewController::alignPoints_withMode_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  undefined *puVar2;
  double in_d0;
  double dVar3;
  double in_d1;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (lVar1 == 4) {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = in_d0;
    dStack_68 = in_d1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = local_70;
    dStack_78 = dStack_68;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_90 = local_80;
    dStack_88 = dStack_78;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (param_4 == 0) {
      local_80 = (double)(long)((in_d0 + local_80) / 2.0);
      local_90 = (double)(long)((local_70 + local_90) / 2.0);
      dStack_68 = (double)(long)((in_d1 + dStack_68) / 2.0);
      dStack_88 = (double)(long)((dStack_78 + dStack_88) / 2.0);
      local_60 = local_80;
      dStack_58 = dStack_68;
      FUN_01d47748();
      local_70 = local_90;
      FUN_01d47748();
      dStack_78 = dStack_88;
      FUN_01d47748();
      FUN_01d47748();
    }
    else {
      local_60 = in_d0;
      dStack_58 = in_d1;
      if (param_4 == 1) {
        dVar3 = (in_d1 + dStack_68) / 2.0;
        if (ABS(in_d1 - dStack_68) < 50.0) {
          dStack_58 = (double)(long)dVar3;
          dStack_68 = (double)(long)dVar3;
        }
        dVar3 = (dStack_78 + dStack_88) / 2.0;
        if (ABS(dStack_78 - dStack_88) < 50.0) {
          dStack_78 = (double)(long)dVar3;
          dStack_88 = (double)(long)dVar3;
        }
        dVar3 = (in_d0 + local_80) / 2.0;
        if (ABS(in_d0 - local_80) < 50.0) {
          local_60 = (double)(long)dVar3;
          local_80 = (double)(long)dVar3;
        }
        dVar3 = (local_70 + local_90) / 2.0;
        if (ABS(local_70 - local_90) < 50.0) {
          local_70 = (double)(long)dVar3;
          local_90 = (double)(long)dVar3;
        }
      }
      else if (param_4 == 2) {
        if ((0.0 < ABS(in_d1 - dStack_68)) && (ABS(in_d1 - dStack_68) < 20.0)) {
          dVar3 = (in_d1 + dStack_68) / 2.0;
          dStack_58 = (double)(long)dVar3;
          dStack_68 = (double)(long)dVar3;
        }
        if ((0.0 < ABS(dStack_78 - dStack_88)) && (ABS(dStack_78 - dStack_88) < 20.0)) {
          dVar3 = (dStack_78 + dStack_88) / 2.0;
          dStack_78 = (double)(long)dVar3;
          dStack_88 = (double)(long)dVar3;
        }
        if ((0.0 < ABS(in_d0 - local_80)) && (ABS(in_d0 - local_80) < 20.0)) {
          dVar3 = (in_d0 + local_80) / 2.0;
          local_60 = (double)(long)dVar3;
          local_80 = (double)(long)dVar3;
        }
        if ((0.0 < ABS(local_70 - local_90)) && (ABS(local_70 - local_90) < 20.0)) {
          dVar3 = (local_70 + local_90) / 2.0;
          local_70 = (double)(long)dVar3;
          local_90 = (double)(long)dVar3;
        }
      }
    }
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,dStack_58,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,dStack_68,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,dStack_78,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,2);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,dStack_88,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

