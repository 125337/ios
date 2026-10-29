@interface MiniTaskCollectionBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate, MiniTaskCollectionCellViewModelDelegate>
{
    BOOL _isEditing; // +0x8
    MiniTaskCollectionCellViewModel * _viewModel; // +0x10
    id <MiniTaskCollectionCellDelegate> _delegate; // +0x18
    UIImageView * _snapShotView; // +0x20
    UIImageView * _iconImageView; // +0x28
    MiniTaskLongPressGesture * _longPressGes; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewModel:(id)arg1;
- (void)asyncLoadSnapshot:(id /* block */)arg1;
- (CGRect)menuPopoverFrame;
- (id)menuItems;
- (id)defaultIconNameForBizName:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onMenuSelectFavorite:(id)arg1;
- (void)onMenuSelectDelete:(id)arg1;
- (CGSize)snapshotImagePreferredSize;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)snapShotView;
- (void)setSnapShotView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (id)longPressGes;
- (void)setLongPressGes:(id)arg1;
- (void).cxx_destruct;
@end

