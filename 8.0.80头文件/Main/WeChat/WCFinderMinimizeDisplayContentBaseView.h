@interface WCFinderMinimizeDisplayContentBaseView : UIView <WCFinderMinimizeContentViewProtocol>
{
    UIImage * tmpSnapCoverImage; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    id <WCFinderMinimizeContentViewDelegate> _delegate; // +0x18
    MMWebImageView * _fullCoverView; // +0x20
    NSString * _controlCenterDisplayTitle; // +0x28
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateContentVM:(id)arg1;
- (void)ensureFullDisplayCover;
- (CGSize)contentSize;
- (void)cleanUp;
- (void)pausePlay;
- (void)resumePlay;
- (id)animatingSnapView;
- (double)playPosition;
- (void)beforeRestore;
- (void)keepHandlePlayer;
- (void)onMinimizeFloatingViewDidDisplay;
- (id)tmpSnapCoverImage;
- (void)setTmpSnapCoverImage:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fullCoverView;
- (void)setFullCoverView:(id)arg1;
- (id)controlCenterDisplayTitle;
- (void)setControlCenterDisplayTitle:(id)arg1;
- (void).cxx_destruct;
@end
