@interface MMLiveCommentPubbleCellFrameExtraConfig : NSObject
{
    BOOL _needHideBadge; // +0x8
    BOOL _needUseClearBackgroundColor; // +0x9
}
+ (id)configForLiveFeed;
- (BOOL)needHideBadge;
- (void)setNeedHideBadge:(BOOL)arg1;
- (BOOL)needUseClearBackgroundColor;
- (void)setNeedUseClearBackgroundColor:(BOOL)arg1;
@end
