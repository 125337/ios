@interface KindaCountPickerView : KindaView <WCBaseInfoItemDelegate, MMKCountPickerView>
{
    WCPaySelectCountItem * _countItem; // +0xa8
    MMKCountPickerViewOnSelectCallback * _callback; // +0xb0
}
- (id)init;
- (id)getView;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setValue:(id)arg1;
- (id)getValue;
- (void)setOnSelectCallback:(id)arg1;
- (void)setDefaultCount:(int)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (id)countItem;
- (void)setCountItem:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
