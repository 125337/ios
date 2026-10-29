@interface LanguageModel : NSObject
{
    NSString * _mainDisplayName; // +0x8
    NSString * _localName; // +0x10
    NSString * _language; // +0x18
}
- (id)initWithMainName:(id)arg1 localName:(id)arg2 language:(id)arg3;
- (id)mainDisplayName;
- (void)setMainDisplayName:(id)arg1;
- (id)localName;
- (void)setLocalName:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (void).cxx_destruct;
@end
