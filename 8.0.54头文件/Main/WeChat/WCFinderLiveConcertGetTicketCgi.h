@interface WCFinderLiveConcertGetTicketCgi : WCFinderLiveBaseCgi
{
    BOOL _receive; // +0x8
    BOOL _needPageItem; // +0x9
    unsigned int _opScene; // +0xc
    NSString * _noticeId; // +0x10
    NSString * _activityId; // +0x18
    NSData * _liveCookies; // +0x20
    NSString * _audienceFinderUsername; // +0x28
    unsigned long long _objectID; // +0x30
    unsigned long long _liveId; // +0x38
    id /* block */ _successBlock; // +0x40
    id /* block */ _failBlock; // +0x48
    unsigned long long _paramSource; // +0x50
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 audienceFinderUsername:(id)arg3 receive:(BOOL)arg4 needPageItem:(BOOL)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (id)initWithNoticeId:(id)arg1 activityId:(id)arg2 audienceFinderUsername:(id)arg3 receive:(BOOL)arg4 needPageItem:(BOOL)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (id)initWithActivityId:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3 audienceFinderUsername:(id)arg4 receive:(BOOL)arg5 needPageItem:(BOOL)arg6 operationScene:(unsigned int)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)createReceiveRequest;
- (void)createNoReceiveRequest;
- (void)didGetResponse:(id)arg1;
- (void)didGetReceiveResponse:(id)arg1;
- (void)didGetNoReceiveResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)audienceFinderUsername;
- (void)setAudienceFinderUsername:(id)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (BOOL)receive;
- (void)setReceive:(BOOL)arg1;
- (BOOL)needPageItem;
- (void)setNeedPageItem:(BOOL)arg1;
- (unsigned int)opScene;
- (void)setOpScene:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)paramSource;
- (void)setParamSource:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

