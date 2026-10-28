@interface SystemEmoji : NSObject <YYModel>
{
    NSString * _emojiString; // +0x8
    NSArray * _variations; // +0x10
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)emojiString;
- (void)setEmojiString:(id)arg1;
- (id)variations;
- (void)setVariations:(id)arg1;
- (void).cxx_destruct;
@end
