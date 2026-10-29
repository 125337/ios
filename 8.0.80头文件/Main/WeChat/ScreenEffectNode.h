@interface ScreenEffectNode : AnimateEmojiBaseNode <YYModel>
{
    int _delay; // +0x8
    unsigned long long _effectVersion; // +0x10
    NSString * _effectId; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)isValid;
- (int)effectOption;
- (id)debugDescription;
- (int)delay;
- (void)setDelay:(int)arg1;
- (unsigned long long)effectVersion;
- (void)setEffectVersion:(unsigned long long)arg1;
- (id)effectId;
- (void)setEffectId:(id)arg1;
- (void).cxx_destruct;
@end
