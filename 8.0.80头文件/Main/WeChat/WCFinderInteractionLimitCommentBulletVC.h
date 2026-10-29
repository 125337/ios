@interface WCFinderInteractionLimitCommentBulletVC : MMUIViewController
{
    id /* block */ _complectionBlock; // +0x70
    WCTableViewManager * _tableViewManager; // +0x78
    NSNumber * _svrSelectValue; // +0x80
    NSNumber * _currentSelectValue; // +0x88
    WCFinderContact * _contact; // +0x90
}
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (id)getTitleArray;
- (void)reloadData;
- (id)createCellWithTitle:(id)arg1 subTitle:(id)arg2 isSelected:(BOOL)arg3;
- (void)onDone;
- (void)onReturn;
- (void)clickCellAction:(id)arg1;
- (id /* block */)complectionBlock;
- (void)setComplectionBlock:(id /* block */)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)svrSelectValue;
- (void)setSvrSelectValue:(id)arg1;
- (id)currentSelectValue;
- (void)setCurrentSelectValue:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
