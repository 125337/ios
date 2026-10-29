@interface BizTextCoverEditorParams : NSObject
{
    BOOL _canOverlayBottomInset; // +0x8
    double _topInset; // +0x10
    double _bottomInset; // +0x18
    NSString * _draftPrompt; // +0x20
    NSString * _draftPicId; // +0x28
    long long _editScene; // +0x30
}
- (double)topInset;
- (void)setTopInset:(double)arg1;
- (double)bottomInset;
- (void)setBottomInset:(double)arg1;
- (BOOL)canOverlayBottomInset;
- (void)setCanOverlayBottomInset:(BOOL)arg1;
- (id)draftPrompt;
- (void)setDraftPrompt:(id)arg1;
- (id)draftPicId;
- (void)setDraftPicId:(id)arg1;
- (long long)editScene;
- (void)setEditScene:(long long)arg1;
- (void).cxx_destruct;
@end
