@interface WCPayOfflinePayGuideBarView : UIView
{
    WCPayOfflinePayGuideBar * _viewData; // +0x8
    id <WCPayOfflinePayGuideBarViewDelegate> _delegate; // +0x10
    WCPayWebImageView * _logoImgView; // +0x18
    MMUILabel * _contentLabel; // +0x20
    UIButton * _clickBtn; // +0x28
}
- (id)initWithContiainerWidth:(double)arg1 delegate:(id)arg2 viewData:(id)arg3;
- (void)setupContentView;
- (void)onBtnClick;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)logoImgView;
- (void)setLogoImgView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)clickBtn;
- (void)setClickBtn:(id)arg1;
- (void).cxx_destruct;
@end

