@interface WCAdConventionalHalfScreenMediaBaseView : MMUIView
{
    id <WCAdConventionalHalfScreenMediaViewDelegate> _delegate; // +0x8
    long long _visibleType; // +0x10
    WCDataItem * _dataItem; // +0x18
    MMUIButton * _backgroundButton; // +0x20
}
+ (id)fetchHalfScreenMediaViewWithFrame:(CGRect)arg1 dataItem:(id)arg2 clickIndex:(long long)arg3 delegate:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 delegate:(id)arg3;
- (CGSize)fetchMediaSize;
- (double)fetchMediaHeightWithWidth:(double)arg1;
- (double)fetchMediaWidthWithHeight:(double)arg1;
- (double)fetchMediaContentHeightWithWidth:(double)arg1;
- (double)fetchMediaContentWidthWithHeight:(double)arg1;
- (void)updateMediaContentWithHeight:(double)arg1;
- (void)updateMediaContentWithWidth:(double)arg1 height:(double)arg2;
- (void)layoutSubviews;
- (void)onHostViewWillEnter;
- (void)onHostViewDidEnter;
- (void)onHostViewDidExit;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (id)fetchMediaImage;
- (id)fetchCurrentSnapshot;
- (long long)fetchCurrentIndex;
- (id)backgroundButton;
- (void)onBackgroundButtonBeClicked;
- (void)sendMediaViewContentBeClickedEvent;
- (id)reportManager;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)visibleType;
- (void)setVisibleType:(long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (void).cxx_destruct;
@end

