@interface EmoticonListCgi : NSObject <PBMessageObserverDelegate>
{
    BOOL _isActive; // +0x8
    unsigned int _reqType; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _requestEventID; // +0x14
    NSData * _boughtBuff; // +0x18
    unsigned long long _sessionId; // +0x20
    id <EmoticonListCgiDelegate> _delegate; // +0x28
}
- (id)init;
- (void)createRequest;
- (void)onGetBoughtItemList:(id)arg1;
- (void)OnGetStoreEmoticonList:(id)arg1 withReqType:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)boughtBuff;
- (void)setBoughtBuff:(id)arg1;
- (unsigned int)reqType;
- (void)setReqType:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (unsigned int)requestEventID;
- (void)setRequestEventID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

