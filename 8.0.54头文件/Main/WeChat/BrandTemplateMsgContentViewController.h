@interface BrandTemplateMsgContentViewController : BaseMsgContentViewController
{
    NSString * _templateSessionId; // +0x1c8
    NSString * _templateId; // +0x1d0
    MMUILabel * _emptyLabel; // +0x1d8
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

