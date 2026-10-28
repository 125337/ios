@interface WCSiriContactList : NSObject <PBCoding>
{
    NSMutableDictionary * _contactDict; // +0x8
}
+ (void)PBArrayAdd_contactDict;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)contactDict;
- (void)setContactDict:(id)arg1;
- (void).cxx_destruct;
@end
