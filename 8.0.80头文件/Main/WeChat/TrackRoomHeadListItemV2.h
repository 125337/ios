@interface TrackRoomHeadListItemV2 : MMUIView
{
    BOOL _selected; // +0x8
    id <TrackRoomHeadListItemV2Delegate> _delegate; // +0x10
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
- (id)normalBgImageView;
- (void)setNormalBgImageView:(id)arg1;
- (id)selectedBgImageView;
- (void)setSelectedBgImageView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
