@interface WCFinderFeedDescriptionTableViewCell : UITableViewCell
{
    BOOL _timelineNoMoreCanShowHotSwitch; // +0x8
    BOOL _addActionShadow; // +0x9
    BOOL _setMoreActionFloat; // +0xa
    id <WCFinderFeedDescriptionTableViewCellDelegate> _delegate; // +0x10
    unsigned long long _type; // +0x18
    unsigned long long _curSection; // +0x20
    UILabel * _descriptionLabel; // +0x28
    UIButton * _actionButton; // +0x30
    UIView * _actionButtonBGView; // +0x38
    double _floatTopY; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)getFloatViewBeginY;
- (void)setType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)clickAction:(id)arg1;
- (id)moreActionView;
- (void)setMoreButtonFloat;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)type;
- (BOOL)timelineNoMoreCanShowHotSwitch;
- (void)setTimelineNoMoreCanShowHotSwitch:(BOOL)arg1;
- (unsigned long long)curSection;
- (void)setCurSection:(unsigned long long)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)actionButtonBGView;
- (void)setActionButtonBGView:(id)arg1;
- (BOOL)addActionShadow;
- (void)setAddActionShadow:(BOOL)arg1;
- (BOOL)setMoreActionFloat;
- (void)setSetMoreActionFloat:(BOOL)arg1;
- (double)floatTopY;
- (void)setFloatTopY:(double)arg1;
- (void).cxx_destruct;
@end
