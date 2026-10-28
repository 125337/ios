@interface TextStateMessageBoxCollectionViewCell : UICollectionViewCell
{
    id /* block */ _messageBoxTapAction; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    MMUILabel * _messageLabel; // +0x18
    NSMutableArray * _headImageViews; // +0x20
    UIStackView * _headImageStackView; // +0x28
    UIStackView * _rootStackView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)headImageViews;
- (void)configWith:(id)arg1;
- (id /* block */)messageBoxTapAction;
- (void)setMessageBoxTapAction:(id /* block */)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (void)setHeadImageViews:(id)arg1;
- (id)headImageStackView;
- (void)setHeadImageStackView:(id)arg1;
- (id)rootStackView;
- (void)setRootStackView:(id)arg1;
- (void).cxx_destruct;
@end
