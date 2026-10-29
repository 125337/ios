@interface WCFinderLiveMsgSessionFindResult : NSObject
{
    WCFinderLiveMsgSessionInfo * _sessionInfoById; // +0x8
    NSArray * _sessionInfos; // +0x10
    WCTableLiveSessionStorage * _sessionStorage; // +0x18
}
- (id)sessionInfoById;
- (void)setSessionInfoById:(id)arg1;
- (id)sessionInfos;
- (void)setSessionInfos:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (void).cxx_destruct;
@end
