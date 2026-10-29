@interface EmoticonCustomCreateVideoEditTask : EmoticonCustomCreateEditTask <WCEditVideoViewControllerDelegate>
{
    id <EmoticonCustomCreateVideoEditTaskDelegate> _delegate; // +0x8
    id /* block */ _editCancelBlock; // +0x10
    id /* block */ _startComposingBlock; // +0x18
    id /* block */ _composingFailBlock; // +0x20
    id /* block */ _composingSucBlock; // +0x28
    unsigned long long _editorType; // +0x30
    NSString * _videoPath; // +0x38
    NSString * _thumbImgUrl; // +0x40
}
- (id)init;
- (id)initWithVideoPath:(id)arg1;
- (id)initWithThumbImgUrl:(id)arg1;
- (void)startEdit;
- (id)getVideoEditorWithPath:(id)arg1;
- (id)getVideoEditorWithThumbImgUrl:(id)arg1;
- (id)editorUIConfigWithSize:(CGSize)arg1;
- (id)getVideoEditorWith:(id)arg1 videoPath:(id)arg2 thumbUrl:(id)arg3 videoSize:(CGSize)arg4;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)editCancelBlock;
- (void)setEditCancelBlock:(id /* block */)arg1;
- (id /* block */)startComposingBlock;
- (void)setStartComposingBlock:(id /* block */)arg1;
- (id /* block */)composingFailBlock;
- (void)setComposingFailBlock:(id /* block */)arg1;
- (id /* block */)composingSucBlock;
- (void)setComposingSucBlock:(id /* block */)arg1;
- (unsigned long long)editorType;
- (void)setEditorType:(unsigned long long)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)thumbImgUrl;
- (void)setThumbImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
