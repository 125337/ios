@interface TrackRoomBottomBarHeadItem : MMUIView
{
    id <TrackRoomBottomBarHeadItemDelegate> _delegate; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)username;
- (void)setUsername:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)delegate;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
