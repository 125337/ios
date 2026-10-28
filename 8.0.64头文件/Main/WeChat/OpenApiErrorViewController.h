@interface OpenApiErrorViewController : MMUIViewController
{
    OpenApiErrorParams * _params; // +0x70
    UIView * _containerView; // +0x78
    UIImageView * _errImgView; // +0x80
    MMUILabel * _errDescLabel; // +0x88
    UIButton * _bottomBtn; // +0x90
}
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)onBottomBtnClicked;
- (id)params;
- (void)setParams:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)errImgView;
- (void)setErrImgView:(id)arg1;
- (id)errDescLabel;
- (void)setErrDescLabel:(id)arg1;
- (id)bottomBtn;
- (void)setBottomBtn:(id)arg1;
- (void).cxx_destruct;
@end
