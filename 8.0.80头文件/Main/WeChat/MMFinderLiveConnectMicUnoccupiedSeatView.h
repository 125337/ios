@interface MMFinderLiveConnectMicUnoccupiedSeatView : UIView
{
    id <MMFinderLiveConnectMicUnoccupiedSeatViewDelegate> _actionDelegate; // +0x8
    MMFinderLiveConnectMicSeatInfo * _micSeatInfo; // +0x10
    UIImageView * _addIconView; // +0x18
    UILabel * _titleLabel; // +0x20
    MMFinderLiveConnectMicSeatNameLabel * _seatNameLabel; // +0x28
    unsigned long long _pkState; // +0x30
    unsigned long long _micLayoutMode; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configUI;
- (void)updateViewsColorAfterPIPModeChanged;
- (void)onTapBackground:(id)arg1;
- (void)layoutUI;
- (void)updateWithSeatInfo:(id)arg1 micLayoutMode:(unsigned long long)arg2 pkState:(unsigned long long)arg3 customTitle:(id)arg4;
- (BOOL)isSmallMode;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)micSeatInfo;
- (void)setMicSeatInfo:(id)arg1;
- (id)addIconView;
- (void)setAddIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)seatNameLabel;
- (void)setSeatNameLabel:(id)arg1;
- (unsigned long long)pkState;
- (void)setPkState:(unsigned long long)arg1;
- (unsigned long long)micLayoutMode;
- (void)setMicLayoutMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
