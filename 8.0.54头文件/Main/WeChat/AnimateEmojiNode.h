@interface AnimateEmojiNode : AnimateEmojiBaseNode <YYModel>
{
    NSString * _key; // +0x8
    NSString * _animFile; // +0x10
    ScreenEffectNode * _screenEffect; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 resDir:(id)arg2;
- (BOOL)isValid;
- (id)loadFramesFromDisk;
- (id)debugDescription;
- (id)key;
- (void)setKey:(id)arg1;
- (id)animFile;
- (void)setAnimFile:(id)arg1;
- (id)screenEffect;
- (void)setScreenEffect:(id)arg1;
- (void).cxx_destruct;
@end

