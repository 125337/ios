@interface GameCenterLabelInfo : MMObject <PBCoding>
{
    NSString * _labelName; // +0x8
    NSString * _labelBgColor; // +0x10
}
+ (void)PBArrayAdd_labelName;
+ (void)PBArrayAdd_labelBgColor;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)labelName;
- (void)setLabelName:(id)arg1;
- (id)labelBgColor;
- (void)setLabelBgColor:(id)arg1;
- (void).cxx_destruct;
@end
