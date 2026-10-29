@interface CBTAsstBoardMenuViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _hasReportedMenuExposure; // +0x8
    NSMutableArray * _exposedMenuIdList; // +0x10
}
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)tryReportMenuReportEvent;
- (void)checkAndReportIfAllExposed;
- (BOOL)isForwardable;
- (BOOL)hidesInMultiSelectMode;
- (id)getCellReuseId;
- (void)onClickAction;
- (id)menuItemFont;
- (struct)rendererConfig;
- (struct)measureLayoutForTitle:(id)arg1 totalWidth:(double)arg2;
- (id)attributedStringForTitle:(id)arg1 layout:(struct)arg2 arrowImage:(id)arg3 textColor:(id)arg4;
- (id)getMenuItems;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)exposedMenuIdList;
- (void)setExposedMenuIdList:(id)arg1;
- (BOOL)hasReportedMenuExposure;
- (void)setHasReportedMenuExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
