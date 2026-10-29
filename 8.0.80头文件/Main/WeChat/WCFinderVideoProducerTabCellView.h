@interface WCFinderVideoProducerTabCellView : UICollectionViewCell
{
    NSString * _currentText; // +0x8
    BOOL _currentSelected; // +0x10
    UILabel * _tabTitleLabel; // +0x18
    UIView * _underlineView; // +0x20
}
+ (id)cellIdentifier;
- (void)loadTabCellViewModel:(id)arg1;
- (id)tabTitleLabel;
- (void)setTabTitleLabel:(id)arg1;
- (id)underlineView;
- (void)setUnderlineView:(id)arg1;
- (void).cxx_destruct;
@end
