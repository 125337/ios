@interface AutoplayController : MMObject <IAudioReceiverExt>
{
    NSMutableArray * m_arrMessageArray; // +0x8
    BOOL _autoPlayEnabled; // +0x10
    BOOL _paused; // +0x11
    id <AutoplayControllerDelegate> _delegate; // +0x18
    CMessageWrap * _currentPlayingMsg; // +0x20
}
+ (id)generateWithMsg:(id)arg1 delegate:(id)arg2;
- (id)initWithMsg:(id)arg1 delegate:(id)arg2;
- (void)PlayList;
- (void)tryLoadMoreMsgFromID:(unsigned int)arg1;
- (void)OnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)autoPlayEnabled;
- (BOOL)paused;
- (void)setPaused:(BOOL)arg1;
- (id)currentPlayingMsg;
- (void)setCurrentPlayingMsg:(id)arg1;
- (void).cxx_destruct;
@end
