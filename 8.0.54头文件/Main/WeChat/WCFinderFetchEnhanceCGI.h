@interface WCFinderFetchEnhanceCGI : WCFinderBaseCgi
{
    int _viewScene; // +0x8
    int _eventType; // +0xc
    int _streamType; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
    NSData * _lastBuff; // +0x28
    NSString * _tid; // +0x30
    unsigned long long _tabType; // +0x38
    WCFinderLocationInfo * _location; // +0x40
    NSString * _nonceID; // +0x48
    NSMutableArray * _readStats; // +0x50
    NSMutableArray * _unreadItems; // +0x58
    FinderClientStatus * _clientStatus; // +0x60
    NSString * _sessionBuffer; // +0x68
}
- (id)initWithLastBuff:(id)arg1 tid:(id)arg2 nonceID:(id)arg3 location:(id)arg4 tabType:(unsigned long long)arg5 readStats:(id)arg6 unreadItems:(id)arg7 viewerScene:(int)arg8 clientStatus:(id)arg9 eventType:(int)arg10 enhanceStreamType:(int)arg11 successful:(id /* block */)arg12 failure:(id /* block */)arg13;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)readStats;
- (void)setReadStats:(id)arg1;
- (id)unreadItems;
- (void)setUnreadItems:(id)arg1;
- (int)viewScene;
- (void)setViewScene:(int)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (int)eventType;
- (void)setEventType:(int)arg1;
- (int)streamType;
- (void)setStreamType:(int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end

