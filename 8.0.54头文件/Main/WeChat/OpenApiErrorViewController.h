@interface OpenApiErrorViewController : MMUIViewController
{
    OpenApiErrorParams * _params; // +0x68
    UIView * _containerView; // +0x70
    UIImageView * _errImgView; // +0x78
    MMUILabel * _errDescLabel; // +0x80
    UIButton * _bottomBtn; // +0x88
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

