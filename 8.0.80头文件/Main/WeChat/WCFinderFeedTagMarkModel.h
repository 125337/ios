@interface WCFinderFeedTagMarkModel : NSObject <PBCoding>
{
    unsigned long long _flag; // +0x8
}
+ (void)PBArrayAdd_flag;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)flag;
- (void)setFlag:(unsigned long long)arg1;
@end
