@interface WCFinderGetLiveInfoCGI : WCFinderLiveBaseCgi
{
    unsigned int _scene; // +0x8
    unsigned long long _liveId; // +0x10
    NSString * _finderUserName; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
    FinderGetLiveInfoReq_LiveADBypassInfo * _liveAdByPassInfo; // +0x30
    FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo * _notificationInfo; // +0x38
}
- (id)initWithLiveId:(unsigned long long)arg1 andFinderUsername:(id)arg2 andScene:(unsigned int)arg3 liveAdByPassInfo:(id)arg4 notificationInfo:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveAdByPassInfo;
- (void)setLiveAdByPassInfo:(id)arg1;
- (id)notificationInfo;
- (void)setNotificationInfo:(id)arg1;
- (void).cxx_destruct;
@end
