@interface WCAdRockPaperScissorsLogic : WCAdvertiseOperationLogicBase <WCAdDynamicCanvasVCExt>
{
    BOOL _markedToShowComment; // +0x8
    id <WCAdRockPaperScissorsLogicDelegate> _delegate; // +0x10
    UIView * _topBannerPAGView; // +0x18
    UIView * _leftDecorPagView; // +0x20
    UIView * _rightDecorPagView; // +0x28
    WCDataItem * _dataItem; // +0x30
    unsigned long long _contentItemScene; // +0x38
}
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)dealloc;
- (void)onAdDynamicCanvasNotifyTimelineComment:(id)arg1;
- (void)onAdDynamicCanvasNotifyDidBePoped:(id)arg1;
- (void)updateRockPaperScissorsInfoWithItem:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)tryToNotifyCanvasDidBePopedWithDataItem:(id)arg1 showComment:(BOOL)arg2;
- (void)notifyCanvasDidBePopedWithDataItem:(id)arg1 showComment:(BOOL)arg2;
- (id)fetchAdOperationLogicKey;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topBannerPAGView;
- (void)setTopBannerPAGView:(id)arg1;
- (id)leftDecorPagView;
- (void)setLeftDecorPagView:(id)arg1;
- (id)rightDecorPagView;
- (void)setRightDecorPagView:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (BOOL)markedToShowComment;
- (void)setMarkedToShowComment:(BOOL)arg1;
- (void).cxx_destruct;
@end
