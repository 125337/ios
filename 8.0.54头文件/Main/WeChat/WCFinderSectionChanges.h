@interface WCFinderSectionChanges : NSObject
{
    long long _type; // +0x8
    long long _section; // +0x10
    WCFinderChangeSet * _changes; // +0x18
}
+ (id)changeWithSection:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)section;
- (void)setSection:(long long)arg1;
- (id)changes;
- (void)setChanges:(id)arg1;
- (void).cxx_destruct;
@end

