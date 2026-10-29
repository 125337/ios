@interface CBTCoopV2TingCategoryPresetRowView : UIControl
{
    BOOL _showsFullWidthDivider; // +0x8
    BOOL _contentDirty; // +0x9
    BOOL _sessionDirty; // +0xa
    BOOL _exposureReportEnabled; // +0xb
    int _playScene; // +0xc
    TingSharePlayButton * _playButton; // +0x10
    MMWebImageView * _coverView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _subtitleLabel; // +0x28
    UIView * _dividerView; // +0x30
    id _playButtonTarget; // +0x38
    SEL _playButtonAction; // +0x40
    TingItem * _item; // +0x48
    MMListenCategoryItem * _categoryItem; // +0x50
    double _titleLineHeight; // +0x58
    double _subtitleLineHeight; // +0x60
    NSString * _sessionChat; // +0x68
    NSString * _sessionMsgId; // +0x70
    NSString * _sessionSourceUser; // +0x78
    NSArray * _sessionExtinfo2; // +0x80
    NSString * _exposureReportBindingKey; // +0x88
}
- (void)setHighlighted:(BOOL)arg1;
- (void)configurePlayButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)updateWithItem:(id)arg1 categoryItem:(id)arg2;
- (void)configureLayoutWithTitleLineHeight:(double)arg1 subtitleLineHeight:(double)arg2 showsFullWidthDivider:(BOOL)arg3;
- (void)updatePlaySessionWithScene:(int)arg1 chat:(id)arg2 msgId:(id)arg3 sourceUser:(id)arg4 extinfo2:(id)arg5;
- (void)prepareForReuse;
- (void)ensureSubviews;
- (void)applyContentIfNeeded;
- (void)applyPlaySessionIfNeeded;
- (void)applyTheme;
- (void)layoutSubviews;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)playButtonTarget;
- (void)setPlayButtonTarget:(id)arg1;
- (SEL)playButtonAction;
- (void)setPlayButtonAction:(SEL)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (double)titleLineHeight;
- (void)setTitleLineHeight:(double)arg1;
- (double)subtitleLineHeight;
- (void)setSubtitleLineHeight:(double)arg1;
- (BOOL)showsFullWidthDivider;
- (void)setShowsFullWidthDivider:(BOOL)arg1;
- (int)playScene;
- (void)setPlayScene:(int)arg1;
- (id)sessionChat;
- (void)setSessionChat:(id)arg1;
- (id)sessionMsgId;
- (void)setSessionMsgId:(id)arg1;
- (id)sessionSourceUser;
- (void)setSessionSourceUser:(id)arg1;
- (id)sessionExtinfo2;
- (void)setSessionExtinfo2:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (BOOL)sessionDirty;
- (void)setSessionDirty:(BOOL)arg1;
- (id)exposureReportBindingKey;
- (void)setExposureReportBindingKey:(id)arg1;
- (BOOL)exposureReportEnabled;
- (void)setExposureReportEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
