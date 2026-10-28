@interface WCTogetherFeedFooterView : WCTogetherReusableView
{
    UIView * _bottomLine; // +0x8
}
+ (id)reusableViewIdentifier;
+ (double)heightForViewSection:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
