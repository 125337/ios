@interface WCFinderNearbyLocationCollectionViewCell : UICollectionViewCell <ILinkEventExt>
{
    id <WCFinderNearbyLocationCellDelegate> _delegate; // +0x8
    UIImageView * _locationImageView; // +0x10
    RichTextView * _hintTextView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)locationImageView;
- (id)hintTextView;
- (void)initSubview;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setLocationImageView:(id)arg1;
- (void)setHintTextView:(id)arg1;
- (void).cxx_destruct;
@end
