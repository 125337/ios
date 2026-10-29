@interface WCTimelinePOICreateViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate, ICreatePOIMgrExt, POICategoryDelegate, WCAddressLogicMgrExt, ILocationMgrExt>
{
    NSString * _poiName; // +0x70
    CLLocation * _location; // +0x78
    MMTableViewInfo * _tableViewInfo; // +0x80
    NSMutableArray * _infoItems; // +0x88
    WCBaseTextFieldItem * _poiNameTextFieldItem; // +0x90
    WCPOIAddressPickerItem * _districtPickerItem; // +0x98
    WCBaseTextFieldItem * _addressTextFieldItem; // +0xa0
    WCBaseTextFieldItem * _categoryPickerItem; // +0xa8
    WCBaseTextFieldItem * _telephoneTextFieldItem; // +0xb0
    MMUIButton * _seeMoreButton; // +0xb8
    unsigned long long _geoTag; // +0xc0
    BOOL _lockSelection; // +0xc8
    BOOL _isLiteView; // +0xc9
    unsigned int _createPOICellIndex; // +0xcc
    NSString * _currentSearchID; // +0xd0
    id <POICreateDelegate> _delegate; // +0xd8
}
- (id)initWithPOIName:(id)arg1 Location:(id)arg2 Delegate:(id)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initRequiredData;
- (void)initOptionalData;
- (void)initDistrict;
- (void)selectAddress:(id)arg1;
- (void)hideKeyboard;
- (void)onSeeMore;
- (void)onReturn;
- (void)onDone;
- (BOOL)validateData;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)OnCreatePOI:(id)arg1 ID:(id)arg2 Error:(int)arg3;
- (void)onSelectedCategory:(id)arg1;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (unsigned int)createPOICellIndex;
- (void)setCreatePOICellIndex:(unsigned int)arg1;
- (id)currentSearchID;
- (void)setCurrentSearchID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
