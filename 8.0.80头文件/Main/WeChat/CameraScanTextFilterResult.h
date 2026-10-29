@interface CameraScanTextFilterResult : NSObject
{
    unsigned int _intentType; // +0x8
    long long _langRatio; // +0x10
    long long _textRatio; // +0x18
}
- (long long)langRatio;
- (void)setLangRatio:(long long)arg1;
- (long long)textRatio;
- (void)setTextRatio:(long long)arg1;
- (unsigned int)intentType;
- (void)setIntentType:(unsigned int)arg1;
@end
