// FUN_01675c40 @ 01675c40

void FUN_01675c40(long param_1)

{
  if (*(long *)(param_1 + 0x38) == 3) {
    _UIImageWriteToSavedPhotosAlbum
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               PTR_s_image_didFinishSavingWithError_c_026b2688,0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,&cf_evQQeQCgP);
  }
  return;
}

