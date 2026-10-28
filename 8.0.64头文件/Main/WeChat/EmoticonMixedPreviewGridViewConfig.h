@interface EmoticonMixedPreviewGridViewConfig : NSObject
{
    unsigned long long _type; // +0x8
    NSArray * _emojiInfoArr; // +0x10
    NSArray * _emojiSummaryArr; // +0x18
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)emojiInfoArr;
- (void)setEmojiInfoArr:(id)arg1;
- (id)emojiSummaryArr;
- (void)setEmojiSummaryArr:(id)arg1;
- (void).cxx_destruct;
@end
