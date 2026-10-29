@interface ZZFLEXTableViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ZZFLEXAngelAPIProtocol>
{
    long long _tableViewStyle; // +0x70
    MMTableView * _tableView; // +0x78
    ZZFLEXAngel * _angel; // +0x80
}
- (id)init;
- (void)loadView;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)reloadView;
- (id /* block */)reload;
- (id /* block */)clear;
- (id /* block */)clearAllItems;
- (id /* block */)clearAllCells;
- (id /* block */)update;
- (id /* block */)updateAllItems;
- (id /* block */)updateAllCells;
- (id /* block */)isEmpty;
- (id /* block */)addSection;
- (id /* block */)insertSection;
- (id /* block */)sectionForTag;
- (id /* block */)deleteSection;
- (id /* block */)hasSection;
- (id /* block */)setHeader;
- (id /* block */)setXibHeader;
- (id /* block */)setFooter;
- (id /* block */)setXibFooter;
- (id /* block */)addCell;
- (id /* block */)addXibCell;
- (id /* block */)addCells;
- (id /* block */)addXibCells;
- (id /* block */)addSeperatorCell;
- (id /* block */)insertCell;
- (id /* block */)insertXibCell;
- (id /* block */)insertCells;
- (id /* block */)insertXibCells;
- (id)deleteCell;
- (id)deleteCells;
- (id)updateCell;
- (id)updateCells;
- (id)hasCell;
- (id)dataModel;
- (id)dataModelArray;
- (id)indexPath;
- (id)hostView;
- (id)data;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableViewStyle;
- (void)setTableViewStyle:(long long)arg1;
- (id)tableView;
- (id)angel;
- (void).cxx_destruct;
@end
