@interface WCFinderFriendLikeViewSetupParams : NSObject
{
    double _headImageMargin; // +0x8
    UIFont * _tipsFont; // +0x10
    UIColor * _tipsColor; // +0x18
    CGSize _headImageSize; // +0x20
}
- (id)init;
- (double)infoViewHeight;
- (CGSize)headImageSize;
- (void)setHeadImageSize:(CGSize)arg1;
- (double)headImageMargin;
- (void)setHeadImageMargin:(double)arg1;
- (id)tipsFont;
- (void)setTipsFont:(id)arg1;
- (id)tipsColor;
- (void)setTipsColor:(id)arg1;
- (void).cxx_destruct;
@end
