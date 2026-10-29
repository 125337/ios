@interface WCAdWheelPickerLogic : WCAdvertiseOperationLogicBase <MMCommonActionSheetPickerDelegate>
{
    unsigned int _columnCount; // +0x8
    id <WCAdWheelPickerLogicDelegate> _delegate; // +0x10
    MMCommonActionSheetPicker * _wheelPicker; // +0x18
    WCAdPickerDataInfo * _pickerDataInfo; // +0x20
    NSMutableDictionary * _transferTableDic; // +0x28
}
- (id)initWithDataInfo:(id)arg1;
- (void)showPickerInView:(id)arg1;
- (id)wheelPicker;
- (void)commonPickerCancel:(id)arg1;
- (void)commonPickerConfirm:(id)arg1;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (id)generateInitPickerData;
- (void)setComponentData:(long long)arg1 dataList:(id)arg2 useDefault:(BOOL)arg3;
- (long long)findSelectedIndex:(id)arg1 selectedKey:(id)arg2;
- (id)generateComponentPickerData:(id)arg1;
- (void)makeTransferTable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setWheelPicker:(id)arg1;
- (id)pickerDataInfo;
- (void)setPickerDataInfo:(id)arg1;
- (unsigned int)columnCount;
- (void)setColumnCount:(unsigned int)arg1;
- (id)transferTableDic;
- (void)setTransferTableDic:(id)arg1;
- (void).cxx_destruct;
@end
