@interface MMEmoticonPersonalCenterContext : MMEmoticonLiteAppPageContextBase
{
    long long _emotionCenterScene; // +0x8
}
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (id)init;
- (long long)emotionCenterScene;
- (void)setEmotionCenterScene:(long long)arg1;
@end
