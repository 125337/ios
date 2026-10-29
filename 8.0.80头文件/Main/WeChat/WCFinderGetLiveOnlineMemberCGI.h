@interface WCFinderGetLiveOnlineMemberCGI : WCFinderLiveBaseCgi
{
    unsigned int _boardType; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    long long _cgiRequestScene; // +0x28
    NSString * _micId; // +0x30
    NSString * _boardKey; // +0x38
    unsigned long long _filterScene; // +0x40
    NSData * _getLiveOnlineMemberBuf; // +0x48
}
- (id)initWithFinderTaskId:(id)arg1 reqBuffer:(id)arg2 micId:(id)arg3 boardKey:(id)arg4 boardType:(unsigned int)arg5 filterScene:(unsigned long long)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (long long)cgiRequestScene;
- (void)setCgiRequestScene:(long long)arg1;
- (id)micId;
- (void)setMicId:(id)arg1;
- (id)boardKey;
- (void)setBoardKey:(id)arg1;
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (unsigned long long)filterScene;
- (void)setFilterScene:(unsigned long long)arg1;
- (id)getLiveOnlineMemberBuf;
- (void)setGetLiveOnlineMemberBuf:(id)arg1;
- (void).cxx_destruct;
@end
