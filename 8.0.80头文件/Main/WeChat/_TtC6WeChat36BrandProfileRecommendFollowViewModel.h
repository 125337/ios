@interface _TtC6WeChat36BrandProfileRecommendFollowViewModel : NSObject
{
    void * delegate; // +0x8
    void * bizusername; // +0x10
    unsigned int scene; // +0x20
     bizuin; // +0x24
     _recommendItems; // +0x0
     _dataState; // +0x0
     _arrowAnchorPoint; // +0x0
     _viewHeight; // +0x0
     exposedCells; // +0x0
     recommendFollowUIView; // +0x0
     sessionId; // +0x0
     recommendUrl; // +0x0
}
+ (id)certificationImageWithBizInfo:(id)arg1;
+ (double)calculateHeight;
+ (double)calculateScrollViewHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bizusername;
- (void)setBizusername:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)recommendItems;
- (void)setRecommendItems:(id)arg1;
- (unsigned int)dataState;
- (void)setDataState:(unsigned int)arg1;
- (double)arrowAnchorPoint;
- (void)setArrowAnchorPoint:(double)arg1;
- (id)generateRecommendFollowView;
- (void)showRecommendViewAt:(double)arg1;
- (id)itemAtIndex:(long long)arg1;
- (double)scrollCellWidth;
- (double)scrollCellSpacing;
- (void)onMoreButtonClicked;
- (void)onCellClickedWithItem:(id)arg1 pos:(long long)arg2;
- (void)onCellExposedWithItem:(id)arg1 pos:(long long)arg2;
- (id)init;
- (void).cxx_destruct;
@end
