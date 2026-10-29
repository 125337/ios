@interface WXKBWeSearchMessageAction : WXKBMessageAction
{
    NSDictionary * _dataItem; // +0x8
}
- (id)initWithDictionary:(id)arg1;
- (void)privatePerform;
- (id)message;
- (id)finderProfileMessage;
- (id)brandProfileMessage;
- (BOOL)openWithMessage:(id)arg1;
- (BOOL)openBrandProfileWithMessage:(id)arg1 chatContact:(id)arg2;
- (void)report;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end

