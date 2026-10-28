@interface MMFinderLiveNewCustomGiftText : MMFinderLiveNewCustomGiftStyleObj <NSCopying>
{
    BOOL _supportCustomText; // +0x8
    BOOL _specificCustomText; // +0x9
    unsigned int _textLenLimit; // +0xc
    double _price; // +0x10
    NSString * _customText; // +0x18
    NSString * _antispamCustomText; // +0x20
    NSString * _key; // +0x28
    NSString * _currDisplayText; // +0x30
    NSString * _name; // +0x38
    id /* block */ _currDisplayTextChangeCallback; // +0x40
}
+ (id)transferFromGiftTextPB:(id)arg1 business:(id)arg2;
+ (BOOL)isGiftTextPBValid:(id)arg1 business:(id)arg2;
- (id)styleName;
- (BOOL)updateDisplayText:(id)arg1;
- (BOOL)isCurrentDisplayTextEqualToCustomizationConfig;
- (BOOL)synchronizeCurrentDisplayTextToCustomizationConfig;
- (BOOL)recoverCurrentDisplayTextFromCustomizationConfig;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)supportCustomText;
- (void)setSupportCustomText:(BOOL)arg1;
- (unsigned int)textLenLimit;
- (void)setTextLenLimit:(unsigned int)arg1;
- (double)price;
- (void)setPrice:(double)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (BOOL)specificCustomText;
- (void)setSpecificCustomText:(BOOL)arg1;
- (id)antispamCustomText;
- (void)setAntispamCustomText:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)currDisplayText;
- (void)setCurrDisplayText:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id /* block */)currDisplayTextChangeCallback;
- (void)setCurrDisplayTextChangeCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
