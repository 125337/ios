@interface WCStoryUserPageCgiObj : WCStoryBaseCGIObj
{
    unsigned int _source; // +0x8
    id /* block */ _dataCallBack; // +0x10
    id /* block */ _dbSyncCallBack; // +0x18
    id /* block */ _getDBDataCallBack; // +0x20
    NSString * _userName; // +0x28
    NSString * _chatRoomName; // +0x30
    unsigned long long _maxId; // +0x38
}
- (id)initWithUserName:(id)arg1 MaxId:(unsigned long long)arg2 ChatRoomName:(id)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)converListStoryObjToStoryItem:(id)arg1;
- (id /* block */)dataCallBack;
- (void)setDataCallBack:(id /* block */)arg1;
- (id /* block */)dbSyncCallBack;
- (void)setDbSyncCallBack:(id /* block */)arg1;
- (id /* block */)getDBDataCallBack;
- (void)setGetDBDataCallBack:(id /* block */)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (unsigned long long)maxId;
- (void)setMaxId:(unsigned long long)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end

