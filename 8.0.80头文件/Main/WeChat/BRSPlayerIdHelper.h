@interface BRSPlayerIdHelper : NSObject
{
    long long _currentId; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (long long)nextUniqueId;
- (void)resetIdCounter;
- (long long)currentId;
- (void)setCurrentId:(long long)arg1;
@end
