@interface WCFinderFeedPickerSelectedInfo : NSObject
{
    WCFinderDataItem * _dataItem; // +0x8
    long long _eventCode; // +0x10
}
- (id)initWithParams:(id)arg1 eventCode:(long long)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (long long)eventCode;
- (void)setEventCode:(long long)arg1;
- (void).cxx_destruct;
@end
