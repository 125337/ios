@interface MMFinderLiveCastingView : UIView
{
    id <MMFinderLiveCastingViewDelegate> _delegate; // +0x8
    MMLiveCastDeviceViewItem * _viewItem; // +0x10
    UIButton * _stopButton; // +0x18
    UIImageView * _iconImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _deviceLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewItem:(id)arg1;
- (void)layoutSubviews;
- (void)stopButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewItem;
- (id)stopButton;
- (void)setStopButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)deviceLabel;
- (void)setDeviceLabel:(id)arg1;
- (void).cxx_destruct;
@end

