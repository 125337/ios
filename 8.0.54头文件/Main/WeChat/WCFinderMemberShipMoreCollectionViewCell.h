@interface WCFinderMemberShipMoreCollectionViewCell : UICollectionViewCell <ILinkEventExt>
{
    id <WCFinderMemberShipMoreCollectionViewCellDelegate> _delegate; // +0x8
    UIView * _containerView; // +0x10
    RichTextView * _tipsTextView; // +0x18
    RichTextView * _updateTimeTextView; // +0x20
    WCFinderMemberShipMoreCollectionCoverView * _coverView; // +0x28
    unsigned long long _viewTag; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)genCoverView;
- (id)genContainerView;
- (void)setContainerViewCornerRadius:(double)arg1;
- (id)genRichTextView;
- (void)updateTips:(id)arg1 mediaWrapArray:(id)arg2 viewTag:(unsigned long long)arg3 updateTimeColor:(id)arg4 updateTimeContent:(id)arg5;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)tipsTextView;
- (void)setTipsTextView:(id)arg1;
- (id)updateTimeTextView;
- (void)setUpdateTimeTextView:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (unsigned long long)viewTag;
- (void)setViewTag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

