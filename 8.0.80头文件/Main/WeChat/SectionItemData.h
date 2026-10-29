@interface SectionItemData : NSObject
{
    unsigned long long _type; // +0x8
    NSArray * _iconArr; // +0x10
    NSArray * _titleArr; // +0x18
    NSString * _sectionTitle; // +0x20
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)iconArr;
- (void)setIconArr:(id)arg1;
- (id)titleArr;
- (void)setTitleArr:(id)arg1;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (void).cxx_destruct;
@end
