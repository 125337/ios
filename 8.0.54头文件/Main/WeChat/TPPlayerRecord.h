@interface TPPlayerRecord : NSObject
{
    BOOL _useP2p; // +0x8
    long long _fileOpenedTime; // +0x10
    long long _firstPacketReadTime; // +0x18
    NSString * _definition; // +0x20
    long long _playerType; // +0x28
}
- (long long)fileOpenedTime;
- (void)setFileOpenedTime:(long long)arg1;
- (long long)firstPacketReadTime;
- (void)setFirstPacketReadTime:(long long)arg1;
- (id)definition;
- (void)setDefinition:(id)arg1;
- (BOOL)useP2p;
- (void)setUseP2p:(BOOL)arg1;
- (long long)playerType;
- (void)setPlayerType:(long long)arg1;
- (void).cxx_destruct;
@end

