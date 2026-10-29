@interface VoipRecentStatusUnFoldButton : UIView
{
    BOOL _isDoNotDisturbMode; // +0x8
    BOOL _isUsingMPUI; // +0x9
    UILabel * _titleLabel; // +0x10
    CContact * _contact; // +0x18
    _TtC6WeChat13DNDReportItem * _dndReportItem; // +0x20
}
- (id)initWithContact:(id)arg1;
- (void)exposed;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)isDoNotDisturbMode;
- (void)setIsDoNotDisturbMode:(BOOL)arg1;
- (BOOL)isUsingMPUI;
- (void)setIsUsingMPUI:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)dndReportItem;
- (void)setDndReportItem:(id)arg1;
- (void).cxx_destruct;
@end

