@interface WCTableViewNormalCellManager : WCTableViewCellManager
{
    double titleRight; // +0x8
    BOOL _dr_isRtReport; // +0x10
    NSString * _dr_viewId; // +0x18
    id /* block */ _dr_dynamicParamsBlock; // +0x20
    id /* block */ _longPressAction; // +0x28
    unsigned long long _dr_reportPolicy; // +0x30
    unsigned long long _dr_routeRule; // +0x38
}
+ (unsigned long long)accessoryType:(long long)arg1;
+ (id)cellForMakeSel:(SEL)arg1 makeTarget:(id)arg2 height:(double)arg3 userInfo:(id)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 accessoryType:(long long)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 accessoryType:(long long)arg5 pathKey:(id)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 imageName:(id)arg5 accessoryType:(long long)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4 imageName:(id)arg5 accessoryType:(long long)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4 image:(id)arg5 accessoryType:(long long)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 accessoryType:(long long)arg4;
+ (id)normalCellForTitle:(id)arg1 rightValue:(id)arg2;
+ (id)editorCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 tip:(id)arg4 focus:(BOOL)arg5 autoCorrect:(BOOL)arg6 text:(id)arg7;
+ (id)badgeCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4;
+ (id)badgeCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4 pathKey:(id)arg5;
+ (double)getAutoSizingRightMargin:(id)arg1;
+ (id)urlInnerBlueCellForTitle:(id)arg1 rightValue:(id)arg2 url:(id)arg3;
+ (id)urlInnerCellForTitle:(id)arg1 url:(id)arg2;
- (void)addUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)getUserInfoValueForKey:(id)arg1;
- (void)actionEditorCell:(id)arg1;
- (void)actionUrlInnerCell;
- (void)makeEditorCell:(id)arg1;
- (id)init;
- (id /* block */)dr_setViewReportPolicy;
- (void)setCell:(id)arg1;
- (void)configureCell:(id)arg1;
- (double)cellHeightFor:(id)arg1;
- (double)cellSeparatorLeftInset;
- (double)cellSeperateLineRightInset;
- (double)getLeftLabelLeft;
- (double)getLeftLabelMaxWidth:(double)arg1;
- (double)getRightLabelMaxWidth:(double)arg1;
- (double)getRightConfigStaticLeft:(double)arg1;
- (double)getLeftConfigRight:(double)arg1;
- (void)configureCell:(id)arg1 withLeftConfig:(id)arg2;
- (void)configureCell:(id)arg1 withRightConfig:(id)arg2;
- (double)getSmallIconLeftMargin;
- (void)switchDidChanged:(id)arg1;
- (void)onLongPress:(id)arg1;
- (id)dr_viewId;
- (void)setDr_viewId:(id)arg1;
- (id /* block */)dr_dynamicParamsBlock;
- (void)setDr_dynamicParamsBlock:(id /* block */)arg1;
- (id /* block */)longPressAction;
- (void)setLongPressAction:(id /* block */)arg1;
- (unsigned long long)dr_reportPolicy;
- (void)setDr_reportPolicy:(unsigned long long)arg1;
- (unsigned long long)dr_routeRule;
- (void)setDr_routeRule:(unsigned long long)arg1;
- (BOOL)dr_isRtReport;
- (void)setDr_isRtReport:(BOOL)arg1;
- (void).cxx_destruct;
@end

