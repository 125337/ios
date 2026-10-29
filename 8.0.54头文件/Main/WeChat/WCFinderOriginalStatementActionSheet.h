@interface WCFinderOriginalStatementActionSheet : WCFinderCommonTitleActionSheet
{
    int _commentScene; // +0x8
    id <WCFinderOriginalStatementActionSheetDelegate> _finderDelegate; // +0x10
}
+ (id)buildActionSheetByTitle:(id)arg1 subTitle:(id)arg2 rightButtonMsg:(id)arg3 clickRightButtonBlock:(id /* block */)arg4 leftButtonMsg:(id)arg5 clickLeftButtonBlock:(id /* block */)arg6 bindReportViewBlock:(id /* block */)arg7;
- (double)appendBottomView:(id)arg1 bottomLine:(double)arg2;
- (void)onClickCancelBtn;
- (void)bindReportFromView:(id)arg1 viewId:(id)arg2 reportPolicy:(unsigned long long)arg3;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end

