@interface WCPayOfflinePayNoCodeTipsView : MMUIView
{
    id <WCPayOfflinePayNoCodeTipsViewDelegate> _delegate; // +0x8
    UIImageView * _iconImgView; // +0x10
    MMUILabel * _tipsLabel; // +0x18
    UIButton * _refreshBtn; // +0x20
}
- (id)initNoCodeTipsViewWithFrame:(CGRect)arg1 delegate:(id)arg2 tipsWording:(id)arg3;
- (void)setupContentView:(id)arg1;
- (void)refreshBtnPress:(id)arg1;
- (void)disableRefreshBtn;
- (void)enableRefreshBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)refreshBtn;
- (void)setRefreshBtn:(id)arg1;
- (void).cxx_destruct;
@end
