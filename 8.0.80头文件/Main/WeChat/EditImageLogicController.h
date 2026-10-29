@interface EditImageLogicController : NSObject
{
    NSMutableDictionary * __editedImageDic; // +0x8
}
- (id)init;
- (id)getEditImageAttrWithUrl:(id)arg1;
- (id)getEditOriginalImageDataWithUrl:(id)arg1;
- (void)modifyEditedImageWithAssetUrl:(id)arg1 withImage:(id)arg2 withDrawLayer:(id)arg3 withEdited:(BOOL)arg4 withTemplateId:(id)arg5 withYuanBaoPhotoPath:(id)arg6 withYuanBaoVideoPath:(id)arg7 withEditedWidgetStateList:(id)arg8;
- (BOOL)clearSavedFiles;
- (id)getEditedString:(id)arg1;
- (void)dealloc;
- (id)_editedImageDic;
- (void)set_editedImageDic:(id)arg1;
- (void).cxx_destruct;
@end
