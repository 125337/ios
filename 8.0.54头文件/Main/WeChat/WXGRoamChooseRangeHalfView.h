@interface WXGRoamChooseRangeHalfView : MMPageSheetBaseView <IRoamBackupPackageServiceExt>
{
    BOOL _isUpdate; // +0x8
    WXGRoamBackupPackageDetailCell * _selectAllView; // +0x10
    UIView * _selectTypeView; // +0x18
    WXGRoamBackupPackageDetailCell * _selectUsersView; // +0x20
    unsigned long long _curSelectedType; // +0x28
    UIImageView * _selectImg; // +0x30
}
- (id)initWithIsUpdate:(BOOL)arg1;
- (void)setupSelectedData;
- (void)setupView;
- (void)addAllAction;
- (void)showSelected;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (id)selectAllView;
- (void)setSelectAllView:(id)arg1;
- (id)selectTypeView;
- (void)setSelectTypeView:(id)arg1;
- (id)selectUsersView;
- (void)setSelectUsersView:(id)arg1;
- (unsigned long long)curSelectedType;
- (void)setCurSelectedType:(unsigned long long)arg1;
- (id)selectImg;
- (void)setSelectImg:(id)arg1;
- (BOOL)isUpdate;
- (void)setIsUpdate:(BOOL)arg1;
- (void).cxx_destruct;
@end

