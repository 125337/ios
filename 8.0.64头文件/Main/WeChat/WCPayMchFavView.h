@interface WCPayMchFavView : UIView
{
    id <WCPayMchFavViewDelegate> _delegate; // +0x8
    FollowCardBDMchInfo * _mchInfo; // +0x10
    WCPayWebImageView * _mchLogoImgView; // +0x18
    WCPayWebImageView * _mchLogoSelectedImgView; // +0x20
    MMUILabel * _followTipsLabel; // +0x28
    UIButton * _coverBtn; // +0x30
    MMUIActivityIndicatorView * _indicatorView; // +0x38
}
- (id)initWithFollowMchInfo:(id)arg1 delegate:(id)arg2;
- (void)updateMchFavViewWithSelectState:(BOOL)arg1;
- (void)coverBtnClick;
- (void)startLoading;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mchInfo;
- (void)setMchInfo:(id)arg1;
- (id)mchLogoImgView;
- (void)setMchLogoImgView:(id)arg1;
- (id)mchLogoSelectedImgView;
- (void)setMchLogoSelectedImgView:(id)arg1;
- (id)followTipsLabel;
- (void)setFollowTipsLabel:(id)arg1;
- (id)coverBtn;
- (void)setCoverBtn:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
