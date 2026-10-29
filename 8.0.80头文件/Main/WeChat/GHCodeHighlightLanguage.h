@interface GHCodeHighlightLanguage : NSObject
{
    NSString * _name; // +0x8
    NSArray * _rules; // +0x10
}
+ (id)aliasMap;
+ (id)languageWithIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)rules;
- (void)setRules:(id)arg1;
- (void).cxx_destruct;
@end
