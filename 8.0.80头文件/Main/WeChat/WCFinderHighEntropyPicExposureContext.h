@interface WCFinderHighEntropyPicExposureContext : NSObject
{
    unsigned long long _startTimestamp; // +0x8
    double _lastContentOffsetX; // +0x10
    unsigned long long _entrySide; // +0x18
    PicStats_SinglePicStat * _stat; // +0x20
}
- (unsigned long long)startTimestamp;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (double)lastContentOffsetX;
- (void)setLastContentOffsetX:(double)arg1;
- (unsigned long long)entrySide;
- (void)setEntrySide:(unsigned long long)arg1;
- (id)stat;
- (void)setStat:(id)arg1;
- (void).cxx_destruct;
@end
