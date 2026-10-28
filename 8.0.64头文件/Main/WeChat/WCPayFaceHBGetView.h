@interface WCPayFaceHBGetView : UIView <IWCPayFaceHBMgrExt>
{
    id <WCPayFaceHBGetViewDelegate> m_delegate; // +0x8
    id <MMUIViewControllerDelegate> m_vcDelegate; // +0x10
    UIImageView * _backgroundView; // +0x18
    UIView * _searchView; // +0x20
    WCPayWebImageView * _imageView; // +0x28
    UIButton * _historyBtn; // +0x30
    UIView * _receiveView; // +0x38
    UIImageView * _hbView; // +0x40
    UIView * _resultView; // +0x48
    MMUILabel * _nameView; // +0x50
    UIButton * _btnDone; // +0x58
    MMUILabel * _descView; // +0x60
    UIImageView * _decorationView; // +0x68
    WCPayFaceHBItem * m_currentItem; // +0x70
    UIView * oBottomTailView; // +0x78
    UIView * oTopHeaderView; // +0x80
    UIView * topView; // +0x88
    UIImageView * topImageView; // +0x90
    UIImageView * topImageBackgroundView; // +0x98
    UIView * bottomView; // +0xa0
    UIImageView * bottomImageView; // +0xa8
    UIView * _blurView; // +0xb0
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)setViewController:(id)arg1;
- (void)addImageView;
- (void)setBackgroundImage:(id)arg1;
- (void)popupView:(id)arg1;
- (void)popbackView:(id)arg1;
- (void)removeView:(id)arg1;
- (void)receiveHB:(id)arg1;
- (void)setAnchorPoint:(CGPoint)arg1 forView:(id)arg2;
- (void)showSuccessOpenAnimation;
- (void)fadeAnimation:(double)arg1;
- (void)commitPopBackAnimation;
- (void)onGet;
- (void)onCancelOpen;
- (void)setDelegate:(id)arg1;
- (void)removeBlurView;
- (void)updateFaceHB:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
