@interface MMWebTransNode : NSObject
{
    BOOL _isNodeInFirstScreen; // +0x8
    BOOL _isTitle; // +0x9
    NSString * _hashCode; // +0x10
    NSString * _orgText; // +0x18
    NSString * _transText; // +0x20
    NSString * _brand; // +0x28
    NSString * _styleList; // +0x30
    NSString * _parentid; // +0x38
    NSString * _grandparentid; // +0x40
    NSString * _tagname; // +0x48
    NSString * _greatGrandParentId; // +0x50
    NSString * _grandTagname; // +0x58
    NSString * _greatGrandTagname; // +0x60
}
- (id)hashCode;
- (void)setHashCode:(id)arg1;
- (id)orgText;
- (void)setOrgText:(id)arg1;
- (id)transText;
- (void)setTransText:(id)arg1;
- (id)brand;
- (void)setBrand:(id)arg1;
- (id)styleList;
- (void)setStyleList:(id)arg1;
- (id)parentid;
- (void)setParentid:(id)arg1;
- (id)grandparentid;
- (void)setGrandparentid:(id)arg1;
- (id)tagname;
- (void)setTagname:(id)arg1;
- (id)greatGrandParentId;
- (void)setGreatGrandParentId:(id)arg1;
- (id)grandTagname;
- (void)setGrandTagname:(id)arg1;
- (id)greatGrandTagname;
- (void)setGreatGrandTagname:(id)arg1;
- (BOOL)isNodeInFirstScreen;
- (void)setIsNodeInFirstScreen:(BOOL)arg1;
- (BOOL)isTitle;
- (void)setIsTitle:(BOOL)arg1;
- (void).cxx_destruct;
@end

