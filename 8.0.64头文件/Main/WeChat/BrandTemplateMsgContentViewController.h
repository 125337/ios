@interface BrandTemplateMsgContentViewController : BaseMsgContentViewController
{
    NSString * _templateSessionId; // +0x1e0
    NSString * _templateId; // +0x1e8
    MMUILabel * _emptyLabel; // +0x1f0
}
- (void)viewDidLoad;
- (void)initEmptyLabel;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadTabeView;
- (void)updateTitleView:(id)arg1 ignoreAnimation:(BOOL)arg2;
- (id)templateSessionId;
- (void)setTemplateSessionId:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (void).cxx_destruct;
@end
