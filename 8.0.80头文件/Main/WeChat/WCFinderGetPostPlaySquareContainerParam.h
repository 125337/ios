@interface WCFinderGetPostPlaySquareContainerParam : NSObject
{
    int _tabId; // +0x8
    NSString * _byPassInfo; // +0x10
    NSData * _lastBuffer; // +0x18
}
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (int)tabId;
- (void)setTabId:(int)arg1;
- (void).cxx_destruct;
@end
