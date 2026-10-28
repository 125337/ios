@interface MultiRoomContactSelectViewController : RoomContactSelectViewController
{
    OrderedDictionary * m_dicMultiSelect; // +0x118
}
- (id)init;
- (void)viewDidLoad;
- (void)setArrMultiSelect:(id)arg1;
- (void)doClickRightBarButton;
- (void)updateRightBtn;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (BOOL)isSelected:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (void)onCancel:(id)arg1;
- (void).cxx_destruct;
@end
