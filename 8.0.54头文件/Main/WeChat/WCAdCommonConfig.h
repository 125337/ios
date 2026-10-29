@interface WCAdCommonConfig : NSObject <NSCoding>
{
    BOOL _forbidAutoPlay; // +0x8
    BOOL _hideFirstBossComment; // +0x9
    int _basicRemWidth; // +0xc
    int _basicRootFontSize; // +0x10
    int _finderLiveStreamDisplayType; // +0x14
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (BOOL)forbidAutoPlay;
- (void)setForbidAutoPlay:(BOOL)arg1;
- (int)basicRemWidth;
- (void)setBasicRemWidth:(int)arg1;
- (int)basicRootFontSize;
- (void)setBasicRootFontSize:(int)arg1;
- (BOOL)hideFirstBossComment;
- (void)setHideFirstBossComment:(BOOL)arg1;
- (int)finderLiveStreamDisplayType;
- (void)setFinderLiveStreamDisplayType:(int)arg1;
@end

