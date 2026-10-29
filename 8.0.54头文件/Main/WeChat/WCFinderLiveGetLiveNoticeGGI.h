@interface WCFinderLiveGetLiveNoticeGGI : WCFinderLiveBaseCgi
{
    unsigned int _pageOrder; // +0x8
    NSString * _anchorFinderUsername; // +0x10
    FinderLivePermissionVerifyInfo * _verifyInfo; // +0x18
    NSString * _noticeId; // +0x20
    unsigned long long _lastNoticeCreateTime; // +0x28
    NSArray * _noticeAggregateTypeArray; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failureBlock; // +0x40
}
- (id)initWithNoticeId:(id)arg1 verifyInfo:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (id)initNextPageCGIWithAnchorFinderUsername:(id)arg1 afterNoticeCreateTime:(unsigned long long)arg2 aggregateTypeArray:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (id)initPreviousPageCGIWithAnchorFinderUsername:(id)arg1 beforeNoticeCreateTime:(unsigned long long)arg2 aggregateTypeArray:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (unsigned long long)lastNoticeCreateTime;
- (void)setLastNoticeCreateTime:(unsigned long long)arg1;
- (unsigned int)pageOrder;
- (void)setPageOrder:(unsigned int)arg1;
- (id)noticeAggregateTypeArray;
- (void)setNoticeAggregateTypeArray:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

