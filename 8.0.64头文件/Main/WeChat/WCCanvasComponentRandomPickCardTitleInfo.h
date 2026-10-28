@interface WCCanvasComponentRandomPickCardTitleInfo : MMObject <NSCoding>
{
    NSString * _fontColorNormal; // +0x8
    NSString * _fontColorSpecial; // +0x10
    NSString * _unlockPrefix; // +0x18
    NSString * _redundantPrefix; // +0x20
    NSString * _collectedPrefix; // +0x28
    NSString * _commonSuffix; // +0x30
    NSString * _specialPrefix; // +0x38
    NSString * _specialSuffix; // +0x40
    NSString * _allCollectedTitle; // +0x48
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fontColorNormal;
- (void)setFontColorNormal:(id)arg1;
- (id)fontColorSpecial;
- (void)setFontColorSpecial:(id)arg1;
- (id)unlockPrefix;
- (void)setUnlockPrefix:(id)arg1;
- (id)redundantPrefix;
- (void)setRedundantPrefix:(id)arg1;
- (id)collectedPrefix;
- (void)setCollectedPrefix:(id)arg1;
- (id)commonSuffix;
- (void)setCommonSuffix:(id)arg1;
- (id)specialPrefix;
- (void)setSpecialPrefix:(id)arg1;
- (id)specialSuffix;
- (void)setSpecialSuffix:(id)arg1;
- (id)allCollectedTitle;
- (void)setAllCollectedTitle:(id)arg1;
- (void).cxx_destruct;
@end
