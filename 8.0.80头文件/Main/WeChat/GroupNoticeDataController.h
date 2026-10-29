@interface GroupNoticeDataController : WeNoteDataController
{
    BOOL _needReloadForEditMode; // +0x25
    NSMutableArray * _lastDataList; // +0x28
}
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)saveWithHandler:(id /* block */)arg1;
- (void)addSizeWithNode:(id)arg1 size:(long long *)arg2;
- (long long)getAttachmentSizeWithContentStorage:(id)arg1 range:(_NSRange)arg2;
- (void)insertAttributes:(id)arg1;
- (void)pasteSelectedContent;
- (void)onReplaceTextInRange:(_NSRange)arg1 withText:(id)arg2 inTextView:(id)arg3;
- (void)notifyContentChange;
- (BOOL)needReloadForEditMode;
- (void)setNeedReloadForEditMode:(BOOL)arg1;
- (id)lastDataList;
- (void)setLastDataList:(id)arg1;
- (void).cxx_destruct;
@end
