@interface TXYHyInnerPubConfig : NSObject
{
    BOOL _isCheckRiskMode; // +0x8
    BOOL _isIgnoreCheckRiskResult; // +0x9
    BOOL _isHiddenResultPage; // +0xa
    BOOL _isHiddenProtocolPage; // +0xb
    BOOL _useLocalPageConfig; // +0xc
    BOOL _isCancelBtnRight; // +0xd
    BOOL _isHiddenTimeoutLabel; // +0xe
    BOOL _isHiddenLoadingPage; // +0xf
    BOOL _isHidePlaceholderImage; // +0x10
    NSString * _token; // +0x18
    double _checkRiskTimeoutMs; // +0x20
    NSString * _authTips; // +0x28
    NSString * _prepareImageViewDrawable; // +0x30
    NSString * _pubKey; // +0x38
    NSString * _nonce; // +0x40
    long long _maxLocalRetryTimes; // +0x48
}
- (id)token;
- (void)setToken:(id)arg1;
- (BOOL)isCheckRiskMode;
- (void)setIsCheckRiskMode:(BOOL)arg1;
- (BOOL)isIgnoreCheckRiskResult;
- (void)setIsIgnoreCheckRiskResult:(BOOL)arg1;
- (double)checkRiskTimeoutMs;
- (void)setCheckRiskTimeoutMs:(double)arg1;
- (id)authTips;
- (void)setAuthTips:(id)arg1;
- (BOOL)isHiddenResultPage;
- (void)setIsHiddenResultPage:(BOOL)arg1;
- (BOOL)isHiddenProtocolPage;
- (void)setIsHiddenProtocolPage:(BOOL)arg1;
- (BOOL)useLocalPageConfig;
- (void)setUseLocalPageConfig:(BOOL)arg1;
- (BOOL)isCancelBtnRight;
- (void)setIsCancelBtnRight:(BOOL)arg1;
- (id)prepareImageViewDrawable;
- (void)setPrepareImageViewDrawable:(id)arg1;
- (BOOL)isHiddenTimeoutLabel;
- (void)setIsHiddenTimeoutLabel:(BOOL)arg1;
- (BOOL)isHiddenLoadingPage;
- (void)setIsHiddenLoadingPage:(BOOL)arg1;
- (BOOL)isHidePlaceholderImage;
- (void)setIsHidePlaceholderImage:(BOOL)arg1;
- (id)pubKey;
- (void)setPubKey:(id)arg1;
- (id)nonce;
- (void)setNonce:(id)arg1;
- (long long)maxLocalRetryTimes;
- (void)setMaxLocalRetryTimes:(long long)arg1;
- (void).cxx_destruct;
@end
