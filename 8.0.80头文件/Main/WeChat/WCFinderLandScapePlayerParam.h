@interface WCFinderLandScapePlayerParam : NSObject
{
    BOOL _loopPlay; // +0x8
    BOOL _hideStatusBarBG; // +0x9
    BOOL _hideBullet; // +0xa
    BOOL _shouldAdjustCollectionPostion; // +0xb
    int _commentScene; // +0xc
}
- (BOOL)loopPlay;
- (void)setLoopPlay:(BOOL)arg1;
- (BOOL)hideStatusBarBG;
- (void)setHideStatusBarBG:(BOOL)arg1;
- (BOOL)hideBullet;
- (void)setHideBullet:(BOOL)arg1;
- (BOOL)shouldAdjustCollectionPostion;
- (void)setShouldAdjustCollectionPostion:(BOOL)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
@end
