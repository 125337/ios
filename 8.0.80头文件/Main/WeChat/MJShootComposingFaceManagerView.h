@interface MJShootComposingFaceManagerView : MMUIView
{
    MJShootComposingFaceManagerConfig * _config; // +0x8
    id <MJShootComposingFaceManagerViewDelegate> _delegate; // +0x10
    MMWebImageView * _faceIDPlaceholderView; // +0x18
    MMUIImageView * _faceIDImageView; // +0x20
    MMUILabel * _faceIDTitleLabel; // +0x28
    MMUILabel * _faceIDTipLabel; // +0x30
    UIButton * _faceEntryButton; // +0x38
    UIButton * _moreButton; // +0x40
    UIView * _bottomView; // +0x48
}
- (id)initWithConfig:(id)arg1;
- (void)setupView;
- (void)updateWithComposingViewLayout:(id)arg1;
- (void)setupLayout;
- (void)faceEntryButtonTouchUpInside:(id)arg1;
- (void)moreButtonTouchUpInside:(id)arg1;
- (void)updateWithFaceIDState:(unsigned long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)faceIDPlaceholderView;
- (void)setFaceIDPlaceholderView:(id)arg1;
- (id)faceIDImageView;
- (void)setFaceIDImageView:(id)arg1;
- (id)faceIDTitleLabel;
- (void)setFaceIDTitleLabel:(id)arg1;
- (id)faceIDTipLabel;
- (void)setFaceIDTipLabel:(id)arg1;
- (id)faceEntryButton;
- (void)setFaceEntryButton:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void).cxx_destruct;
@end
