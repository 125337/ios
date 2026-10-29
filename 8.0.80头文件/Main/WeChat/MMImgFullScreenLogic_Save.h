@interface MMImgFullScreenLogic_Save : MMImgFullScreenLogic
- (BOOL)canShowActionSheet;
- (id)actionSheetItem;
- (void)tryAddToActionSheet:(id)arg1;
- (void)doSave;
- (void)doSave:(id)arg1;
- (void)doSaveImage:(id)arg1;
- (void)doSaveVideo:(id)arg1;
- (BOOL)showActionSheetBeforeSaveToAlbum;
- (void)internalSaveImageToAlbum:(id)arg1;
- (void)internalSaveVideoToAlbum:(id)arg1;
@end
