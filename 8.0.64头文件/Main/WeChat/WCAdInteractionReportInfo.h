@interface WCAdInteractionReportInfo : NSObject <NSCoding>
{
    unsigned int _exposureCount; // +0x8
    unsigned long long _appearTimestamp; // +0x10
    unsigned long long _disappearTimestamp; // +0x18
    unsigned long long _statyTime; // +0x20
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)appearTimestamp;
- (void)setAppearTimestamp:(unsigned long long)arg1;
- (unsigned long long)disappearTimestamp;
- (void)setDisappearTimestamp:(unsigned long long)arg1;
- (unsigned long long)statyTime;
- (void)setStatyTime:(unsigned long long)arg1;
- (unsigned int)exposureCount;
- (void)setExposureCount:(unsigned int)arg1;
@end
