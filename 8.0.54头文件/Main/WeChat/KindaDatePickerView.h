@interface KindaDatePickerView : KindaView <WCBaseInfoItemDelegate, MMKDatePickerView>
{
    long long m_type; // +0xa8
    MMKDatePickerViewOnSelectCallback * m_onSelectCallback; // +0xb0
    WCPaySelectDateItem * _dateItem; // +0xb8
}
- (id)init;
- (id)getView;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setValue:(id)arg1;
- (id)getValue;
- (void)setOnSelectCallback:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)getType;
- (long long)nowYear;
- (void)setStartYear:(long long)arg1 endYear:(long long)arg2 beginYear:(long long)arg3;
- (void)setOriginDate:(int)arg1 month:(int)arg2 day:(int)arg3;
- (void)setHint:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (id)getSelectedDate;
- (id)getStartDate;
- (id)getEndDate;
- (void)setCanBeLongTerm:(BOOL)arg1;
- (BOOL)getCanBeLongTerm;
- (int)yearOfNow;
- (long long)timeForDate:(id)arg1;
- (id)currentDate;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (id)dateItem;
- (void)setDateItem:(id)arg1;
- (void).cxx_destruct;
@end

