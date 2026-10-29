@interface ContactsSearchSections : NSObject
{
    NSArray * _keys; // +0x8
    NSDictionary * _contactsByKey; // +0x10
}
+ (id)emptySections;
- (id)initWithKeys:(id)arg1 contactsByKey:(id)arg2;
- (id)keys;
- (id)contactsByKey;
- (void).cxx_destruct;
@end
