@interface MMFinderLiveMultiAuthCompleteEvent : NSObject
{
    BOOL _success; // +0x8
}
+ (id)eventWithSuccess:(BOOL)arg1;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
@end
