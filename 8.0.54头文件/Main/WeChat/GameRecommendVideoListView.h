@interface GameRecommendVideoListView : UIView <UIScrollViewDelegate, GameVideoRecommendCardDelegate>
{
    UILabel * _titleView; // +0x8
    id <GameRecommendVideoListViewDelegate> _delegate; // +0x10
    NSArray * _recommendVideoList; // +0x18
    UILabel * _headerLabel; // +0x20
    UILabel * _tailLabel; // +0x28
    UIScrollView * _recommendScrollView; // +0x30
    NSMutableArray * _recommendCardsArray; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)configRecommendList:(id)arg1;
- (void)didPublishSelectAsset:(id)arg1;
- (void)didSelectCardAssset:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (id)reportObjWithIndex:(long long)arg1 videoId:(id)arg2 action:(long long)arg3;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recommendVideoList;
- (void)setRecommendVideoList:(id)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)tailLabel;
- (void)setTailLabel:(id)arg1;
- (id)recommendScrollView;
- (void)setRecommendScrollView:(id)arg1;
- (id)recommendCardsArray;
- (void)setRecommendCardsArray:(id)arg1;
- (void).cxx_destruct;
@end

