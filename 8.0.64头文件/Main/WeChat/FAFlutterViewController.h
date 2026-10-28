@interface FAFlutterViewController : MMFlutterViewController <TingCommentInputDelegate>
{
    NSDictionary * _params; // +0x70
    TingFlutterCommentInputController * _commentInputController; // +0x78
}
+ (id)extraPlugins;
+ (id)commonReportParams;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)activeCommentInput:(id)arg1 result:(id /* block */)arg2;
- (id)params;
- (void)setParams:(id)arg1;
- (id)commentInputController;
- (void)setCommentInputController:(id)arg1;
- (void).cxx_destruct;
@end
