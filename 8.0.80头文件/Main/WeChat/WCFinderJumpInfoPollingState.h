@interface WCFinderJumpInfoPollingState : NSObject
{
    BOOL _inFlight; // +0x8
    BOOL _scheduled; // +0x9
    unsigned int _adFlag; // +0xc
    int _commentScene; // +0x10
    unsigned int _pollingCount; // +0x14
    unsigned int _latestPollingTimestamp; // +0x18
    NSString * _tid; // +0x20
    NSString * _nonceId; // +0x28
    NSData * _objectCookie; // +0x30
    NSString * _dupIdentifier; // +0x38
    FinderJumpInfoPollingConfig * _config; // +0x40
    WCFinderJumpInfoContainer * _postJumpInfoContainer; // +0x48
}
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)objectCookie;
- (void)setObjectCookie:(id)arg1;
- (id)dupIdentifier;
- (void)setDupIdentifier:(id)arg1;
- (unsigned int)adFlag;
- (void)setAdFlag:(unsigned int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (unsigned int)pollingCount;
- (void)setPollingCount:(unsigned int)arg1;
- (unsigned int)latestPollingTimestamp;
- (void)setLatestPollingTimestamp:(unsigned int)arg1;
- (BOOL)inFlight;
- (void)setInFlight:(BOOL)arg1;
- (BOOL)scheduled;
- (void)setScheduled:(BOOL)arg1;
- (id)postJumpInfoContainer;
- (void)setPostJumpInfoContainer:(id)arg1;
- (void).cxx_destruct;
@end
