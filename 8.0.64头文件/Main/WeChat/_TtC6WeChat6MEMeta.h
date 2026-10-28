@interface _TtC6WeChat6MEMeta : _TtC6WeChat10MEBaseMeta
{
     ext; // +0x40
     emojiKey; // +0x50
     isFrom; // +0x60
     msgId; // +0x64
     msgType; // +0x68
     fromUserName; // +0x70
     toUserName; // +0x80
     emojiConfigVersion; // +0x90
     content; // +0x98
}
- (id)ext;
- (void)setExt:(id)arg1;
- (id)emojiKey;
- (void)setEmojiKey:(id)arg1;
- (BOOL)isFrom;
- (void)setIsFrom:(BOOL)arg1;
- (unsigned int)msgId;
- (void)setMsgId:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (long long)emojiConfigVersion;
- (void)setEmojiConfigVersion:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)toDictionary;
- (id)init;
- (void).cxx_destruct;
@end
