@interface QLogoSource : NSObject
{
    int _priority; // +0x8
    long long _rule; // +0x10
    NSString * _frontierName; // +0x18
    NSString * _logoName; // +0x20
    NSString * _logoURL; // +0x28
    NSString * _logoNightURL; // +0x30
}
- (long long)rule;
- (void)setRule:(long long)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
- (id)frontierName;
- (void)setFrontierName:(id)arg1;
- (id)logoName;
- (void)setLogoName:(id)arg1;
- (id)logoURL;
- (void)setLogoURL:(id)arg1;
- (id)logoNightURL;
- (void)setLogoNightURL:(id)arg1;
- (void).cxx_destruct;
@end
