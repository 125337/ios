@interface WCFinderAudienceReserveLiveCGI : WCFinderBaseCgi
{
    unsigned int _optype; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _enterType; // +0x10
    NSString * _anchorUsername; // +0x18
    NSString * _noticeId; // +0x20
    NSString * _promoterToken; // +0x28
    NSString * _sessionBuffer; // +0x30
    NSArray * _noticeAggregateTypeArray; // +0x38
    WCFinderAudienceReserveLiveCGIExtentParams * _extentParams; // +0x40
    id /* block */ _successBlock; // +0x48
    id /* block */ _failureBlock; // +0x50
}
- (id)initWithAnchorUserName:(id)arg1 noticeId:(id)arg2 optype:(unsigned int)arg3 scene:(unsigned int)arg4 promoterToken:(id)arg5 config:(id)arg6 enterType:(unsigned int)arg7 sessionBuffer:(id)arg8 aggregateTypeArray:(id)arg9 extentParams:(id)arg10 successBlock:(id /* block */)arg11 failureBlock:(id /* block */)arg12;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)anchorUsername;
- (void)setAnchorUsername:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (unsigned int)optype;
- (void)setOptype:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)promoterToken;
- (void)setPromoterToken:(id)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)noticeAggregateTypeArray;
- (void)setNoticeAggregateTypeArray:(id)arg1;
- (id)extentParams;
- (void)setExtentParams:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

