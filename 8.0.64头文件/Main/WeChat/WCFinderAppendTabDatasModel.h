@interface WCFinderAppendTabDatasModel : NSObject
{
    unsigned long long _scene; // +0x8
    long long _tabType; // +0x10
    NSArray * _appendContentVMArray; // +0x18
    NSArray * _appendDataItemsArray; // +0x20
    NSArray * _appendPostDataItemsArray; // +0x28
    NSString * _scrollToFeedId; // +0x30
    NSData * _lastBuffer; // +0x38
    WCFinderRedDotCtrlInfo * _redDotCtrlInfo; // +0x40
}
- (id)description;
- (BOOL)hasAppendData;
- (BOOL)shouldRefreshTopData;
- (void)triggerCheckPostDataItems;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (id)appendContentVMArray;
- (void)setAppendContentVMArray:(id)arg1;
- (id)appendDataItemsArray;
- (void)setAppendDataItemsArray:(id)arg1;
- (id)appendPostDataItemsArray;
- (void)setAppendPostDataItemsArray:(id)arg1;
- (id)scrollToFeedId;
- (void)setScrollToFeedId:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)redDotCtrlInfo;
- (void)setRedDotCtrlInfo:(id)arg1;
- (void).cxx_destruct;
@end
