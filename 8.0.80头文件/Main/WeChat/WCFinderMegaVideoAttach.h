@interface WCFinderMegaVideoAttach : NSObject
{
    BOOL _isLocal; // +0x8
    double _playPosition; // +0x10
    double _showTime; // +0x18
    unsigned long long _maxShowedPercent; // +0x20
    unsigned long long _playTimes; // +0x28
    UIImage * _capture; // +0x30
}
- (double)playPosition;
- (void)setPlayPosition:(double)arg1;
- (BOOL)isLocal;
- (void)setIsLocal:(BOOL)arg1;
- (double)showTime;
- (void)setShowTime:(double)arg1;
- (unsigned long long)maxShowedPercent;
- (void)setMaxShowedPercent:(unsigned long long)arg1;
- (unsigned long long)playTimes;
- (void)setPlayTimes:(unsigned long long)arg1;
- (id)capture;
- (void)setCapture:(id)arg1;
- (void).cxx_destruct;
@end
