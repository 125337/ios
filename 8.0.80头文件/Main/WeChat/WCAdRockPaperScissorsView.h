@interface WCAdRockPaperScissorsView : WCAdBaseBarView <WCAdRockPaperScissorsTopBannerDelegate, WCAdRockPaperScissorsTitleAreaDelegate, WCAdRockPaperScissorsLogicDelegate>
{
    id <WCAdRockPaperScissorsViewDelegate> _delegate; // +0x8
    WCDataItem * _dataItem; // +0x10
    unsigned long long _itemScene; // +0x18
    WCAdRockPaperScissorsInfo * _adRockPaperScissorsInfo; // +0x20
    WCAdRockPaperScissorsLogic * _rockPaperScissorsLogic; // +0x28
    WCAdRockPaperScissorsTopBannerView * _topBannerView; // +0x30
    WCAdRockPaperScissorsTitleAreaView * _titleAreaView; // +0x38
}
+ (double)viewHeight:(id)arg1 maxWidth:(double)arg2;
+ (double)topMargin:(id)arg1 maxWidth:(double)arg2;
+ (double)bottomMargin;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (id)topBannerView;
- (id)titleAreaView;
- (id)onTopBannerFetchLogic;
- (void)onTopBannerButtonClicked;
- (id)onTitleAreaFetchLogic;
- (id)rockPaperScissorsLogic;
- (id)fetchAdOperationLogicKey;
- (void)onRockPaperScissorsNotifyCanvasDidBePopedWithDataItem:(id)arg1 showComment:(BOOL)arg2;
- (void)prepareForUpdateDataItem;
- (void)updateDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)itemScene;
- (void)setItemScene:(unsigned long long)arg1;
- (id)adRockPaperScissorsInfo;
- (void)setAdRockPaperScissorsInfo:(id)arg1;
- (void)setRockPaperScissorsLogic:(id)arg1;
- (void)setTopBannerView:(id)arg1;
- (void)setTitleAreaView:(id)arg1;
- (void).cxx_destruct;
@end
