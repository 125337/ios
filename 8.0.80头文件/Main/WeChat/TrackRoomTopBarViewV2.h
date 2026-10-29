@interface TrackRoomTopBarViewV2 : MMUIView
{
    id <TrackRoomTopBarViewV2Delegate> _delegate; // +0x8
    UIButton * _backButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)onBackButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (void).cxx_destruct;
@end
