@interface WCFinderLBSCardContentView : UIView <MMWebImageViewDelegate>
{
    id <WCFinderLBSCardContentViewDelegate> _delegate; // +0x8
    unsigned long long _uiStyle; // +0x10
    FinderJumpInfo_LbsLifeCardStyle * _cardStyle; // +0x18
    MMWebImageView * _imageView; // +0x20
    UILabel * _poiTitle; // +0x28
    WCFinderLBSCardWordingListView * _firstWordingList; // +0x30
    WCFinderLBSCardWordingListView * _secondWordingList; // +0x38
    WCFinderLBSCardWordingListView * _recommendWordingList; // +0x40
    MMUIButton * _favButton; // +0x48
    UIImageView * _rightArrow; // +0x50
    UILabel * _scoreLabel; // +0x58
    WCFinderJumpInfoLBSCardScoreView * _scoreView; // +0x60
    double _layoutWidth; // +0x68
}
+ (id)favButtonTitleWithStyle:(id)arg1;
+ (id)poiTitleAttributedStringWithPOIName:(id)arg1 poiNameWording:(id)arg2;
+ (double)heightForCellWithStyle:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(unsigned long long)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)layoutUI;
- (void)updateWithStyle:(id)arg1;
- (id)createPOIFavButton;
- (void)onFavBtnClicked:(id)arg1;
- (void)onCardClicked:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (id)cardStyle;
- (void)setCardStyle:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)poiTitle;
- (void)setPoiTitle:(id)arg1;
- (id)firstWordingList;
- (void)setFirstWordingList:(id)arg1;
- (id)secondWordingList;
- (void)setSecondWordingList:(id)arg1;
- (id)recommendWordingList;
- (void)setRecommendWordingList:(id)arg1;
- (id)favButton;
- (void)setFavButton:(id)arg1;
- (id)rightArrow;
- (void)setRightArrow:(id)arg1;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg1;
- (id)scoreView;
- (void)setScoreView:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end

