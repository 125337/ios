@interface WCFinderLiveTagListCollectionViewConfig : NSObject
{
    BOOL _forceDarkMode; // +0x8
    long long _limitCount; // +0x10
    long long _maxCharecterCount; // +0x18
    double _titleFontSize; // +0x20
    unsigned long long _commentScene; // +0x28
    CGSize _labelStretchSize; // +0x30
}
+ (id)defaultConfig;
- (long long)limitCount;
- (void)setLimitCount:(long long)arg1;
- (long long)maxCharecterCount;
- (void)setMaxCharecterCount:(long long)arg1;
- (CGSize)labelStretchSize;
- (void)setLabelStretchSize:(CGSize)arg1;
- (double)titleFontSize;
- (void)setTitleFontSize:(double)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (unsigned long long)commentScene;
- (void)setCommentScene:(unsigned long long)arg1;
@end
