@interface WCFinderLivePurchaseApplyMicParam : NSObject
{
    BOOL _usingVideo; // +0x8
    BOOL _isAnonymous; // +0x9
    unsigned int _applyType; // +0xc
    unsigned int _coinAmount; // +0x10
    NSData * _liveCookies; // +0x18
    NSString * _sessionId; // +0x20
    WCFinderContact * _toFinderContact; // +0x28
    NSString * _consultContent; // +0x30
}
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)applyType;
- (void)setApplyType:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)coinAmount;
- (void)setCoinAmount:(unsigned int)arg1;
- (BOOL)usingVideo;
- (void)setUsingVideo:(BOOL)arg1;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (BOOL)isAnonymous;
- (void)setIsAnonymous:(BOOL)arg1;
- (id)consultContent;
- (void)setConsultContent:(id)arg1;
- (void).cxx_destruct;
@end
