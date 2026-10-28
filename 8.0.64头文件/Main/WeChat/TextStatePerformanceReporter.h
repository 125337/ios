@interface TextStatePerformanceReporter : NSObject
{
    unsigned int _privateAction; // +0x8
    unsigned int _privateSubaction; // +0xc
    unsigned long long _privateDuration; // +0x10
}
+ (id)reporter;
- (id /* block */)action;
- (id /* block */)subaction;
- (id /* block */)duration;
- (id /* block */)report;
- (unsigned int)privateAction;
- (void)setPrivateAction:(unsigned int)arg1;
- (unsigned int)privateSubaction;
- (void)setPrivateSubaction:(unsigned int)arg1;
- (unsigned long long)privateDuration;
- (void)setPrivateDuration:(unsigned long long)arg1;
@end
