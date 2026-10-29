@interface WCFinderGetLiveContactCGI : WCFinderLiveBaseCgi
{
    NSString * _userName; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    unsigned long long _scene; // +0x28
    NSData * _liveContactExtInfo; // +0x30
    unsigned long long _liveId; // +0x38
    unsigned long long _objectId; // +0x40
    FinderLiveContactExtRelationInfo * _extRelationInfo; // +0x48
}
- (id)initWithFinderTaskId:(id)arg1 userName:(id)arg2 fromScene:(unsigned long long)arg3 extInfo:(id)arg4 extRelationInfo:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 userName:(id)arg3 fromScene:(unsigned long long)arg4 extInfo:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)liveContactExtInfo;
- (void)setLiveContactExtInfo:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)extRelationInfo;
- (void)setExtRelationInfo:(id)arg1;
- (void).cxx_destruct;
@end
