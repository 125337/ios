// ___69+[WCMYBIBPhotoAlbumManager_getPhotoAlbumAuthorizationSuccess:failed:]_block_invoke.6 @0x84b54

void ___69__WCMYBIBPhotoAlbumManager_getPhotoAlbumAuthorizationSuccess_failed___block_invoke_6
               (long param_1)

{
  if (*(long *)(param_1 + 0x30) == 3) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  return;
}

