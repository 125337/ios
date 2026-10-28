@interface WCFinderTranslateInfo : NSObject
{
    NSString * _originText; // +0x8
    unsigned long long _clientID; // +0x10
    NSString * _translatedText; // +0x18
    NSString * _translatedLang; // +0x20
    NSString * _brandWording; // +0x28
}
- (id)originText;
- (void)setOriginText:(id)arg1;
- (unsigned long long)clientID;
- (void)setClientID:(unsigned long long)arg1;
- (id)translatedText;
- (void)setTranslatedText:(id)arg1;
- (id)translatedLang;
- (void)setTranslatedLang:(id)arg1;
- (id)brandWording;
- (void)setBrandWording:(id)arg1;
- (void).cxx_destruct;
@end
