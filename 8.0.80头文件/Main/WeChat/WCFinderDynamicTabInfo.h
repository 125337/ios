@interface WCFinderDynamicTabInfo : NSObject <NSCopying>
{
    unsigned int _tabId; // +0x8
    int _commentScene; // +0xc
    unsigned int _tabContextIdPrefix; // +0x10
    NSString * _tabName; // +0x18
    NSString * _pageName; // +0x20
}
- (id)initWithTabId:(unsigned int)arg1 tabName:(id)arg2 commentScene:(int)arg3;
- (id)initWithTabId:(unsigned int)arg1 tabName:(id)arg2 commentScene:(int)arg3 tabContextIdPrefix:(unsigned int)arg4 pageName:(id)arg5;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)tabId;
- (id)tabName;
- (int)commentScene;
- (unsigned int)tabContextIdPrefix;
- (id)pageName;
- (void).cxx_destruct;
@end
