@interface WCPlayerDownloadInfo : NSObject
{
    unsigned int _moovState; // +0x8
    unsigned long long _moovPos; // +0x10
    unsigned long long _moovLen; // +0x18
    NSString * _svrFlag; // +0x20
    unsigned long long _totalLen; // +0x28
    unsigned long long _currentCompletedSize; // +0x30
    unsigned long long _previousCompletedSize; // +0x38
    double _duration; // +0x40
    double _currentPlayable; // +0x48
    double _previousPlayable; // +0x50
    NSDictionary * _dicVideoBoxs; // +0x58
    unsigned long long _mdatLen; // +0x60
    NSString * _boxsDescription; // +0x68
}
- (id)init;
- (void)setDuration:(double)arg1;
- (void)setMdatLen:(unsigned long long)arg1;
- (void)setCurrentCompletedSize:(unsigned long long)arg1;
- (double)getPlayableWithDataLen:(unsigned long long)arg1;
- (unsigned long long)getExtraLengthWithTime:(double)arg1;
- (void)setDicVideoBoxs:(id)arg1;
- (id)boxsDescription;
- (unsigned int)moovState;
- (void)setMoovState:(unsigned int)arg1;
- (unsigned long long)moovPos;
- (void)setMoovPos:(unsigned long long)arg1;
- (unsigned long long)moovLen;
- (void)setMoovLen:(unsigned long long)arg1;
- (id)svrFlag;
- (void)setSvrFlag:(id)arg1;
- (unsigned long long)totalLen;
- (void)setTotalLen:(unsigned long long)arg1;
- (unsigned long long)currentCompletedSize;
- (unsigned long long)previousCompletedSize;
- (void)setPreviousCompletedSize:(unsigned long long)arg1;
- (double)duration;
- (double)currentPlayable;
- (void)setCurrentPlayable:(double)arg1;
- (double)previousPlayable;
- (void)setPreviousPlayable:(double)arg1;
- (id)dicVideoBoxs;
- (unsigned long long)mdatLen;
- (void)setBoxsDescription:(id)arg1;
- (void).cxx_destruct;
@end

