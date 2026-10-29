@interface MMEditImageProcessTimestamp : NSObject
{
    unsigned long long _fixOrientationEndTimestamp; // +0x8
    unsigned long long _rotateEndTimestamp; // +0x10
    unsigned long long _genCacheImageEndTimestamp; // +0x18
    unsigned long long _setColorPointMapEndTimestamp; // +0x20
}
- (void)reset;
- (id)toJson;
- (void)logCostWithEnterEditImageViewTime:(unsigned long long)arg1;
- (unsigned long long)fixOrientationEndTimestamp;
- (void)setFixOrientationEndTimestamp:(unsigned long long)arg1;
- (unsigned long long)rotateEndTimestamp;
- (void)setRotateEndTimestamp:(unsigned long long)arg1;
- (unsigned long long)genCacheImageEndTimestamp;
- (void)setGenCacheImageEndTimestamp:(unsigned long long)arg1;
- (unsigned long long)setColorPointMapEndTimestamp;
- (void)setSetColorPointMapEndTimestamp:(unsigned long long)arg1;
@end
