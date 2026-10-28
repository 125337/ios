@interface MMAudioPlayerQueue : NSObject <CommonPlayerDelegate>
{
    float _m_volume; // +0x8
    NSMutableArray * _m_audioQueue; // +0x10
}
+ (id)sharedInstance;
- (void)onCommonPlayerPlayEnd;
- (void)onCommonPlayerError:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)playerWithFormat:(unsigned long long)arg1;
- (void)playSoundWithData:(id)arg1 format:(unsigned long long)arg2;
- (void)playSoundWithPath:(id)arg1 format:(unsigned long long)arg2;
- (id)init;
- (void)checkQueue;
- (id)m_audioQueue;
- (void)setM_audioQueue:(id)arg1;
- (float)m_volume;
- (void)setM_volume:(float)arg1;
- (void).cxx_destruct;
@end
