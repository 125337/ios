@interface BrandProfileMsgLongPressContext : NSObject
{
    BOOL _shouldReportEdit; // +0x8
    UIView * _targetView; // +0x10
    BrandProfileMsgBaseCell * _highlightCell; // +0x18
    BizAppMsgDetailInfo * _itemMsg; // +0x20
    BrandProfileMessageSectionData * _sectionData; // +0x28
    BrandProfileItemBaseViewModel * _reportViewModel; // +0x30
    id /* block */ _deleteHandler; // +0x38
    id /* block */ _moreHandler; // +0x40
}
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (id)highlightCell;
- (void)setHighlightCell:(id)arg1;
- (id)itemMsg;
- (void)setItemMsg:(id)arg1;
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (id)reportViewModel;
- (void)setReportViewModel:(id)arg1;
- (id /* block */)deleteHandler;
- (void)setDeleteHandler:(id /* block */)arg1;
- (id /* block */)moreHandler;
- (void)setMoreHandler:(id /* block */)arg1;
- (BOOL)shouldReportEdit;
- (void)setShouldReportEdit:(BOOL)arg1;
- (void).cxx_destruct;
@end
