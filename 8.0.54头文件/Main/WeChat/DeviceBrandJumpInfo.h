@interface DeviceBrandJumpInfo : NSObject
{
    unsigned long long _jumpType; // +0x8
    NSString * _brandFinderUsername; // +0x10
}
- (id)init;
- (unsigned long long)jumpType;
- (void)setJumpType:(unsigned long long)arg1;
- (id)brandFinderUsername;
- (void)setBrandFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

