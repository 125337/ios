@interface AnimateEmojiConfig : AnimateEmojiBaseNode
{
    unsigned long long _emojiAnimVersion; // +0x8
    NSMutableDictionary * _nodes; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 resDir:(id)arg2;
+ (id)fromConfigPath:(id)arg1 resDir:(id)arg2;
+ (id)xmlFileName;
- (id)init;
- (id)debugDescription;
- (unsigned long long)emojiAnimVersion;
- (void)setEmojiAnimVersion:(unsigned long long)arg1;
- (id)nodes;
- (void)setNodes:(id)arg1;
- (void).cxx_destruct;
@end

