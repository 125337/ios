@interface WCTimeLineAdFlipCardView : WCContentItemBaseView <WCTimeLineAdFlipCardMediaHolderViewDelegate>
{
    WCAdFlipCardInfo * _adFlipCardInfo; // +0x38
    WCTimeLineAdFlipCardMediaHolderView * _mediaHolder; // +0x40
    WCTimeLineAdFlipCardIntroduceView * _introduceView; // +0x48
    WCAdFlipCardLogic * _flipLogic; // +0x50
}
+ (double)heightForDataItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)getMainContentView;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemBecomeInvisible;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)flipLogic;
- (id)mediaHolder;
- (id)introduceView;
- (id)reportInfo;
- (void)onMediaHolderFlippedWithIndex:(long long)arg1;
- (id)onMediaHolderFetchReportInfo;
- (void)onMediaHolderClickedWithIndex:(long long)arg1 originView:(id)arg2 clickType:(unsigned long long)arg3;
- (id)adFlipCardInfo;
- (void)setAdFlipCardInfo:(id)arg1;
- (void)setMediaHolder:(id)arg1;
- (void)setIntroduceView:(id)arg1;
- (void)setFlipLogic:(id)arg1;
- (void).cxx_destruct;
@end
