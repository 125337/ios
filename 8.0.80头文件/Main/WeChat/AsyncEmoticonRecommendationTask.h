@interface AsyncEmoticonRecommendationTask : NSObject
{
    BOOL _localTaskFinish; // +0x8
    BOOL _remoteTaskFinish; // +0x9
    BOOL _shouldSearchRemote; // +0xa
    NSString * _identifier; // +0x10
    NSString * _recSessionId; // +0x18
    NSArray * _localList; // +0x20
    NSArray * _remoteList; // +0x28
    unsigned long long _startTime; // +0x30
}
- (id)init;
- (id)description;
- (void)dealloc;
- (id)sessionId;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)recSessionId;
- (void)setRecSessionId:(id)arg1;
- (BOOL)localTaskFinish;
- (void)setLocalTaskFinish:(BOOL)arg1;
- (BOOL)remoteTaskFinish;
- (void)setRemoteTaskFinish:(BOOL)arg1;
- (id)localList;
- (void)setLocalList:(id)arg1;
- (id)remoteList;
- (void)setRemoteList:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (BOOL)shouldSearchRemote;
- (void)setShouldSearchRemote:(BOOL)arg1;
- (void).cxx_destruct;
@end
