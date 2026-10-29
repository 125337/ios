@interface WCFinderNavLiveStreamPrefetchExtraData : NSObject <PBCoding>
{
    unsigned long long _scene; // +0x8
}
+ (void)PBArrayAdd_scene;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
@end

