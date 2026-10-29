@interface WCAdCommonBarContainerView : MMUIView <WCAdRockPaperScissorsViewDelegate, WCAdRandomSelectCardViewDelegate, WCAdWorldCupAvatarViewDelegate>
{
    id <WCAdCommonBarContainerViewDelegate> _delegate; // +0x8
    WCAdBaseBarView * _baseBarView; // +0x10
}
+ (Class)barViewClass:(id)arg1;
+ (double)totalHeight:(id)arg1 maxWidth:(double)arg2;
+ (double)topMargin:(id)arg1 maxWidth:(double)arg2;
+ (double)bottomMargin:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (id)createBarViewWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (void)updateDataItem:(id)arg1;
- (void)prepare;
- (void)prepareForDetail;
- (void)start;
- (void)pause;
- (void)stop;
- (void)onRockPaperScissorsNotifyCanvasDidBePopedWithDataItem:(id)arg1 showComment:(BOOL)arg2;
- (void)onWorldCupAvatarNotifyCanvasDidBePopedWithDataItem:(id)arg1;
- (id)onRandomSelectCardFetchMediaViewWithDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)baseBarView;
- (void)setBaseBarView:(id)arg1;
- (void).cxx_destruct;
@end
