@interface MuteBrandTipView : MMPageSheetBaseView
{
    NSMutableArray * _displayContactNameArr; // +0x8
    UIView * _headView; // +0x10
    UIView * _contentView; // +0x18
    UIView * _unreadLabel; // +0x20
    UIView * _redDotView; // +0x28
    UIView * _bigHeadImage; // +0x30
    UIView * _bigView; // +0x38
    UIView * _shadowView; // +0x40
}
- (id)initWithContact:(id)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetDidAppear;
- (void)initContactList:(id)arg1;
- (id)headView;
- (id)contentView;
- (id)centerImageView:(CGSize)arg1;
- (void)close;
- (void)startAnimation;
- (void)onDarkModeChange:(BOOL)arg1;
- (id)displayContactNameArr;
- (void)setDisplayContactNameArr:(id)arg1;
- (void)setHeadView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)unreadLabel;
- (void)setUnreadLabel:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)bigHeadImage;
- (void)setBigHeadImage:(id)arg1;
- (id)bigView;
- (void)setBigView:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (void).cxx_destruct;
@end

