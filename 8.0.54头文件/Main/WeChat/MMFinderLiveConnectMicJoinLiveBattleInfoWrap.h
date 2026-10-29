@interface MMFinderLiveConnectMicJoinLiveBattleInfoWrap : NSObject
{
    unsigned int _receiveBattleInfoTime; // +0x8
    FinderLiveBattleInfo * _battleInfoFromJoinLive; // +0x10
    NSString * _micSessionId; // +0x18
    NSString * _vroomId; // +0x20
}
- (id)battleInfoFromJoinLive;
- (void)setBattleInfoFromJoinLive:(id)arg1;
- (unsigned int)receiveBattleInfoTime;
- (void)setReceiveBattleInfoTime:(unsigned int)arg1;
- (id)micSessionId;
- (void)setMicSessionId:(id)arg1;
- (id)vroomId;
- (void)setVroomId:(id)arg1;
- (void).cxx_destruct;
@end

