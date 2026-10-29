@interface WCPlainTextTipFullScreenView : MMUIView <CAAnimationDelegate>
{
    id <WCPlainTextTipFullScreenViewDelegate> _delegate; // +0x8
}
- (void)onIKnowItBtnClick:(id)arg1;
- (CGRect)getBgImgViewFrameWithImgSize:(CGSize)arg1;
- (void)initView;
- (id)init;
- (void)layoutSubviews;
- (void)showAnimation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

