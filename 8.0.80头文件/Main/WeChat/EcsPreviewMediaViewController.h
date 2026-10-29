@interface EcsPreviewMediaViewController : EcsBasePreviewMediaViewController
{
    BOOL _isPresentMode; // +0x81
    NSString * _mbPassBuffer; // +0x88
    NSString * _mbPassThirdExtInfo; // +0x90
    NSString * _mbPassClickReportInfoFor33399; // +0x98
    NSString * _callerAppid; // +0xa0
    EcsMagicCardInstance * _magicCardInstance; // +0xa8
}
- (id)init;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragCancel;
- (id)sclView;
- (void)setSclViewHidden:(BOOL)arg1;
- (BOOL)disMissSelf;
- (id)thirdExtInfoForSearch;
- (id)clickReportInfoFor33399;
- (id)getVideoStateAtIndex:(int)arg1;
- (id)getVideoProgressBarFrameAtIndex:(int)arg1;
- (void)playVideoAtIndex:(int)arg1;
- (void)pauseVideoAtIndex:(int)arg1;
- (void)muteVideoAtIndex:(int)arg1;
- (void)unMuteVideoAtIndex:(int)arg1;
- (void)sendEcsEventToMb:(id)arg1 currentIndex:(int)arg2;
- (void)onVideoPlay;
- (void)onVideoPause;
- (id)mbPassBuffer;
- (void)setMbPassBuffer:(id)arg1;
- (BOOL)isPresentMode;
- (void)setIsPresentMode:(BOOL)arg1;
- (id)mbPassThirdExtInfo;
- (void)setMbPassThirdExtInfo:(id)arg1;
- (id)mbPassClickReportInfoFor33399;
- (void)setMbPassClickReportInfoFor33399:(id)arg1;
- (id)callerAppid;
- (void)setCallerAppid:(id)arg1;
- (id)magicCardInstance;
- (void)setMagicCardInstance:(id)arg1;
- (void).cxx_destruct;
@end
