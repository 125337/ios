@interface TrackRoomHeadListItemV1 : MMUIView
{
    BOOL _selected; // +0x8
    id <TrackRoomHeadListItemV1Delegate> _delegate; // +0x10
    UIImageView * _normalBgImageView; // +0x18
    UIImageView * _selectedBgImageView; // +0x20
    MMHeadImageView * _headImageView; // +0x28
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)username;
- (void)setUsername:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (BOOL)selected;
- (id)delegate;
- (void).cxx_destruct;
@end
