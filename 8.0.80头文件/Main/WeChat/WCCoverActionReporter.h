@interface WCCoverActionReporter : NSObject
{
    long long _scene; // +0x8
    WCDataItem * _lastDisplayedDataItem; // +0x10
}
- (void)reportWithDataItem:(id)arg1 action:(long long)arg2;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)lastDisplayedDataItem;
- (void)setLastDisplayedDataItem:(id)arg1;
- (void).cxx_destruct;
@end
