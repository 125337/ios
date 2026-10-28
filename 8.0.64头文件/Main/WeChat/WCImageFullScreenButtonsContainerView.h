@interface WCImageFullScreenButtonsContainerView : MMUIView
{
    unsigned long long _contentItemScene; // +0x8
    id /* block */ _originalArticleBlock; // +0x10
    id /* block */ _ecsInfoButtonBlock; // +0x18
    id /* block */ _finderPreviewBlock; // +0x20
    WCMomentsBizOriginalArticleButton * _bizOriginalArticleButton; // +0x28
    WCMediaEcsInfoButton * _ecsInfoButton; // +0x30
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)showMediaItem:(id)arg1 mediaItemWrap:(id)arg2;
- (BOOL)canShowFinderPreviewButton:(id)arg1;
- (BOOL)canShowBizOriginalArticleButtonWithMediaItem:(id)arg1;
- (BOOL)canShowEcsInfoButtonWithMediaItem:(id)arg1;
- (void)initBizOriginalArticleButton;
- (void)iniEcsInfoButton;
- (void)layoutSubviews;
- (void)onClickOriginalArticleButton;
- (void)onClickEcsInfoButton;
- (void)onClickFinderInfoButton;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id /* block */)originalArticleBlock;
- (void)setOriginalArticleBlock:(id /* block */)arg1;
- (id /* block */)ecsInfoButtonBlock;
- (void)setEcsInfoButtonBlock:(id /* block */)arg1;
- (id /* block */)finderPreviewBlock;
- (void)setFinderPreviewBlock:(id /* block */)arg1;
- (id)bizOriginalArticleButton;
- (void)setBizOriginalArticleButton:(id)arg1;
- (id)ecsInfoButton;
- (void)setEcsInfoButton:(id)arg1;
- (void).cxx_destruct;
@end
