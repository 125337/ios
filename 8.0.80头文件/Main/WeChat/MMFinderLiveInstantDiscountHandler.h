@interface MMFinderLiveInstantDiscountHandler : NSObject <MMFinderLiveInstantDiscountWidgetDelegate>
{
    MMFinderLiveTaskId * _taskID; // +0x8
    FinderLiveGetMoneyOffTagResponse * _info; // +0x10
    id <MMFinderLiveInstantDiscountHandlerDelegate> _delegate; // +0x18
    MMFinderLiveInstantDiscountWidgetView * _widgetView; // +0x20
}
- (void)handleInfo:(id)arg1;
- (void)showWidgetWithInfo:(id)arg1;
- (id)widgetContainerView;
- (void)clean;
- (void)onInstantDiscountWidgetClicked;
- (void)onInstantDiscountWidgetShouldBeReplaced;
- (void)autoOpenActivityPageIfNeeded;
- (void)openActivityPage;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)widgetView;
- (void)setWidgetView:(id)arg1;
- (void).cxx_destruct;
@end
