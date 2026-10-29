@interface WxpayKitPasswordTimestampResolution : NSObject
{
    unsigned long long _seconds; // +0x8
    NSString * _source; // +0x10
    unsigned long long _offsetMs; // +0x18
}
- (id)initWithSeconds:(unsigned long long)arg1 source:(id)arg2 offsetMs:(unsigned long long)arg3;
- (unsigned long long)seconds;
- (id)source;
- (unsigned long long)offsetMs;
- (void).cxx_destruct;
@end
