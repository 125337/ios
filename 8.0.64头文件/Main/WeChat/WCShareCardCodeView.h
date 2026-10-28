@interface WCShareCardCodeView : MMUIView
{
    NSString * _shareUserName; // +0x8
    WCCardDataCardInfo * _cardInfo; // +0x10
    WCCardDataCardTPInfo * _cardTPInfo; // +0x18
    id <WCCardDataSource> _cardDataSource; // +0x20
    MMTimer * brightTimer; // +0x28
    double _oldBrightness; // +0x30
    double _toBrightness; // +0x38
    CGSize biggerSize; // +0x40
    UIView * _animateView; // +0x50
    UILabel * _codeLabel; // +0x58
    UIScrollView * _maskView; // +0x60
    MMUIView * _whiteBgView; // +0x68
    CGRect fromStartRect; // +0x70
    MMUIActivityIndicatorView * activityIndicator; // +0x90
    UIView * statusBgView; // +0x98
    UIImageView * fakeQRCodeImgView; // +0xa0
    MMUILabel * _logoNameLabel; // +0xa8
    MMUILabel * _titleLabel; // +0xb0
    MMUILabel * _showToWaiterTips; // +0xb8
    UIButton * _closeViewBtn; // +0xc0
    UIButton * _directPayBtn; // +0xc8
    UIButton * _notifyCheckBox; // +0xd0
    BOOL _bStatusBarBlack; // +0xd8
    unsigned long long _curStatus; // +0xe0
    BOOL _isLoading; // +0xe8
    MMTimer * _updateDynamicCodeTimer; // +0xf0
    id <WCShareCardCodeViewDelegate> m_delegate; // +0xf8
    NSString * _typeName; // +0x100
    WCCardDynamicCodeGenerator * _dynamicCodeGenerator; // +0x108
    NSString * _dynamicCode; // +0x110
}
- (id)initWithCardSourceData:(id)arg1 andCodeStartRect:(CGRect)arg2 shareUserName:(id)arg3 isStatusBarBlack:(BOOL)arg4 dynamicCodeGenerator:(id)arg5;
- (void)dealloc;
- (void)layoutSubviews;
- (id)getCurrentBrandColor;
- (void)initShadowView;
- (void)initView;
- (void)showWithAnimation;
- (void)showCodeViewWithAnimation;
- (void)makeCheckBoxView;
- (void)closeCodeView;
- (void)showTips:(id)arg1;
- (void)showMarkedView;
- (void)showMarkedErrorView;
- (id)getLogoName;
- (void)makeCancelBtn;
- (void)updateViewStatus:(unsigned long long)arg1;
- (void)updateCardDatasource:(id)arg1;
- (void)setupMemberCardCodeView;
- (void)setupOriginMemberCodeView;
- (void)setupNewMemberCodeView;
- (id)getCodeViewWithCode:(id)arg1;
- (BOOL)isMemberCard;
- (void)recoverBrightness:(double)arg1;
- (void)graduallySetBrightness:(double)arg1;
- (void)timerCheckUpdateBrightness;
- (void)onClickNotifyCheckBoxBtn:(id)arg1;
- (void)payAndQrcodeDidClick;
- (void)startDynamicCodeUpdateTimer;
- (void)updateDynamicCode;
- (void)loadDynamicCodeIfNeed;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)typeName;
- (void)setTypeName:(id)arg1;
- (id)dynamicCodeGenerator;
- (void)setDynamicCodeGenerator:(id)arg1;
- (id)dynamicCode;
- (void)setDynamicCode:(id)arg1;
- (void).cxx_destruct;
@end
