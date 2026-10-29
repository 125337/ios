@interface WCFinderNewApplyMicParams : NSObject
{
    unsigned int _applyScene; // +0x8
    NSData * _randomMicBuffer; // +0x10
    NSData * _sceneBuffer; // +0x18
    NSString * _candidateRequestId; // +0x20
}
- (id)init;
- (id)randomMicBuffer;
- (void)setRandomMicBuffer:(id)arg1;
- (unsigned int)applyScene;
- (void)setApplyScene:(unsigned int)arg1;
- (id)sceneBuffer;
- (void)setSceneBuffer:(id)arg1;
- (id)candidateRequestId;
- (void)setCandidateRequestId:(id)arg1;
- (void).cxx_destruct;
@end
