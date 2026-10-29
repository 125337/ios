@interface MMLiveConnectedMicStateCellView : UITableViewCell
{
    BOOL _canConnectMic; // +0x8
    BOOL _isDisabled; // +0x9
    UILabel * _titleLabel; // +0x10
    UISwitch * _connectMicSwitch; // +0x18
    id <MMLiveConnectedMicAudienceCellViewDelegate> _delegate; // +0x20
    UIView * _topSeparatorLine; // +0x28
    UIView * _bottomSeparatorLine; // +0x30
}
- (void)prepareForReuse;
- (void)updateViews;
- (void)layoutSubviews;
- (void)switchDidChanged:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)canConnectMic;
- (void)setCanConnectMic:(BOOL)arg1;
- (id)connectMicSwitch;
- (void)setConnectMicSwitch:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (BOOL)isDisabled;
- (void)setIsDisabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

