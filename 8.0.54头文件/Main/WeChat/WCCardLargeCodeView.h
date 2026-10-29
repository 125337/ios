@interface WCCardLargeCodeView : MMUIView <IWCCardLargeCodeExt>
{
    WCCardDataCardTPInfo * _cardTpInfo; // +0x8
    WCCardDataCardInfo * _cardInfo; // +0x10
    id <WCCardDataSource> _cardDataSource; // +0x18
    CGRect _originRect; // +0x20
    BOOL _animating; // +0x40
    BOOL _isOnShow; // +0x41
    UIView * _codeContainView; // +0x48
    unsigned int _offlineCodeStatus; // +0x50
    id <WCCardLargeCodeViewDelegate> m_delegte; // +0x58
    NSString * _dynamicCode; // +0x60
    NSString * _dynamicOfflineCode; // +0x68
}
- (id)initWithCodeRect:(CGRect)arg1 cardSource:(id)arg2 dynamicCode:(id)arg3 offlineCode:(id)arg4 offlineCodeStatus:(unsigned int)arg5;
- (void)willChangeToSplitMode;
- (void)updateLargeCodeView:(id)arg1 dynamicCode:(id)arg2 offlineCode:(id)arg3 offlineCodeStatus:(unsigned int)arg4;
- (void)initView;
- (void)setupViewWithAnimation:(BOOL)arg1;
- (id)getBlurCodeView;
- (id)getCodeViewWithCode:(id)arg1;
- (void)refresh:(id)arg1;
- (void)updateViewStatus;
- (void)dealloc;
- (void)viewTapped:(id)arg1;
- (id)createCodeNumView:(id)arg1;
- (void)closeCodeView;
- (id)genDataMatrixWithQrLevel:(id)arg1 cardCode:(id)arg2;
- (void)onCloseView;
- (id)m_delegte;
- (void)setM_delegte:(id)arg1;
- (id)dynamicCode;
- (void)setDynamicCode:(id)arg1;
- (id)dynamicOfflineCode;
- (void)setDynamicOfflineCode:(id)arg1;
- (unsigned int)offlineCodeStatus;
- (void)setOfflineCodeStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

