// FUN_01ddc8d4 @ 01ddc8d4

void FUN_01ddc8d4(long param_1)

{
  if (*(long *)(param_1 + 0x38) == 3) {
    _UIImageWriteToSavedPhotosAlbum
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               PTR_s_wcr_image_didFinishSavingWithErr_026c5718,0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,&cf_evQQeQCgP);
  }
  return;
}

