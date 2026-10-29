@interface FavNoteQuickEditPlugin : NSObject <FavNoteQuickEditHostApi, MMFlutterPlugin>
{
    FavNoteQuickEditorViewManager * _viewManager; // +0x8
    FavNoteQuickEditFlutterApi * _flutterApi; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)updateHeightHeight:(double)arg1 error:(id *)arg2;
- (void)updateTextText:(id)arg1 error:(id *)arg2;
- (void)onExpandClickText:(id)arg1 error:(id *)arg2;
- (void)onSelectionChangedIsSelected:(BOOL)arg1 error:(id *)arg2;
- (void)setViewManager:(id)arg1;
- (id)flutterApi;
- (id)viewManager;
- (void)setFlutterApi:(id)arg1;
- (void).cxx_destruct;
@end
