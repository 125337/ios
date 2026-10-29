@interface WCFinderFollowCGI : WCFinderBaseCgi
{
    unsigned int _enterType; // +0x8
    unsigned int _enhanceFollowBtn; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failureBlock; // +0x18
    unsigned long long _optype; // +0x20
    NSString * _posterUsername; // +0x28
    NSString * _finderUsername; // +0x30
    NSString * _objectID; // +0x38
    unsigned long long _reportScene; // +0x40
    NSString * _sessionBuffer; // +0x48
    unsigned long long _followScene; // +0x50
    NSString * _sessionExtraKey; // +0x58
    NSData * _liveCookies; // +0x60
    unsigned long long _fromMentionID; // +0x68
    WCFinderFollowCGIRequestParams * _params; // +0x70
}
- (id)initWithParams:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)createRequest;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (unsigned long long)optype;
- (void)setOptype:(unsigned long long)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (id)posterUsername;
- (void)setPosterUsername:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)followScene;
- (void)setFollowScene:(unsigned long long)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)fromMentionID;
- (void)setFromMentionID:(unsigned long long)arg1;
- (unsigned int)enhanceFollowBtn;
- (void)setEnhanceFollowBtn:(unsigned int)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

