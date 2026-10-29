@interface FlutterNewLifeViewController : MMFlutterViewController <FlutterCommentMentionDelegate, TingCommentInputDelegate>
{
    TingFlutterCommentInputController * _commentInputController; // +0x68
}
- (id)initWithFlutterInstance:(id)arg1;
- (void)viewDidLoad;
- (void)onMentionPanelShow;
- (void)onMentionContactSelect:(id)arg1;
- (void)onMentionBtnExpose;
- (void)onMentionBtnClick;
- (void)activeCommentInput:(id)arg1 result:(id /* block */)arg2;
- (void)registerYReportSdk;
- (id)commentInputController;
- (void)setCommentInputController:(id)arg1;
- (void).cxx_destruct;
@end

