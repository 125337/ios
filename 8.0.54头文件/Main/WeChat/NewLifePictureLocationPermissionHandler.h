@interface NewLifePictureLocationPermissionHandler : NewLifeActionHandler <WCFinderCommonEduTipsActionSheetDelegate, WCFinderCommonTitleDescActionSheetDelegate>
- (void)handleRequest:(id)arg1;
- (void)showPermissionActionSheet;
- (BOOL)hasPermission;
- (void)endActionWithPermission:(BOOL)arg1;
- (void)eduTipsActionSheetClickAcceptBtnFrom:(id)arg1 receiveRule:(BOOL)arg2;
- (void)eduTipsActionSheetClickCancelBtnFrom:(id)arg1;
- (void)eduTipsActionSheetClickRuleUrl:(id)arg1 actionSheet:(id)arg2;
- (void)eduTipsActionSheetClickTrailBtnFrom:(id)arg1;
- (void)onCommonTitleDescActionSheetClickCloseAction:(id)arg1;
@end

