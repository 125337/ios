@interface WCTogetherImageFeedCell : WCTogetherBaseFeedCell <WCImageViewDelegate>
{
    WCGridView * _imageGridView; // +0x8
    NSArray * _imageViews; // +0x10
    UILabel * _imageCountLabel; // +0x18
}
+ (id)cellIdentifier;
+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadItemContentView;
- (void)layoutItemContentView;
- (void)onClickWCImage:(id)arg1;
- (id)imageGridView;
- (void)setImageGridView:(id)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)imageCountLabel;
- (void)setImageCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
