// FUN_0073cc20 @ 0073cc20

undefined * FUN_0073cc20(void)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = *(undefined8 *)PTR__AVCaptureSessionPreset1920x1080_02578500;
  local_38 = *(undefined8 *)PTR__AVCaptureSessionPreset1280x720_025784f8;
  local_30 = *(undefined8 *)PTR__AVCaptureSessionPreset640x480_02578508;
  local_28 = *(undefined8 *)PTR__AVCaptureSessionPresetMedium_02578518;
  local_20 = *(undefined8 *)PTR__AVCaptureSessionPresetLow_02578510;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return puVar1;
}

