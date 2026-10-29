@interface EmoticonDownloadInfo : NSObject
{
    BOOL _isDownloading; // +0x8
    NSString * _key; // +0x10
    EmojiInfoObj * _emojiInfoObj; // +0x18
    NSMutableSet * _msgWrapSet; // +0x20
}
- (id)description;
- (id)key;
- (void)setKey:(id)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)msgWrapSet;
- (void)setMsgWrapSet:(id)arg1;
- (BOOL)isDownloading;
- (void)setIsDownloading:(BOOL)arg1;
- (void).cxx_destruct;
@end

