@interface WCFinderProfilePreloadCGIInfo : NSObject
{
    unsigned long long _start; // +0x8
    unsigned long long _end; // +0x10
    NSString * _name; // +0x18
    long long _errorCode; // +0x20
}
- (id)reportJson;
- (unsigned long long)start;
- (void)setStart:(unsigned long long)arg1;
- (unsigned long long)end;
- (void)setEnd:(unsigned long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (void).cxx_destruct;
@end

