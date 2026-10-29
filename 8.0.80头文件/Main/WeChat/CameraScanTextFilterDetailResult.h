@interface CameraScanTextFilterDetailResult : NSObject
{
    unsigned int _intentType; // +0x8
    double _langRatio; // +0x10
    double _textRatio; // +0x18
}
- (double)langRatio;
- (void)setLangRatio:(double)arg1;
- (double)textRatio;
- (void)setTextRatio:(double)arg1;
- (unsigned int)intentType;
- (void)setIntentType:(unsigned int)arg1;
@end
