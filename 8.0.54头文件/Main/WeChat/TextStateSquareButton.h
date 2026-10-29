@interface TextStateSquareButton : MMUIButton
{
    BOOL _needsUpdateView; // +0x8
    unsigned int _notifyCount; // +0xc
    unsigned int _contactCount; // +0x10
    TextStateIcon * _passthroughIcon; // +0x18
    id <TextStateBaseNotifyInfo> _latestNotifyInfo; // +0x20
    NSString * _topUnreadContactUsername; // +0x28
    MMWebImageView * _iconImageView; // +0x30
    MMUILabel * _mainLabel; // +0x38
    UIView * _separatorView; // +0x40
    MMHeadImageView * _headImageView; // +0x48
    MMUILabel * _subLabel; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initCommonStyles;
- (void)initSubviews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)accessibilityLabel;
- (id)separatorView;
- (id)headImageView;
- (id)subLabel;
- (void)setPassthroughIcon:(id)arg1;
- (id)icon;
- (void)updateIcon;
- (void)setNotifyCount:(unsigned int)arg1;
- (void)setLatestNotifyInfo:(id)arg1;
- (void)setContactCount:(unsigned int)arg1;
- (void)setTopUnreadContactUsername:(id)arg1;
- (void)setNeedsUpdateView;
- (void)updateViewIfNeeded;
- (void)updateAppendView;
- (void)updateLayout;
- (id)passthroughIcon;
- (unsigned int)notifyCount;
- (id)latestNotifyInfo;
- (unsigned int)contactCount;
- (id)topUnreadContactUsername;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)mainLabel;
- (void)setMainLabel:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setSubLabel:(id)arg1;
- (BOOL)needsUpdateView;
- (void)setNeedsUpdateView:(BOOL)arg1;
- (void).cxx_destruct;
@end

