@interface MMFinderLiveBattleDurationItem : NSObject
{
    unsigned int _interval; // +0x8
    NSString * _displayName; // +0x10
}
+ (id)itemsWithBackendArray:(id)arg1;
- (id)initWithInterval:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)interval;
- (void)setInterval:(unsigned int)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (void).cxx_destruct;
@end
