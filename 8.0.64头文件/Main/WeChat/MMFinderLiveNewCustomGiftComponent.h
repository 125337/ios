@interface MMFinderLiveNewCustomGiftComponent : MMFinderLiveNewCustomGiftStyleObj <NSCopying>
{
    unsigned int _seq; // +0x8
    NSString * _componentName; // +0x10
    NSArray * _componentValueList; // +0x18
    NSString * _selectComponentKey; // +0x20
    NSString * _key; // +0x28
    unsigned long long _uiStyle; // +0x30
    NSString * _currentSelectComponentKey; // +0x38
    id /* block */ _currSelectComponentKeyChangeCallback; // +0x40
}
+ (id)transferFromComponentPB:(id)arg1 business:(id)arg2;
+ (BOOL)isComponentPBValid:(id)arg1 business:(id)arg2;
- (id)styleName;
- (BOOL)updateCurrentSelectComponentKey:(id)arg1;
- (id)getCurrentSelectComponentValue;
- (BOOL)isCurrentSelectEqualToCustomizationConfig;
- (BOOL)synchronizeCurrentSelectToCustomizationConfig;
- (BOOL)recoverCurrentSelectFromCustomizationConfig;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getFirstComponentValueSupportCustomText;
- (id)componentName;
- (void)setComponentName:(id)arg1;
- (id)componentValueList;
- (void)setComponentValueList:(id)arg1;
- (id)selectComponentKey;
- (void)setSelectComponentKey:(id)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (id)currentSelectComponentKey;
- (void)setCurrentSelectComponentKey:(id)arg1;
- (id /* block */)currSelectComponentKeyChangeCallback;
- (void)setCurrSelectComponentKeyChangeCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
