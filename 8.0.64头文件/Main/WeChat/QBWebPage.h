@interface QBWebPage : NSObject
{
    BOOL _finished; // +0x8
    NSURL * _URL; // +0x10
    id _webview; // +0x18
    NSMutableArray * _itemArray; // +0x20
    NSMutableDictionary * _pageInfo; // +0x28
    double _timestamp; // +0x30
}
+ (id)webpageWithURL:(id)arg1;
- (id)init;
- (id)webItemWithURL:(id)arg1 createWhenNotExist:(BOOL)arg2;
- (void)addWebItemEvent:(id)arg1;
- (void)addPageInfoWithKey:(id)arg1 value:(id)arg2 allowDuplicateKey:(BOOL)arg3;
- (id)pageID;
- (id)JSONInfoWithDetail:(BOOL)arg1;
- (id)dateDesForDate:(id)arg1;
- (id)commonInfo;
- (void).cxx_destruct;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
@end
