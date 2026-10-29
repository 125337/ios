@interface WCFinderSetWarningWordingResult : NSObject
{
    BOOL _postDirectly; // +0x8
    unsigned long long _warnFlag; // +0x10
    NSString * _warningWording; // +0x18
    NSString * _selectWording; // +0x20
    unsigned long long _tagType; // +0x28
    NSString * _tagSecKey; // +0x30
}
- (unsigned long long)warnFlag;
- (void)setWarnFlag:(unsigned long long)arg1;
- (id)warningWording;
- (void)setWarningWording:(id)arg1;
- (id)selectWording;
- (void)setSelectWording:(id)arg1;
- (unsigned long long)tagType;
- (void)setTagType:(unsigned long long)arg1;
- (id)tagSecKey;
- (void)setTagSecKey:(id)arg1;
- (BOOL)postDirectly;
- (void)setPostDirectly:(BOOL)arg1;
- (void).cxx_destruct;
@end
