@interface MJMetaEditViewModel : NSObject
{
    MJSegmentViewModel * _segmentVM; // +0x8
    MJMetaBackupInfo * _info; // +0x10
    id /* block */ _dateDidChageHandler; // +0x18
    NSArray * _titleItems; // +0x20
    NSArray * _contentItems; // +0x28
    long long _editType; // +0x30
}
- (id)initWithSegmentVM:(id)arg1 editType:(long long)arg2;
- (long long)entrancePageIndex;
- (double)centerPageTitleWidth;
- (long long)numberOfPages;
- (id)titleItemAtIndex:(long long)arg1;
- (id)contentItemAtIndex:(long long)arg1;
- (void)fetchDatas;
- (void)reloadEditingPage;
- (id)createDatePanel;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id /* block */)dateDidChageHandler;
- (void)setDateDidChageHandler:(id /* block */)arg1;
- (id)titleItems;
- (void)setTitleItems:(id)arg1;
- (id)contentItems;
- (void)setContentItems:(id)arg1;
- (long long)editType;
- (void)setEditType:(long long)arg1;
- (void).cxx_destruct;
@end
