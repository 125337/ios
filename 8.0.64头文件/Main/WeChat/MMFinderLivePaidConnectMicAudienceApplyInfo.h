@interface MMFinderLivePaidConnectMicAudienceApplyInfo : NSObject
{
    BOOL _isAnonymous; // +0x8
    BOOL _usingVideo; // +0x9
    NSString * _consultContent; // +0x10
    unsigned long long _applyPrice; // +0x18
}
- (id)consultContent;
- (void)setConsultContent:(id)arg1;
- (BOOL)isAnonymous;
- (void)setIsAnonymous:(BOOL)arg1;
- (BOOL)usingVideo;
- (void)setUsingVideo:(BOOL)arg1;
- (unsigned long long)applyPrice;
- (void)setApplyPrice:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
