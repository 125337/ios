@interface EcsShareDialogLogic : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, MMActionSheetScrollViewDelegate>
{
    UIView * _view; // +0x8
    NSArray * _menuItemLine1; // +0x10
    NSArray * _menuItemLine2; // +0x18
    NSDictionary * _sourceReportData; // +0x20
    EcsShareEventCallback * _callback; // +0x28
    MMScrollActionSheet * _actionSheet; // +0x30
}
- (void)show;
- (id)checkEnableShow;
- (id)createActionSheetMenuItem;
- (id)createActionSheetMenuItem1:(id)arg1;
- (id)createActionSheetMenuItem2:(id)arg1;
- (BOOL)shouldShowRecentlyForwardView:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)view;
- (void)setView:(id)arg1;
- (id)menuItemLine1;
- (void)setMenuItemLine1:(id)arg1;
- (id)menuItemLine2;
- (void)setMenuItemLine2:(id)arg1;
- (id)sourceReportData;
- (void)setSourceReportData:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (void).cxx_destruct;
@end
