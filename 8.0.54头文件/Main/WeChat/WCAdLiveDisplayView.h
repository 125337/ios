@interface WCAdLiveDisplayView : MMUIView
{
    BOOL _isFullCard; // +0x8
    WCDataItem * _dataItem; // +0x10
    MMUIView * _liveStatusView; // +0x18
    UIImageView * _liveStatusIcon; // +0x20
    MMUILabel * _liveStatusText; // +0x28
    WCAdRollView * _liveDescView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 isFullCard:(BOOL)arg3;
- (void)initView;
- (void)updateLiveStatus:(int)arg1;
- (void)showLiveStatusViewWithText:(id)arg1 bgColor:(id)arg2;
- (void)updateLiveStatusViewLayout;
- (void)onViewDisplay:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isFullCard;
- (void)setIsFullCard:(BOOL)arg1;
- (id)liveStatusView;
- (void)setLiveStatusView:(id)arg1;
- (id)liveStatusIcon;
- (void)setLiveStatusIcon:(id)arg1;
- (id)liveStatusText;
- (void)setLiveStatusText:(id)arg1;
- (id)liveDescView;
- (void)setLiveDescView:(id)arg1;
- (void).cxx_destruct;
@end

