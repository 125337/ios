@interface WCCardUseConditionInfo : MMObject
{
    NSString * _title; // +0x8
    NSArray * _outerTagList; // +0x10
    NSArray * _innerTagList; // +0x18
    NSArray * _detailField; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)outerTagList;
- (void)setOuterTagList:(id)arg1;
- (id)innerTagList;
- (void)setInnerTagList:(id)arg1;
- (id)detailField;
- (void)setDetailField:(id)arg1;
- (void).cxx_destruct;
@end

