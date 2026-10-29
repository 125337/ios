@interface ChatBotHistoryItem : NSObject
{
    long long _type; // +0x8
    long long _itemstatus; // +0x10
    double _rowHeight; // +0x18
}
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)itemstatus;
- (void)setItemstatus:(long long)arg1;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;
@end
