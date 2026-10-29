@interface WCResourceCollectionResuableView : UICollectionReusableView
{
    NSString * _viewTitle; // +0x8
    id <WCResourceHeaderViewDelegate> _delegate; // +0x10
    UIButton * _selectButton; // +0x18
    unsigned long long _sectionIndex; // +0x20
}
+ (id)identifier;
- (void)layoutSubviews;
- (void)updateWithViewTitle:(id)arg1 withSize:(CGSize)arg2;
- (void)onClickButton;
- (id)viewTitle;
- (void)setViewTitle:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectButton;
- (void)setSelectButton:(id)arg1;
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
