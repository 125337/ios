@interface WCAdWorldCupAvatarView : WCAdBaseBarView <WCAdWorldCupAvatarContainerViewDelegate>
{
    id <WCAdWorldCupAvatarViewDelegate> _delegate; // +0x8
    WCAdWorldCupAvatarLogic * _logic; // +0x10
    WCDataItem * _dataItem; // +0x18
    unsigned long long _contentItemScene; // +0x20
    WCAdWorldCupAvatarContainerView * _containerView; // +0x28
}
+ (double)viewHeight:(id)arg1 maxWidth:(double)arg2;
+ (double)topMargin:(id)arg1 maxWidth:(double)arg2;
+ (double)bottomMargin;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (void)prepare;
- (void)prepareForDetail;
- (void)start;
- (void)pause;
- (void)stop;
- (void)updateDataItem:(id)arg1;
- (void)onWorldCupAvatarNotifyCanvasDidBePopedWithDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
