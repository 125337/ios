@interface WCFinderColumnReportInfo : NSObject
{
    int _tabType; // +0x8
    int _commentScene; // +0xc
    NSData * _rootLastBuffer; // +0x10
}
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)rootLastBuffer;
- (void)setRootLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
