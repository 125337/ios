@interface WCOperateFloatViewParams : NSObject
{
    BOOL _isEnhanceInteractionEnabled; // +0x8
    long long _browseScene; // +0x10
}
+ (id)defaultParams;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (long long)browseScene;
- (void)setBrowseScene:(long long)arg1;
@end
