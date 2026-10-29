@interface FavForwardPreparedItem : NSObject
{
    NSString * _selectionKey; // +0x8
    NSArray * _messageWraps; // +0x10
    NSArray * _forwardingItems; // +0x18
    NSArray * _forwardingDataWraps; // +0x20
    NSArray * _recentItems; // +0x28
    NSString * _warningTip; // +0x30
}
- (id)selectionKey;
- (void)setSelectionKey:(id)arg1;
- (id)messageWraps;
- (void)setMessageWraps:(id)arg1;
- (id)forwardingItems;
- (void)setForwardingItems:(id)arg1;
- (id)forwardingDataWraps;
- (void)setForwardingDataWraps:(id)arg1;
- (id)recentItems;
- (void)setRecentItems:(id)arg1;
- (id)warningTip;
- (void)setWarningTip:(id)arg1;
- (void).cxx_destruct;
@end
