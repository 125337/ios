@interface EmoticonThumbImageTask : NSObject
{
    id /* block */ _sucBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    NSString * _md5; // +0x18
    EmojiInfoObj * _emojiInfo; // +0x20
    NSString * _savingPath; // +0x28
}
- (id)initWithMd5:(id)arg1 emojiInfo:(id)arg2;
- (id)initWithMd5:(id)arg1 emojiInfoBuf:(id)arg2;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)emojiInfo;
- (void)setEmojiInfo:(id)arg1;
- (id)savingPath;
- (void)setSavingPath:(id)arg1;
- (void).cxx_destruct;
@end
