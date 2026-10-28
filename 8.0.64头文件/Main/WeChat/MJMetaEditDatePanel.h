@interface MJMetaEditDatePanel : UIViewController
{
    id /* block */ _dateDidChageHandler; // +0x8
    MJSegmentViewModel * _segmentVM; // +0x10
    MJDatePickerView * _datePicker; // +0x18
}
- (id)initWithSegmentVM:(id)arg1;
- (void)setupViews;
- (void)setupDatas;
- (id)selectedDate;
- (void)reloadData;
- (void)setDateDidChageHandler:(id /* block */)arg1;
- (id /* block */)dateDidChageHandler;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (id)datePicker;
- (void)setDatePicker:(id)arg1;
- (void).cxx_destruct;
@end
