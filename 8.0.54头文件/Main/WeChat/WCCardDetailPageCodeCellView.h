@interface WCCardDetailPageCodeCellView : MMUIView
{
    WCCardDataCardTPInfo * _cardTpInfo; // +0x8
    WCCardDataCardInfo * _cardInfo; // +0x10
    id <WCCardDataSource> _cardDataSource; // +0x18
    UIView * _codeContainView; // +0x20
    id <WCCardDetailPageCodeCellViewDelegate> _delegate; // +0x28
    int _fixPadding; // +0x30
    NSString * _tipsWording; // +0x38
    NSString * _reasonWording; // +0x40
    CGRect _oldFrame; // +0x48
    NSString * _buttonWording; // +0x68
    unsigned int _offlineCodeStatus; // +0x70
    NSString * _dynamicCode; // +0x78
    NSString * _dynamicOfflineCode; // +0x80
}
+ (double)heightForCardSource:(id)arg1 viewWidth:(double)arg2 offlineCode:(id)arg3;
- (id)initWithViewWidth:(double)arg1 cardSource:(id)arg2 delegate:(id)arg3 dynamicCode:(id)arg4 offlineCode:(id)arg5 offlineCodeStatus:(unsigned int)arg6;
- (void)initView;
- (void)setupView;
- (void)doDisableCodeLogic;
- (id)createCodeNumView:(id)arg1;
- (id)getBlurCodeView;
- (id)getCodeViewWithCode:(id)arg1;
- (id)genDataMatrixWithQrLevel:(id)arg1 cardCode:(id)arg2;
- (void)refresh:(id)arg1;
- (void)updateViewStatus;
- (void)showErrorView;
- (void)refreshCode;
- (void)acceptButtonDidClicked;
- (void)codeViewTapped:(id)arg1;
- (id)dynamicCode;
- (void)setDynamicCode:(id)arg1;
- (id)dynamicOfflineCode;
- (void)setDynamicOfflineCode:(id)arg1;
- (unsigned int)offlineCodeStatus;
- (void)setOfflineCodeStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

