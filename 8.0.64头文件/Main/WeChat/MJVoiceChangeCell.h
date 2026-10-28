@interface MJVoiceChangeCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    id <MJVoiceChangeCellDelegate> _delegate; // +0x10
    UILabel * _titleLabel; // +0x18
    MJVoiceItem * _item; // +0x20
    MMWebImageView * _iconImageView; // +0x28
    UIView * _maskView; // +0x30
    UIView * _iconContainerView; // +0x38
    MMUIActivityIndicatorView * _loadingView; // +0x40
    UIControl * _deleteCloneRoleControl; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupMaskViewWithLoadingStyle;
- (void)setupMaskViewWithRetryStyle;
- (void)retryButtonDidTouchUpInside;
- (void)prepareForReuse;
- (void)setupWithItem:(id)arg1;
- (void)syncWithStatus;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)deleteCloneRoleControl;
- (void)deleteCloneRoleControlDidTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (id)item;
- (BOOL)isCellSelected;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void)setDeleteCloneRoleControl:(id)arg1;
- (void).cxx_destruct;
@end
