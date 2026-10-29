@interface MMAuthorizeGameInfoCellVM : NSObject
{
    BOOL _shouldShow; // +0x8
    unsigned int _selectStatus; // +0xc
    double _cellHeight; // +0x10
    UserGrantInterfaceBody_InterfaceBodyItem * _bodyItem; // +0x18
}
- (void)prepareDataForUse;
- (void)calCellHeight;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (id)bodyItem;
- (void)setBodyItem:(id)arg1;
- (unsigned int)selectStatus;
- (void)setSelectStatus:(unsigned int)arg1;
- (BOOL)shouldShow;
- (void)setShouldShow:(BOOL)arg1;
- (void).cxx_destruct;
@end

