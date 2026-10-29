@interface WCFinderFeedDetailVCParams : NSObject
{
    BOOL _expandToStream; // +0x8
    BOOL _showLBSJumpInfo; // +0x9
    BOOL _hideLike; // +0xa
    BOOL _fromNewLife; // +0xb
    int _customCommenScene; // +0xc
}
+ (id)defaultParams;
- (BOOL)expandToStream;
- (void)setExpandToStream:(BOOL)arg1;
- (BOOL)showLBSJumpInfo;
- (void)setShowLBSJumpInfo:(BOOL)arg1;
- (int)customCommenScene;
- (void)setCustomCommenScene:(int)arg1;
- (BOOL)hideLike;
- (void)setHideLike:(BOOL)arg1;
- (BOOL)fromNewLife;
- (void)setFromNewLife:(BOOL)arg1;
@end

