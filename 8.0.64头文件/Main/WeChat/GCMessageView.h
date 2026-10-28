@interface GCMessageView : UIView
{
    GCMessageViewModel * _viewModel; // +0x8
    GCCollectionView * _messageCollectionView; // +0x10
    double _notificationBarHeight; // +0x18
    GCMinContentSizeFlowLayout * _layout; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)updateFlowLayoutMinContentSize;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)messageCollectionView;
- (void)setMessageCollectionView:(id)arg1;
- (double)notificationBarHeight;
- (void)setNotificationBarHeight:(double)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (void).cxx_destruct;
@end
