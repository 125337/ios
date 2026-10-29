@interface WCCanvasShareComponent : WCCanvasComponent
{
    UIImageView * _shareIcon; // +0x8
    UILabel * _shareText; // +0x10
    UIButton * _hotZone; // +0x18
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)initViews;
- (id)shareIcon;
- (id)shareText;
- (id)hotZone;
- (void)updateViews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)onShareComponentClicked;
- (void)setShareIcon:(id)arg1;
- (void)setShareText:(id)arg1;
- (void)setHotZone:(id)arg1;
- (void).cxx_destruct;
@end

