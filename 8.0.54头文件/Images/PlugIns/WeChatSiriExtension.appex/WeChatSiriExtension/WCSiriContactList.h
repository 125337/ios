@interface WCSiriContactList : NSObject <PBCoding>
{
    NSMutableDictionary * contactDict; // +0x8
}
+ (void)PBArrayAdd_contactDict;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)searchContactListWithTerm:(id)arg1;
- (id)searchContactListWithIdentify:(id)arg1;
- (id)contactDict;
- (void)setContactDict:(id)arg1;
- (void).cxx_destruct;
@end

