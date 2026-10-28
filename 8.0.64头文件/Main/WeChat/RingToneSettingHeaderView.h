@interface RingToneSettingHeaderView : UIView <RingToneToolActionResponder, RingTonePlayerExt>
{
    int _layoutScene; // +0x8
    id <RingToneSettingHeaderViewDelegate> _delegate; // +0x10
    RingToneDetail * _ring; // +0x18
    UIView * _ringCardView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _authorLabel; // +0x30
    UIView * _lineView; // +0x38
    UIButton * _addExclusiveFriendButton; // +0x40
    RingToneToolView * _toolView; // +0x48
    MMUILabel * _descLabel; // +0x50
    SightIconView * _playImageView; // +0x58
    RingToneImageView * _coverImageView; // +0x60
    UIButton * _defaultLabel; // +0x68
    UIButton * _backgroundButton; // +0x70
}
+ (double)DefaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)layoutViewWithScene:(int)arg1 isDefault:(BOOL)arg2;
- (void)initView;
- (void)changeToMinimize:(BOOL)arg1;
- (void)changeToMaximize;
- (void)layoutNewStackView;
- (void)loadDefaultRing;
- (void)loadInvalidRing;
- (void)loadRingDetail:(id)arg1;
- (void)setTipWhenHasExclusiveRing:(BOOL)arg1;
- (void)initExclusiveRingViews;
- (void)onAddButtonTap;
- (void)onTapRingCardView;
- (void)resetToDefault;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (id)ringCardView;
- (void)setRingCardView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)authorLabel;
- (void)setAuthorLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)addExclusiveFriendButton;
- (void)setAddExclusiveFriendButton:(id)arg1;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)playImageView;
- (void)setPlayImageView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)defaultLabel;
- (void)setDefaultLabel:(id)arg1;
- (int)layoutScene;
- (void)setLayoutScene:(int)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (void).cxx_destruct;
@end
