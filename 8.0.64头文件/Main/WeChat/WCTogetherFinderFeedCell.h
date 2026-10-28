@interface WCTogetherFinderFeedCell : WCTogetherBaseFeedCell
{
    MMWebImageView * _previewImageView; // +0x8
    SightIconView * _playIconView; // +0x10
}
+ (id)cellIdentifier;
+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadItemContentView;
- (void)layoutItemContentView;
- (void)contentDidTap;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg1;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (void).cxx_destruct;
@end
