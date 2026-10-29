@interface MMFinderLiveHotSaleInfosView : UIView
{
    int _scene; // +0x8
    NSDictionary * _reportExtra; // +0x10
    unsigned long long _productID; // +0x18
    MMFinderLiveTaskId * _taskID; // +0x20
    MMFinderLiveHotSaleInfosViewPlayContext * _context; // +0x28
    MMFinderLiveHotSaleInfoView * _nextInfoView; // +0x30
    MMFinderLiveHotSaleInfoView * _currentInfoView; // +0x38
    MMFinderLiveHotSaleInfoView * _lastInfoView; // +0x40
}
- (id)initWithScene:(int)arg1 productID:(unsigned long long)arg2 taskID:(id)arg3;
- (BOOL)tryUseCurrentView:(id)arg1;
- (void)playOnce:(id)arg1;
- (void)play;
- (void)checkWithContext:(id)arg1;
- (void)reportExposeIfNeeded:(id)arg1;
- (void)layoutSubviews;
- (double)bottomMargin;
- (double)spacing;
- (double)infoHeight;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)reportExtra;
- (void)setReportExtra:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)nextInfoView;
- (void)setNextInfoView:(id)arg1;
- (id)currentInfoView;
- (void)setCurrentInfoView:(id)arg1;
- (id)lastInfoView;
- (void)setLastInfoView:(id)arg1;
- (void).cxx_destruct;
@end

