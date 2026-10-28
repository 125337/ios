@interface EnterpriseSearchResultItem : NSObject
{
    unsigned int _matchField; // +0x8
    NSString * _matchText; // +0x10
    NSObject * _item; // +0x18
}
- (id)initWithObject:(id)arg1 matchField:(unsigned int)arg2 matchText:(id)arg3;
- (unsigned int)matchField;
- (void)setMatchField:(unsigned int)arg1;
- (id)matchText;
- (void)setMatchText:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
